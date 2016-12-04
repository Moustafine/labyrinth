#include "abstractbinarytreealgorithm.hpp"

#include <random>

namespace Ct {

using SDefaultRandomEngine = std::default_random_engine;
using SIndex = std::size_t;
using SRandomDevice = std::random_device;

template <typename Typename>
using SVector = std::vector<Typename>;

template <typename Typename>
using SUniformIntegerDistribution = std::uniform_int_distribution<Typename>;

AbstractBinaryTreeAlgorithm::~AbstractBinaryTreeAlgorithm()
{
  ;
}

SVector<SVector<CellFlags>> & AbstractBinaryTreeAlgorithm::generate
(SVector<SVector<CellFlags>> & matrix,
 const CellFlags verticalEdge,
 const CellFlags horizontalEdge) const
{
  SIndex matrixHeight = matrix.size();
  SIndex matrixWidth = matrix.data()->size();

  for (SIndex i = 0; i < matrixHeight; ++i) {
    for (SIndex j = 0; j < matrixWidth; ++j) {
      matrix[i][j] = CellFlags::Empty;
    }
  }

  SRandomDevice randomDevice;
  SDefaultRandomEngine randomEngine(randomDevice());
  SUniformIntegerDistribution<int> edgesDistribution(0, 1);

  for (SIndex i = 0; i < matrixHeight; ++i) {
    for (SIndex j = 0; j < matrixWidth; ++j) {
      if (((i == 0) && (j == 0)
          && (verticalEdge == CellFlags::NorthEdge)
          && (horizontalEdge == CellFlags::WestEdge))
          || ((i == 0) && (j == (matrixWidth - 1))
              && (verticalEdge == CellFlags::NorthEdge)
              && (horizontalEdge == CellFlags::EastEdge))
          || ((i == (matrixHeight - 1)) && (j == 0)
              && (verticalEdge == CellFlags::SouthEdge)
              && (horizontalEdge == CellFlags::WestEdge))
          || ((i == (matrixHeight - 1)) && (j == (matrixWidth - 1))
              && (verticalEdge == CellFlags::SouthEdge)
              && (horizontalEdge == CellFlags::EastEdge))) {
      } else if (edgesDistribution(randomEngine) == 1) {
        if (((i == 0) && (verticalEdge == CellFlags::NorthEdge))
            || ((i == (matrixHeight - 1))
                && (verticalEdge == CellFlags::SouthEdge))) {
          bindCell(matrix, i, j, horizontalEdge);
        } else {
          bindCell(matrix, i, j, verticalEdge);
        }
      } else if (((j == 0) && (horizontalEdge == CellFlags::WestEdge))
                 || ((j == (matrixWidth - 1))
                     && (horizontalEdge == CellFlags::EastEdge))) {
        bindCell(matrix, i, j, verticalEdge);
      } else {
        bindCell(matrix, i, j, horizontalEdge);
      }
    }
  }
  return  matrix;
}

void AbstractBinaryTreeAlgorithm::bindCell
(SVector<SVector<CellFlags>> & matrix,
 const SIndex row,
 const SIndex column,
 const CellFlags Edge) const
{
  matrix[row][column] |= Edge;
  if (Edge == CellFlags::NorthEdge) {
    matrix[row - 1][column] |= CellFlags::SouthEdge;
  } else if (Edge == CellFlags::SouthEdge) {
    matrix[row + 1][column] |= CellFlags::NorthEdge;
  } else if (Edge == CellFlags::WestEdge) {
    matrix[row][column - 1] |= CellFlags::EastEdge;
  } else if (Edge == CellFlags::EastEdge) {
    matrix[row][column + 1] |= CellFlags::WestEdge;
  }
  return;
}

} // namespace Ct
