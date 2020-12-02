#pragma once
class Complex
{
private:

	double re;
	double img;
public:
	Complex();// constructer without parametre
	Complex(double, double);//constructer with parametre
	Complex(const Complex&); // construct de requepie
	void print();
	double module();
	Complex conjuge();
	Complex operator+(const Complex &Z); //surcharge operateur+
	Complex operator-(const Complex& Z);
	Complex operator*(const Complex& Z);
};

