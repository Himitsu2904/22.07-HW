#pragma once
#include "Figure.h"
using namespace std;

class Square: public Figure
{
public:
	Square(double _a) : Figure(_a) {};
	void ShowArea()
	{
		cout << "Square area = " << a * a << endl;
	}
};

