#pragma once
#include "krug.h"
#include "kvadrat.h"

class krug_in_kvadrat: public krug, public kvadrat
{
	bool inside;
public:
	krug_in_kvadrat(double r, double a) : krug(r), kvadrat(a)
	{
		if (2*r <= a)
		{
			inside = true;
		}
		else
		{
			inside = false;
		}
	}
	bool is_inside()
	{
		return inside;
	}
};

