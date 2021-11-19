#include "Vehicle.h"

#include <iostream>

Vehicle_C::Vehicle_C()
{
	manufacturer = "";
	yearBuilt = 0;
}

void Vehicle_C::Set_Manufacturer(std::string newManufacturer)
{
	manufacturer = newManufacturer;
}

std::string Vehicle_C::Get_Manufacturer() const
{
	return manufacturer;
}

void Vehicle_C::Set_Year_Built(int newYearBuilt)
{
	yearBuilt = newYearBuilt;
}

int Vehicle_C::Get_Year_Built() const
{
	return yearBuilt;
}

void Vehicle_C::Display_Info() const
{
	std::cout << "\n--Vehicle Information--";
	std::cout << "\nVehicle's manufacturer is: " << manufacturer;
	std::cout << "\nVehicle was built in: " << yearBuilt;
}
