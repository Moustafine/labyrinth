#ifndef LABYRINTHIMPLEMENTATION_HPP
#define LABYRINTHIMPLEMENTATION_HPP

#include <memory>
#include <vector>

#include "cellflags.hpp"

namespace Ct {

class AbstractAlgorithm;

class LabyrinthImplementation
{
public:
  explicit LabyrinthImplementation(AbstractAlgorithm * algorithm,
                                   std::size_t height,
                                   std::size_t width);

  const std::vector<std::vector<CellFlags>> & getMatrix() const;

  void generate();
  bool generate(AbstractAlgorithm * algorithm);

private:
  std::shared_ptr<AbstractAlgorithm> algorithm;
  std::vector<std::vector<CellFlags>> matrix;
};

} // namespace Ct

#endif // LABYRINTHIMPLEMENTATION_HPP
