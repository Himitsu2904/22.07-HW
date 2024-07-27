#include <iostream>
#include "krug_in_kvadrat.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Romb.h"
#include "Auto.h"
#include "Lineal.h"
#include "Quadratic.h"
using namespace std;

int main()
{
	krug_in_kvadrat ex(1, 5);
	cout << "Circle can be placed in square: ";
	if (ex.is_inside() == true) cout << "true" << endl;
	else cout << "false" << endl;
	cout << "---------------------------------------------------------" << endl;
	Rectangle rec(2.7, 5.34);
	rec.ShowArea();
	Square sq(5.5);
	sq.ShowArea();
	Triangle tr(3.4, 4.2, 5.8);
	tr.ShowArea();
	Circle cic(3.7);
	cic.ShowArea();
	Romb romb(5, 30);
	romb.ShowArea();
	cout << "---------------------------------------------------------" << endl;
	Auto mach("BMV", "black", 2500, 32, 205, 95, 3100, 18, 32, 2, 1400, false, true, "dizel", 3980, "fiberglass", 4300);
	mach.ShowInfo();
	cout << "---------------------------------------------------------" << endl;
	Lineal lin(2.5, 13.25);
	lin.ShowContent();
	Quadratic qua(-1, 6, 7);
	qua.ShowContent();
	//finished
}