#pragma once
#include <iostream>
#include <string>
using namespace std;

class Doors
{
protected:
	double price;
	bool has_grafiti;
	bool windows_toned;
public:
	Doors( bool _has_grafiti, bool _windows_toned, double _price)
	{
		has_grafiti = _has_grafiti;
		windows_toned = _windows_toned;
		price = _price;
	}
	void ShowInfo()
	{
		cout << "\t-----Doors Characteristics-----" << endl;
		cout << "Has grafitti: ";
		if (has_grafiti == true) cout << "true" << endl;
		else cout << "false" << endl;
		cout << "Windows are toned: ";
		if (windows_toned == true) cout << "true" << endl;
		else cout << "false" << endl;
		cout << "Price = " << price << endl;
	}
};

