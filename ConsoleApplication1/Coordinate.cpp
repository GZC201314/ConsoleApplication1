#include "Coordinate.h"

ostream& operator<<(ostream& out, Coordinate& coor)
{
	out << "(" << coor.X() << "," << coor.Y() << ")" << endl;
	return out;
}

Coordinate::Coordinate(int x, int y)
{
	X(x);
	Y(y);
}

void Coordinate::printCoordinate()
{
	cout << "(" << X() << "," << Y() << ")" << endl;
}
