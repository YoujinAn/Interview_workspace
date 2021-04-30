/*
* Point2D.cpp
*
* Programmer – Problem Question – Part 1 of 2
* 2D axis-aligned Rectangle
* Name: Rene An
* Email: auj0827@gmail.com
*/

#include <iostream>
#include "Point2D.h"
using namespace std;

Point2D::Point2D(const float& xpos, const float& ypos)
	: x(xpos), y(ypos)
{ }

float Point2D::GetX() const { return x; }
float Point2D::GetY() const { return y; }

bool Point2D::SetX(float xpos) {
	if (xpos < 0 || xpos > 100) {
		cout << "Values in the out-of-range range. (0 ~ 100)" << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point2D::SetY(float ypos) {
	if (ypos < 0 || ypos > 100) {
		cout << "Values in the out-of-range range. (0 ~ 100)" << endl;
		return false;
	}

	y = ypos;
	return true;
}

bool Point2D::operator== (const Point2D& rhs)
{
	return x == rhs.x && y == rhs.y;
}
