#pragma once
#include <iostream>
using namespace std;

class Engine
{
protected:
	double price;
	int volume;
	int power;
	int harm_release;
public:
	Engine(int _volume, int _power, int _harm_release, double _price)
	{
		volume = _volume;
		power = _power;
		harm_release = _harm_release;
		price = _price;
	}
	void ShowInfo()
	{
		cout << "\t-----Engine Characteristics-----" << endl;
		cout << "Volume = " << volume << endl;
		cout << "Power = " << power << endl;
		cout << "Harmful substances release index = " << harm_release << endl;
		cout << "Price = " << price << endl;
	}
};

