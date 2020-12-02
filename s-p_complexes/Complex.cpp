#include "Complex.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
Complex::Complex()
{
	this->re = 0.0;
	this->img = 0.0;

}

Complex::Complex(double rex, double imgy)
{
	this->re = rex;
	this->img = imgy;
}

Complex::Complex(const Complex& z)
{
	this->re = z.re;
	this->img = z.img;
}

void Complex::print()
{
	string S1;
	if (this->img < 0) {
		S1 = "(" + to_string(this->re) + "-i" + to_string(-this->img) + ")";
	

	}
	else
	{
		S1 = "(" + to_string(this->re) + "+i" + to_string(this->img) + ")";
	
	}
	
	cout << S1 << endl;
}


double Complex::module()
{
	double mod;
	mod = sqrt(pow(this->re, 2) + pow(this->img, 2));
	return mod;
}

Complex Complex::conjuge()
{
	Complex con;

	con.re = this->re;
	con.img = -this->img;
	
	return con;
}

Complex Complex::operator+(const Complex& Z)

{
	Complex add;
	add.re = this->re + Z.re;
	add.img = this->img + Z.img;
	return add;
}

Complex Complex::operator-(const Complex& Z)

{
	Complex sus;
	sus.re = this->re - Z.re;
	sus.img = this->img - Z.img;
	return sus;
}

Complex Complex::operator*(const Complex& Z)
{
	Complex multi;
	multi.re = (this->re * Z.re) - (this->img * Z.img);

	multi.img= (this->re * Z.img) + (this->img * Z.re);

	return multi;
}
