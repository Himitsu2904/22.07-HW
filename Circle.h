#pragma once
#include "Figure.h"
using namespace std;

class Circle: public Figure
{
	const double PI = 3.14;
public:
	Circle(double r) :Figure(r) {};
	void ShowArea()
	{
		cout << "Circle area = " << PI * a * a << endl;
	}
};

