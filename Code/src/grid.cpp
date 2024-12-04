#include <vector>

#include "grid.h"

Grid::Grid() : size(200)
{
	for (int _x = 0; _x < 600; _x += 10)
	{
		for (int _y = 0; _y < 1200; _y += 20)
		{
			blocks.push_back(new Block(_x, _y, _x / 10, _y / 10));
		}
	}
	
}

Grid::Grid(int __x, int __y) : size(__x * __y)
{
	for (int _x = 0; _x < __x * BLOCK_SIZE; _x += 10)
	{
		for (int _y = 0; _y < __y * BLOCK_SIZE; _y += 20)
		{
			blocks.push_back(new Block(_x, _y, _x / 10, _y / 10));
		}
	}

}

Grid::~Grid()
{
	std::vector<Block*>::const_iterator it = blocks.begin();
	for (; it != blocks.end(); ++it)
	{
		delete* it;
	}
}

void Grid::DrawGrid() const
{
	std::vector<Block*>::const_iterator it = blocks.begin();
	for (; it != blocks.end(); ++it)
	{
		(*it)->DrawBlock();
	}
}

Block::Block(float _x, float _y, int _gX, int _gY) : x(_x), y(_y), gX(_gX), gY(_gY)
{
}

void Block::DrawBlock() const
{
	DrawRectangle(x, y, BLOCK_SIZE, BLOCK_SIZE, color);
}