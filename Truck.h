#pragma once

#include "Vehicle.h"

class Truck_C : public Vehicle_C
{
private:
	int towCapacity;	// in pounds

public:
	Truck_C();

	void Set_Tow_Capacity(int);
	int Get_Tow_Capacity();

	virtual void Display_Info() const;
};