#pragma once

#include "Vehicle.h"

class Car_C : public Vehicle_C
{
private:
	int doorCount;

public:
	Car_C();

	void Set_Door_Count(int);
	int Get_Door_Count();

	virtual void Display_Info() const;
};