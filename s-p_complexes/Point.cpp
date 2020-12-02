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

Point Point::creator(double x, double y)
{
	Point p(x, y);

	return p;
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

string Point::print() const
{
	string S;
	S = "(" + to_string(this->x) + "," + to_string(this->y);
	
	return S;
}

double Point::distance(const Point& p) const
{
	double dist;
	dist = sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
	return dist;
}


Point Point::translate(double dx, double dy)
{
	///point trans;
	this->x += dx;
		this->y = dy;
	return *this;// return trans
}

bool Point::operator==(const Point &p) const
{
	if (this->x == p.x && this->y == p.y)
	{
		return true;
	}
	return false;
}
