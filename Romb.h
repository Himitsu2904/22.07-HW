#pragma once
#include "Figure.h"
#include "math.h"
using namespace std;

class Romb: public Figure
{
	const double PI = 3.14;
	double angle;
public:
	Romb(double _a, double _angle) : Figure(_a)
	{
		angle = _angle;
	}
	void ShowArea()
	{
		cout << "Rhombus area = " << a * a * sin(angle*PI/180) << endl;
	}
};

