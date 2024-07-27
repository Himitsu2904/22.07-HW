#pragma once
#include <iostream>
#include <string>
using namespace std;

class Wheels
{
protected:
	double price;
	int d;
	int width;
	int capacity_index;
public:
	Wheels(int _d, int _width, int _capacity, double _price)
	{
		d = _d;
		width = _width;
		capacity_index = _capacity;
		price = _price;
	}
	void ShowInfo()
	{
		cout << "\t-----Wheel Characteristics-----" << endl;
		cout << "Diameter = " << d << endl;
		cout << "Width = " << width << endl;
		cout << "Capacity index = " << capacity_index << endl;
		cout << "Price = " << price << endl;
	}
};

