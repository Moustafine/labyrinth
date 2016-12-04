#ifndef KRUSKALSALGORITHM_HPP
#define KRUSKALSALGORITHM_HPP

#include "abstractalgorithm.hpp"

namespace Ct {

class KruskalsAlgorithm : public AbstractAlgorithm
{
public:
  explicit KruskalsAlgorithm() = default;
  virtual ~KruskalsAlgorithm() = default;

  virtual std::vector<std::vector<CellFlags>> & generateSpanningTree
  (std::vector<std::vector<CellFlags>> & matrix);
};

} // namespace Ct

#endif // KRUSKALSALGORITHM_HPP
