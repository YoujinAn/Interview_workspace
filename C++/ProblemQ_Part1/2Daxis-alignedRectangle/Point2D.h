/*
* Point2D.h
*
* Programmer – Problem Question – Part 1 of 2
* 2D axis-aligned Rectangle
* Name: Rene An
* Email: auj0827@gmail.com
*/

#ifndef __POINT2D_H_
#define __POINT2D_H_

class Point2D {
private:
	float x;
	float y;
public:
	// Constructor
	Point2D(const float &xpos, const float &ypos);

	// Get & Set
	float GetX() const;
	float GetY() const;
	bool SetX(float xpos);
	bool SetY(float ypos);

	// Overloaded operators
	bool operator== (const Point2D& rhs);
};

#endif // !__POINT2D_H_
