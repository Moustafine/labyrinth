#include "southwestbinarytreealgorithm.hpp"

namespace Ct {

template <typename Typename>
using SVector = std::vector<Typename>;

SVector<SVector<CellFlags>> &
SouthwestBinaryTreeAlgorithm::generateSpanningTree
(SVector<SVector<CellFlags>> & matrix)
{
  return generate(matrix, CellFlags::SouthEdge, CellFlags::WestEdge);
}

} // namespace Ct
