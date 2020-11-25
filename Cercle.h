#pragma once
#include"Point.h"
class Cercle
{
private:
	Point centre;
	double R;
public:
	Cercle();
	Cercle(Point, double);
	void afficher(Point);
	double surface();
	double  perimetre();

	bool operator==(const Cercle & C);



};

