#ifndef NORTHEASTBINARYTREEALGORITHM_HPP
#define NORTHEASTBINARYTREEALGORITHM_HPP

#include "abstractbinarytreealgorithm.hpp"

namespace Ct {

class NortheastBinaryTreeAlgorithm : public AbstractBinaryTreeAlgorithm
{
public:
  explicit NortheastBinaryTreeAlgorithm() = default;
  virtual ~NortheastBinaryTreeAlgorithm() = default;

  virtual std::vector<std::vector<CellFlags>> & generateSpanningTree
  (std::vector<std::vector<CellFlags>> & matrix);
};

} // namespace Ct

#endif // NORTHEASTBINARYTREEALGORITHM_HPP
