#include "Point.h"
#include <iostream>
#include <string>
using namespace std;

Point::Point()
{
	this->x = 0.0;
	this->y = 0.0;

}

Point::Point(double xx, double yy)
{
	this->x = xx;
	this->y = xx;

}

void Point::set_x(double xx)
{
	this->x = xx;
}

void Point::set_y(double yy)
{
	this->y = yy;
}

double Point::get_x() const
{
	return this->x;
}

double Point::get_y() const
{
	return this->y;
}

void Point::print()
{
	string S;
	S = "(" + to_string(this->x) + "," + to_string(this->y);
	
	cout << S << endl;
}


Point Point::translate(double dx, double dy)
{

	this->x += dx;
		this->y = dy;
	return *this;
}
