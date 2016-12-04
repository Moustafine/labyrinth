#include "northwestbinarytreealgorithm.hpp"

namespace Ct {

template <typename Typename>
using SVector = std::vector<Typename>;

SVector<SVector<CellFlags>> &
NorthwestBinaryTreeAlgorithm::generateSpanningTree
(SVector<SVector<CellFlags>> & matrix)
{
  return generate(matrix, CellFlags::NorthEdge, CellFlags::WestEdge);
}

} // namespace Ct
