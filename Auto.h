#pragma once
#include <iostream>
#include <string>
#include "Wheels.h"
#include "Engine.h"
#include "Doors.h"
#include "Supply_system.h"
#include "Bumper.h"
using namespace std;

class Auto: public Wheels, Engine, Doors, Supply_system, Bumper
{
	string brand;
	string color;
	double total_price;
public:
	Auto(string _brand, string _color, double _wheel_price, int _d, int _width, int _capacity,
		double _engine_price, int _volume, int _power, int _harm, double _door_price, bool _grafitti, bool _wind_toned,
		string _fuel, double _syp_sys_price, string _material, double _bump_price) :
		Wheels(_d, _width, _capacity, _wheel_price), Engine(_volume, _power, _harm, _engine_price),
		Doors(_grafitti, _wind_toned, _door_price), Supply_system(_fuel, _syp_sys_price, _volume), Bumper(_material, _bump_price)
	{
		brand = _brand;
		color = _color;
		total_price = Wheels::price + Engine::price + Doors::price + Supply_system::price + Bumper::price;
	}
	void ShowInfo()
	{
		cout << "Brand: " << brand << endl;
		cout << "Color: " << color << endl;
		cout << "\t\t----------AUTO COMPONENTS----------" << endl;
		Wheels::ShowInfo();
		Engine::ShowInfo();
		Doors::ShowInfo();
		Supply_system::ShowInfo();
		Bumper::ShowInfo();
		cout << "\nTOTAL PRICE = " << total_price << endl;
	}
};

