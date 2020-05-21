#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
using namespace std;
class Coordinate
{
	friend ostream& operator<<(ostream &out,Coordinate &coor);
public:
	Coordinate(int x=0,int y=0);
	void printCoordinate();
	int X() const { return m_iX; }
	void X(int val) { m_iX = val; }
	int Y() const { return m_iY; }
	void Y(int val) { m_iY = val; }
private:
	int m_iX;
	int m_iY;
};	

#endif