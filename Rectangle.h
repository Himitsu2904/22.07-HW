#pragma once
#include "Figure.h"
using namespace std;

class Rectangle: public Figure
{
	double b;
public:
	Rectangle(double _a, double _b) : Figure(_a)
	{
		b = _b;
	}
	void ShowArea()
	{
		cout << "Rectangle area = " << a * b << endl;
	}
};

