#ifndef LABYRINTH_HPP
#define LABYRINTH_HPP

#include <memory>
#include <ostream>
#include <vector>

#include "cellflags.hpp"

namespace Ct {

class AbstractAlgorithm;
class LabyrinthImplementation;

class Labyrinth
{
public:

  explicit Labyrinth(AbstractAlgorithm * algorithm,
                     std::size_t height = 10,
                     std::size_t width = 10);
  ~Labyrinth();

  std::size_t getHeight() const;
  std::size_t getWidth() const;

  const std::vector<std::vector<CellFlags>> & getMatrix() const;

  void generate();
  bool generate(AbstractAlgorithm * algorithm);

private:
  std::unique_ptr<LabyrinthImplementation> implementation;
};

std::ostream & operator <<(std::ostream & outputStream,
                           const Labyrinth & labyrinth);

} // namespace Ct

#endif // LABYRINTH_HPP
