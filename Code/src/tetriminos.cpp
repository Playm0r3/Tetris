#include "tetriminos.h"

void Tetriminos::DrawTetriminos()
{
	std::vector<Vector2>::const_iterator it = pattern.begin();
	for (; it != pattern.end() ; ++it)
	{

	}
}

O::O(int _x, int _y)
{
	pattern = {
		{Vector2(_x, _y)}, {Vector2(_x + 1, _y)},
		{Vector2(_x, _y + 1)}, {Vector2(_x + 1, _y + 1)},
	};
}