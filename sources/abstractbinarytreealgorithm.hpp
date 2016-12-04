#ifndef ABSTRACTBINARYTREEALGORITHM_HPP
#define ABSTRACTBINARYTREEALGORITHM_HPP

#include "abstractalgorithm.hpp"

namespace Ct {

class AbstractBinaryTreeAlgorithm : public AbstractAlgorithm
{
public:
  explicit AbstractBinaryTreeAlgorithm() = default;
  virtual ~AbstractBinaryTreeAlgorithm() = 0;

  virtual std::vector<std::vector<CellFlags>> & generateSpanningTree
  (std::vector<std::vector<CellFlags>> & matrix) = 0;

protected:
  std::vector<std::vector<CellFlags>> & generate
  (std::vector<std::vector<CellFlags>> & matrix,
   const CellFlags verticalEdge,
   const CellFlags horizontalEdge) const;
private:
  void bindCell(std::vector<std::vector<CellFlags>> & matrix,
                const std::size_t verticalIndex,
                const std::size_t horizontalIndex,
                const CellFlags Edge) const;
};

} // namespace Ct

#endif // ABSTRACTBINARYTREEALGORITHM_HPP
