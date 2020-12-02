#pragma once
#include"Point.h"

using namespace std;
class Cercle
{
private:
	Point centre;
	double R;


public:
	Cercle();
	Cercle(Point, double);
	string affiche() const;
	double get_rayon() const;
	double set_rayon(double nvr);
	Cercle translate(double dx, double dy);

	double surface() const;
	double  perimetre() const;

	bool operator==(const Cercle &);
	bool apartenance(const Point &);


};

