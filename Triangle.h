#pragma once
#include "Figure.h"
#include <math.h>
using namespace std;

class Triangle: public Figure
{
	double b;
	double c;
public:
	Triangle(double _a, double _b, double _c):Figure(_a)
	{
		b = _b;
		c = _c;
	}
	void ShowArea()
	{
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Triangle area = " << S << endl;
	}
};

