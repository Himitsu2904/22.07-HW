#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bumper
{
protected:
	string material;
	double price;
public:
	Bumper(string _material, double _price)
	{
		material = _material;
		price = _price;
	}
	void ShowInfo()
	{
		cout << "\t-----Bumper Characteristics-----" << endl;
		cout << "Material: " << material << endl;
		cout << "Price = " << price << endl;
	}
};

