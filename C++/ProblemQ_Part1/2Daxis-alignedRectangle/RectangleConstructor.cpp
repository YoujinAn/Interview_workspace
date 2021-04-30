/*
* RectangleConstructor.cpp
*
* Programmer – Problem Question – Part 1 of 2
* 2D axis-aligned Rectangle
* Name: Rene An
* Email: auj0827@gmail.com
*/

/*
Specification:
Design and Implement a C++ program that implements the following:
• 2D axis-aligned Rectangle class with floating point coordinates
	- Include methods for constructing an axis-aligned Rectangle with initial size and coordinates
• Algorithm that checks whether or not a Point2D (see below) is contained in an axis-aligned Rectangle
• Algorithm that checks whether or not two axis-aligned Rectangles intersect
• Test code that creates instances of your class and tests your implementation

Given:
You can use this struct in your implementation. Feel free to modify this struct as well.
struct Point2D
{
	float x;
	float y;
};
*/

#include <iostream>
#include "Point2D.h"
#include "Rectangle.h"
using namespace std;

int main() {
	cout << "*** Test constructing an axis - aligned Rectangle with initial ***\n" << endl;
	Rectangle rec1(1.3, 5.5, 4.2, 1.8);	// upLeft(x1pos, y1pos), lowRight(x2pos, y2pos)
	cout << "Ractangle 1 )" << endl;
	rec1.ShowRecInfo();

	Rectangle rec2(1.1, 6.3, 7.4, 2.1);
	cout << "\nRactangle 2 )" << endl;
	rec2.ShowRecInfo();

	cout << "\n\n";
	cout << "*** Test Point2D (see below) is contained in an axis-aligned Rectangle ***\n" << endl;
	Point2D point1(1.23, 6.2);
	Point2D point2(6.2, 2.3);

	cout << "Is Point2D point1 (1.23, 2.41) contained in the Ractangle 1 or 2 ? " << endl;
	cout << "Ractangle 1: ";
	if (rec1.checkContained(point1)) { cout << "YES" << endl; }	else { cout << "NO" << endl; }
	cout << "Ractangle 2: ";
	if (rec2.checkContained(point1)) { cout << "YES" << endl; } else { cout << "NO" << endl; }

	cout << "Is Point2D point2 (6.2, 1.9) contained in the Ractangle 1 or 2? " << endl;
	cout << "Ractangle 1: ";
	if (rec1.checkContained(point2)) { cout << "YES" << endl; }	else { cout << "NO" << endl; }
	cout << "Ractangle 2: ";
	if (rec2.checkContained(point2)) { cout << "YES" << endl; }	else { cout << "NO" << endl; }

	cout << "\n\n";
	cout << "*** Test two axis-aligned Rectangles intersect ***\n" << endl;
	cout << "Do the Ractangle 1 and Ractangle 2 intersect? ";
	if(rec1.checkIntersect(rec2)) { cout << "YES" << endl; } else { cout << "NO" << endl; }

	return 0;
}