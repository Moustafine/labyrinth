#ifndef ABSTRACTALGORITHM_HPP
#define ABSTRACTALGORITHM_HPP

#include <vector>

#include "cellflags.hpp"

namespace Ct {

class AbstractAlgorithm
{
public:
  explicit AbstractAlgorithm() = default;
  virtual ~AbstractAlgorithm() = 0;

  virtual std::vector<std::vector<CellFlags>> & generateSpanningTree
  (std::vector<std::vector<CellFlags>> & matrix) = 0;
};

} // namespace Ct

#endif // ABSTRACTALGORITHM_HPP
