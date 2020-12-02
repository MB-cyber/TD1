#pragma once
#include<string>

using namespace std;
class Point
{
private:
	
	double x;
	double y;

	Point();
	Point(double, double);

public:
	static Point creator(double, double);
	
	void set_x(double);//setters;
	void set_y(double);//setters
	double get_x() const; //getters 
	double get_y() const;
	string print() const;
	double distance(const Point &) const;
	Point translate(double, double);
	bool operator==(const Point &) const;


};

