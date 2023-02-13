#pragma once

#include <string>

// Class Box represents the box of tiles. Initially all 9 tiles are up.
class Box {
private:
	// The tiles 1 through 9, index 0 is ignored.
	bool tiles[10];
public:

	// Constructor, initializes the box
	Box ();

	// Close one, two, or three tiles, but only if each parameter is an "up"
	//	tile or zero. Returns false if parameters given are not valid. If
	//	parameters are valid, closes tiles and returns true.
	bool close (int t1, int t2, int t3);

	// Compute the score of the box. This is the sum of all "up" tiles.
	int score () const;

	// Generate a string representation of the box.
	std::string str () const;
};

