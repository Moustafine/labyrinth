#include "southeastbinarytreealgorithm.hpp"

namespace Ct {

template <typename Typename>
using SVector = std::vector<Typename>;

SVector<SVector<CellFlags>> &
SoutheastBinaryTreeAlgorithm::generateSpanningTree
(SVector<SVector<CellFlags>> & matrix)
{
  return generate(matrix, CellFlags::SouthEdge, CellFlags::EastEdge);
}

} // namespace Ct
