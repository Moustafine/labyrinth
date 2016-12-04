#include <iostream>

#include "kruskalsalgorithm.hpp"
#include "labyrinth.hpp"
#include "northeastbinarytreealgorithm.hpp"
#include "northwestbinarytreealgorithm.hpp"
#include "southeastbinarytreealgorithm.hpp"
#include "southwestbinarytreealgorithm.hpp"

using namespace std;

int main()
{
  Ct::Labyrinth labyrinth(new Ct::NorthwestBinaryTreeAlgorithm(), 30, 60);
  cout << "Height: " << labyrinth.getHeight() << endl;
  cout << "Width: " << labyrinth.getWidth() << endl;
  cout << labyrinth << endl;

  labyrinth.generate(new Ct::NortheastBinaryTreeAlgorithm());
  cout << labyrinth << endl;

  labyrinth.generate(new Ct::SouthwestBinaryTreeAlgorithm());
  cout << labyrinth << endl;

  labyrinth.generate(new Ct::SoutheastBinaryTreeAlgorithm());
  cout << labyrinth << endl;

  labyrinth.generate();
  cout << labyrinth << endl;

  return 0;
}
