#include "Cercle.h"
#include "Point.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const double pi = 3.14;

Cercle::Cercle():centre(Point::creator(0.0, 0.0))
{
	this->R = 0.0;

}

Cercle::Cercle(Point p, double r):centre(p)
{
	//befor creator this->centre = p;//this->centre.set_x(c.get_x())
	this->R = r;
}

string Cercle::affiche() const
{

	string s;
	s = "(" + this->centre.print() + "," + to_string(this->R) + ")";
	return s;

}



double Cercle::get_rayon() const
{
	return this->R;
}
double Cercle::set_rayon(double nvr)
{
	(*this).R = nvr;
	return (*this).R;
}
Cercle Cercle::translate(double dx, double dy)
{
	this->centre.translate(dx, dy);
	return *this;
}
double Cercle::surface() const
{
	double surface;
	surface = pi * pow(this->R, 2);
	return surface;

}
double Cercle::perimetre() const
{
	double peri;
	peri = 2 * pi * this->R;
	return peri;
}
bool Cercle::operator==(const Cercle& C)
{
	if (this->centre.operator==(C.centre) && this->R == C.R) // centre==C.centre valaide!!
	{
		return true;
	}
	return false;
}
bool Cercle::apartenance(const Point &p)
{
	if (this->centre.distance(p)<= this->R)
	{
		return true;
	}
	return false;
}
/*
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
*/




