#pragma once
class Point
{
private:
	
	double x;
	double y;

public:

	Point();
	Point(double, double);
	void set_x(double);//setters;
	void set_y(double);//setters
	double get_x() const; //getters 
	double get_y() const;
	void print();
	Point translate(double, double);
};

