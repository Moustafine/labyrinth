#ifndef SOUTHEASTBINARYTREEALGORITHM_HPP
#define SOUTHEASTBINARYTREEALGORITHM_HPP


#include "abstractbinarytreealgorithm.hpp"

namespace Ct {

class SoutheastBinaryTreeAlgorithm : public AbstractBinaryTreeAlgorithm
{
public:
  explicit SoutheastBinaryTreeAlgorithm() = default;
  virtual ~SoutheastBinaryTreeAlgorithm() = default;

  virtual std::vector<std::vector<CellFlags>> & generateSpanningTree
  (std::vector<std::vector<CellFlags>> & matrix);
};

} // namespace Ct

#endif // SOUTHEASTBINARYTREEALGORITHM_HPP
