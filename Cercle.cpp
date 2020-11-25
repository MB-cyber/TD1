#include "Cercle.h"
#include "Point.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const double pi = 3.14;

Cercle::Cercle()
{
	this->centre = Point();
	this->R = 0.0;

}

Cercle::Cercle(Point c, double r)
{
	this->centre = c;//this->centre.set_x(c.get_x())
	this->R = r;
}

void  Cercle::afficher(Point P)
{
	
	string S2;
//2 = "(" + to_string(this->R) + to_string(this->centre) + "(";
	
	P.print();
	S2 = to_string(this->R) + ")";

	cout << S2 << endl;


}

double Cercle::surface()
{
	double surface;
	surface = pi * pow(this->R, 2);
	return surface;
}

double Cercle::perimetre()
{
	double peri;
	peri=2 * pi * this->R ;
	return peri;
}

bool Cercle::operator==(const Cercle& C)
{
	if ( this->R=C.R)
	{
		return true;
	}
	return false;
}

