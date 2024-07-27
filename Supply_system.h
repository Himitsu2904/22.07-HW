#pragma once
#include <iostream>
#include <string>
using namespace std;

class Supply_system
{
protected:
	string fuel;
	double price;
	int volume;
public:
	Supply_system(string _fuel, double _price, int _volume)
	{
		fuel = _fuel;
		price = _price;
		volume = _volume;
	}
	void ShowInfo()
	{
		cout << "\t-----Supply System Characteristics-----" << endl;
		cout << "Fuel type: " << fuel << endl;
		cout << "Volume = " << volume << endl;
		cout << "Price = " << price << endl;
	}
};

