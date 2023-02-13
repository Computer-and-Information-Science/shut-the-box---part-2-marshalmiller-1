#include "box.h"
#include <iostream>
using namespace std;

int main() {
  int tile1, tile2, tile3;
  Box box;

  cout << box.str() << endl;

  do {
    cout << "Enter 3 tiles: ";
    cin >> tile1 >> tile2 >> tile3;
    if (box.close(tile1, tile2, tile3))
      cout << box.str() << " (" << box.score() << ")\n";
    else
      cout << "Invalid tile selection\n";
  } while (box.score() && (tile1 || tile2 || tile3));
}
