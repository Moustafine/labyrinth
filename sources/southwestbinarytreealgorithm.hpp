#ifndef SOUTHWESTBINARYTREEALGORITHM_HPP
#define SOUTHWESTBINARYTREEALGORITHM_HPP

#include "abstractbinarytreealgorithm.hpp"

namespace Ct {

class SouthwestBinaryTreeAlgorithm : public AbstractBinaryTreeAlgorithm
{
public:
  explicit SouthwestBinaryTreeAlgorithm() = default;
  virtual ~SouthwestBinaryTreeAlgorithm() = default;

  virtual std::vector<std::vector<CellFlags>> & generateSpanningTree
  (std::vector<std::vector<CellFlags>> & matrix);
};

} // namespace Ct

#endif // SOUTHWESTBINARYTREEALGORITHM_HPP
