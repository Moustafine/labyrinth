#ifndef NORTHWESTBINARYTREEALGORITHM_HPP
#define NORTHWESTBINARYTREEALGORITHM_HPP

#include "abstractbinarytreealgorithm.hpp"

namespace Ct {

class NorthwestBinaryTreeAlgorithm : public AbstractBinaryTreeAlgorithm
{
public:
  explicit NorthwestBinaryTreeAlgorithm() = default;
  virtual ~NorthwestBinaryTreeAlgorithm() = default;

  virtual std::vector<std::vector<CellFlags>> & generateSpanningTree
  (std::vector<std::vector<CellFlags>> & matrix);
};

} // namespace Ct

#endif // NORTHWESTBINARYTREEALGORITHM_HPP
