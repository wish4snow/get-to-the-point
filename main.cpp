#include <iostream>
#include <cassert>
#include "point.hpp"

using namespace std;

int main() {
	Point p1;
	Point p2;
	Point p3 = Point(1,0);
	Point p4 = Point(3,4);
	Point p5 = Point(1,0);
	Point p6 = Point(5,6); 
	Point p7 = Point(-1,-1);

	cout << "Testing ==" << endl;

	assert(p1 == p1);
	assert(p1 == p2);
	assert((p1 == p3) == false);
	assert(p3 == p5);

	cout << "Done Testing == " << endl << endl;

	cout << "Testing !=" << endl;

	assert((p1 != p1) == false);
	assert((p1 != p2) == false);
	assert(p1 != p3);
	assert(p3 != p6);

	cout << "Done Testing !=" << endl << endl;
	
	cout << "Testing -" << endl;

	assert(p1 - p2 == 0);
	assert(p1 - p3 == 1);
	assert(p1 - p7 > 1.1414);
	assert(p3 - p6 > 2.2828);

	cout << "Done Testing -" << endl << endl;

	cout << "Testing /" << endl;

	assert(p1 / p1 == Point(0, 0));
	assert(p1 / p2 == Point(0, 0));
	assert(p1 / p3 == Point(0.5, 0));
	assert(p1 / p7 == Point(-0.5, -0.5));

	cout << "Done Testing /" << endl << endl;

	cout << "Done Testing, very well!!!" << endl;
	return 0;
}