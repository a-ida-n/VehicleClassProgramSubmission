#pragma once

#include <string>

class Vehicle_C
{
private:
	std::string manufacturer;
	int yearBuilt;

public:
	Vehicle_C ();

	void Set_Manufacturer(std::string);
	std::string Get_Manufacturer() const;

	void Set_Year_Built(int);
	int Get_Year_Built() const;

	void Display_Info() const;
};