#pragma once
#include <iostream>
#include <math.h>
#include "Equation.h"
using namespace std;

class Quadratic: public Equation
{
	double c;
	double x1;
	double x2;
	double D;
public:
	Quadratic(double _a, double _b, double _c) :Equation(_a, _b)
	{
		c = _c;
		x2 = numeric_limits<double>::min();
		if (a == 0 && b == 0 && c == 0) return;
		else if (a == 0) 
		{
			if (b == 0) x1 = numeric_limits<double>::min();
			else if (c == 0) x1 = 0;
			else x1 = (-c) / b;
		}
		else if (b == 0)
		{
			if (c == 0) x1 = 0;
			else if (c < 0)
			{
				x1 = sqrt(c / a);
				x2 = - sqrt(c / a);
			}
			else if (c > 0)
			{
				x1 = numeric_limits<double>::min();
			}
		}
		else if (c == 0)
		{
			x1 = 0;
			x2 = (-b) / a;
		}
		else
		{
			D = b * b - 4 * a * c;
			if (D < 0) x1 = numeric_limits<double>::min();
			if (D == 0) x1 = (-b) / 2 * a;
			else if (D > 0)
			{
				x1 = (-b + sqrt(D)) / 2 * a;
				x2 = (-b - sqrt(D)) / 2 * a;
			}
		}
	}
	void ShowContent()
	{
		cout << "EQUATION (quadratic): ";
		if (a == -1) cout << "-";
		else cout << a << "*";
		cout << "x^2";
		if (b >= 0) cout << " + " << b << "x ";
		else if (b < 0) cout << " - x ";
		if (c >= 0) cout << " + ";
		cout << c << " = 0" << endl;
		Equation::ShowContent();
		cout << "c = " << c << endl;
		if (a == 0 && b == 0 && c == 0) cout << "x = any number" << endl;
		else if (x1 == numeric_limits<double>::min()) cout << "x = void" << endl;
		else if (x1 != numeric_limits<double>::min() && x2 == numeric_limits<double>::min())
		{
			cout << "x = " << x1 << endl;
		}
		else
		{
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}
};

