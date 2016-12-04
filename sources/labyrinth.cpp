#include "labyrinth.hpp"

#include <algorithm>
#include <bitset>

#include "abstractalgorithm.hpp"
#include "labyrinthimplementation.hpp"

namespace Ct {

using SIndex = std::size_t;
using OutputStream = std::ostream;

template <typename Typename>
using SVector = std::vector<Typename>;

using std::for_each;
using std::endl;

Labyrinth::Labyrinth(AbstractAlgorithm * algorithm,
                     SIndex height,
                     SIndex width)
  : implementation(new LabyrinthImplementation(algorithm, height, width))
{
  ;
}

Labyrinth::~Labyrinth() = default;

SIndex Labyrinth::getHeight() const
{
  return implementation->getMatrix().size();
}

SIndex Labyrinth::getWidth() const
{
  return implementation->getMatrix().data()->size();
}

const SVector<SVector<CellFlags>> & Labyrinth::getMatrix() const
{
  return implementation->getMatrix();
}

OutputStream & operator <<(OutputStream & outputStream,
                          const Labyrinth & labyrinth)
{
  for_each(labyrinth.getMatrix().begin(),
           labyrinth.getMatrix().end(),
           [&outputStream] (const SVector<CellFlags> & matrix)
  {
    for_each(matrix.begin(),
             matrix.end(),
             [&outputStream] (const CellFlags cellFlags)
    {
//      outputStream << std::bitset<4>(static_cast<int>(cellFlags)) << " ";
//      outputStream << (static_cast<int>(cellFlags)) << " ";

      if (cellFlags == CellFlags::NorthEdge) {
        outputStream << "\342\225\271";
      } else if (cellFlags == CellFlags::SouthEdge) {
        outputStream << "\342\225\273";
      } else if (cellFlags == CellFlags::WestEdge) {
        outputStream << "\342\225\270";
      } else if (cellFlags == CellFlags::EastEdge) {
        outputStream << "\342\225\272";
      } else if (cellFlags == (CellFlags::NorthEdge | CellFlags::SouthEdge)) {
        outputStream << "\342\224\203";
      } else if (cellFlags == (CellFlags::NorthEdge | CellFlags::WestEdge)) {
        outputStream << "\342\224\233";
      } else if (cellFlags == (CellFlags::NorthEdge | CellFlags::EastEdge)) {
        outputStream << "\342\224\227";
      } else if (cellFlags == (CellFlags::SouthEdge | CellFlags::WestEdge)) {
        outputStream << "\342\224\223";
      } else if (cellFlags == (CellFlags::SouthEdge | CellFlags::EastEdge)) {
        outputStream << "\342\224\217";
      } else if (cellFlags == (CellFlags::WestEdge | CellFlags::EastEdge)) {
        outputStream << "\342\224\201";
      } else if (cellFlags == (CellFlags::NorthEdge
                       | CellFlags::SouthEdge
                       | CellFlags::WestEdge)) {
        outputStream << "\342\224\253";
      } else if (cellFlags == (CellFlags::NorthEdge
                       | CellFlags::SouthEdge
                       | CellFlags::EastEdge)) {
        outputStream << "\342\224\243";
      } else if (cellFlags == (CellFlags::NorthEdge
                       | CellFlags::WestEdge
                       | CellFlags::EastEdge)) {
        outputStream << "\342\224\273";
      } else if (cellFlags == (CellFlags::SouthEdge
                       | CellFlags::WestEdge
                       | CellFlags::EastEdge)) {
        outputStream << "\342\224\263";
      } else if (cellFlags == CellFlags::AllEdges) {
        outputStream << "\342\225\213";
      } else if (cellFlags == CellFlags::Empty) {
        outputStream << " ";
      }
    });
    outputStream << endl;
  });

  return outputStream;
}

void Labyrinth::generate()
{
  implementation->generate();
  return;
}

bool Labyrinth::generate(AbstractAlgorithm * algorithm)
{
  return implementation->generate(algorithm);
}

} // namespace Ct
