/*
* Rectangle.h
*
* Programmer – Problem Question – Part 1 of 2
* 2D axis-aligned Rectangle
* Name: Rene An
* Email: auj0827@gmail.com
*/

#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point2D.h"

// 2D axis-aligned Rectangle class with floating point coordinates
class Rectangle {
private:
	Point2D upLeft;
	Point2D upRight;
	Point2D lowLeft;
	Point2D lowRight;
public:
	// Include methods for constructing an axis-aligned Rectangle with initial size and coordinates
	// Constructor
	Rectangle(const float &x1pos, const float &y1pos, const float &x2pos, const float &y2pos);

	// Algorithm that checks whether or not a Point2D (see below) is contained in an axis-aligned Rectangle
	bool checkContained(Point2D& point2d);
	// Algorithm that checks whether or not two axis-aligned Rectangles intersect
	bool checkIntersect(Rectangle& ractangle);
	
	// Print information
	void ShowRecInfo() const;
};

#endif // !__RECTANGLE_H_
