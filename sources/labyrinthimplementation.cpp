#include "labyrinthimplementation.hpp"

#include "abstractalgorithm.hpp"

namespace Ct {

using SIndex = std::size_t;

template <typename Typename>
using SVector = std::vector<Typename>;

LabyrinthImplementation::LabyrinthImplementation(AbstractAlgorithm * algorithm,
                                                 SIndex height,
                                                 SIndex width)
  : algorithm(algorithm),
    matrix(height, SVector<CellFlags>(width, CellFlags::Empty))
{
  this->algorithm->generateSpanningTree(matrix);
}

const SVector<SVector<CellFlags>> & LabyrinthImplementation::getMatrix() const
{
  return matrix;
}

void LabyrinthImplementation::generate()
{
  this->algorithm->generateSpanningTree(matrix);
  return;
}

bool LabyrinthImplementation::generate(AbstractAlgorithm * algorithm)
{
  if (algorithm != nullptr) {
    this->algorithm.reset(algorithm);
    generate();
    return true;
  } else {
    return false;
  }
}

} // namespace Ct
