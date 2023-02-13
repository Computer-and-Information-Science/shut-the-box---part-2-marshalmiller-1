#include "box.h"
#include <string>
using namespace std;

Box::Box () {
	// Initialize all 9 tiles to "up" (or "open")
	for (int i = 1; i <= 9; i++)
		tiles[i] = true; // true = tile is up
}

bool Box::close (int t1, int t2, int t3) {
	// Validate t1. If not zero, must be 1-9 and "up"
	if (t1 != 0)
		if (t1 < 1 || t1 > 9 || !tiles[t1])
			return false;
	// Validate t2. If not zero, must be 1-9, not t1 and "up"
	if (t2 != 0)
		if (t2 < 1 || t2 > 9 || t2 == t1 || !tiles[t2])
			return false;
	// Validate t3. If not zero, must be 1-9, not t1 or t2, and "up"
	if (t3 != 0)
		if (t3 < 1 || t3 > 9 || t3 == t1 || t3 == t2 || !tiles[t3])
			return false;
	// If t1 not zero, close the tile.
	if (t1 != 0)
		tiles[t1] = false;
	// If t2 not zero, close the tile.
	if (t2 != 0)
		tiles[t2] = false;
	// If t3 not zero, close the tile.
	if (t3 != 0)
		tiles[t3] = false;
	return true;
}

int Box::score () const {
	int sum = 0;
	for (int i = 1; i <= 9; i++)
		if (tiles[i])
			sum += i;
	return sum;
}

string Box::str () const {
	// Initialize string indicating all tiles as up.
	string s = "1 2 3 4 5 6 7 8 9";
	// For each tile, if down, replace with "*"
	for (int i = 1; i <= 9; i++)
		if (!tiles[i])
			s[(i - 1) * 2] = '*';
	return s;
}
