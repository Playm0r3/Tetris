#ifndef __GRID__
#define __GRID__

#ifndef BLOCK_SIZE
	#define BLOCK_SIZE (60)
	#endif

#include <vector>
#include <raylib.h>

class Block {

public:
	float x;
	float y;

	int gX;
	int gY;

	Color color = DARKGRAY;

	Block(float _x, float _y, int _gX, int _gY);

	~Block() = default;

	void DrawBlock() const;


};

class Grid {

public:

	std::vector<Block*> blocks;
	int size;

	Grid();
	Grid(int _x, int _y);

	~Grid();

	void DrawGrid() const;

};



#endif