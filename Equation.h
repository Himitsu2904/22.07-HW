#pragma once
#include <iostream>
using namespace std;

class Equation
{
protected:
	double a;
	double b;
public:
	Equation(double _a, double _b)
	{
		a = _a;
		b = _b;
	}
	void ShowContent()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

