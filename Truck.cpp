#include "Truck.h"

#include <iostream>

Truck_C::Truck_C()
{
	towCapacity = 0;
}

void Truck_C::Set_Tow_Capacity(int newTowCapacity)
{
	towCapacity = newTowCapacity;
}

int Truck_C::Get_Tow_Capacity()
{
	return towCapacity;
}

void Truck_C::Display_Info() const
{
	Vehicle_C::Display_Info();
	std::cout << "\nTruck's towing capacity is: " << towCapacity;
}
