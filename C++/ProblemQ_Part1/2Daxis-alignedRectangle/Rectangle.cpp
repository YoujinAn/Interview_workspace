/*
* Rectangle.cpp
*
* Programmer – Problem Question – Part 1 of 2
* 2D axis-aligned Rectangle
* Name: Rene An
* Email: auj0827@gmail.com
*/

#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const float& x1pos, const float& y1pos, const float& x2pos, const float& y2pos)
	: upLeft(x1pos, y1pos), lowRight(x2pos, y2pos), upRight(x2pos, y1pos), lowLeft(x1pos, y2pos)
{	}

bool Rectangle::checkContained(Point2D& point2d)
{
	if ((lowLeft.GetX() <= point2d.GetX() && lowRight.GetX() >= point2d.GetX()) &&
		(lowLeft.GetY() <= point2d.GetY() && upRight.GetY() >= point2d.GetY()))
	{
		return true;
	}
	else {
		return false; 
	}
}

bool Rectangle::checkIntersect(Rectangle& ractangle) 
{
	if ((checkContained(ractangle.lowLeft) || checkContained(ractangle.lowRight) || checkContained(ractangle.upLeft) || checkContained(ractangle.upRight)) ||
		(ractangle.checkContained(this->lowLeft) || ractangle.checkContained(this->lowRight) || ractangle.checkContained(this->upLeft) || ractangle.checkContained(this->upRight)))
	{
		return true;
	}
	else {
		return false;
	}
}

void Rectangle::ShowRecInfo() const {
	cout << setw(12) << "Upleft: [ " << upLeft.GetX() << ", " << upLeft.GetY() << " ]	";
	cout << setw(12) << "UpRight: [ " << upRight.GetX() << ", " << upRight.GetY() << " ]" << endl;
	cout << setw(12) << "Lowleft: [ " << lowLeft.GetX() << ", " << lowLeft.GetY() << " ]	";
	cout << setw(12) << "LowRight: [ " << lowRight.GetX() << ", " << lowRight.GetY() << " ]" << endl;
}
