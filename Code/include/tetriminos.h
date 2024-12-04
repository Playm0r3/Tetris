#ifndef __TETRIMINOS__
#define __TETRIMINOS__

#include <raylib.h>
#include <vector>

class Tetriminos {

public:
	int x;
	int y;

	std::vector<Vector2> pattern;

	void DrawTetriminos();

};

class O : public Tetriminos{

public:
	O(int _x, int _y);

};

#endif