#include "Car.h"

#include <iostream>

Car_C::Car_C()
{
	doorCount = 0;
}

void Car_C::Set_Door_Count(int newDoorCount)
{
	doorCount = newDoorCount;
}

int Car_C::Get_Door_Count()
{
	return doorCount;
}

void Car_C::Display_Info() const
{
	Vehicle_C::Display_Info();
	std::cout << "\nCar's total door count is: " << doorCount;
}
