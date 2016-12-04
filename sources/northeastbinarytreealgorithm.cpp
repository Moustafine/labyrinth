#include "northeastbinarytreealgorithm.hpp"

namespace Ct {

template <typename Typename>
using SVector = std::vector<Typename>;

SVector<SVector<CellFlags>> &
NortheastBinaryTreeAlgorithm::generateSpanningTree
(SVector<SVector<CellFlags>> & matrix)
{
  return generate(matrix, CellFlags::NorthEdge, CellFlags::EastEdge);
}

} // namespace Ct
