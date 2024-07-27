#pragma once
#include <iostream>
#include "Equation.h"
using namespace std;

class Lineal: public Equation
{
	double x;
public:
	Lineal(double _a, double _b) : Equation(_a, _b)
	{
		if (a != 0 && b != 0)
		{
			x = b / a;
		}
		else if (a != 0 && b == 0)
		{
			x = 0;
		}
	}
	void ShowContent()
	{
		cout << "EQUATION (lineal): " << a << "x = " << b << endl;
		Equation::ShowContent();
		cout << "x = ";
		if (a == 0 && b != 0) cout << "void" << endl;
		else if (a == 0 && b == 0) cout << "any number" << endl;
		else cout << x << endl;
	}
	double Get_x()
	{
		return x;
	}
};

