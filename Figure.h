#pragma once
#include <iostream>
using namespace std;

class Figure
{
protected:
	double a;
public:
	Figure(double _a)
	{
		a = _a;
	}
	void ShowArea()
	{
		cout << a << ", which will be multiplied with something." << endl;
	}
};

