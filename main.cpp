// Aidan Houck
// CIS 1202 502
// November 18, 2021
// A program that uses derived classes to display some information about two types of Vehicles, cars and trucks

#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>

int main()
{
	// Vehicle Section
	Vehicle_C newVehicle;
	std::string inputManufacturer;
	int inputYearBuilt;

	std::cout << "Enter the vehicle manufacturer: ";
	std::cin >> inputManufacturer;
	newVehicle.Set_Manufacturer(inputManufacturer);

	std::cout << "Enter the year that the vehcile was built: ";
	std::cin >> inputYearBuilt;
	newVehicle.Set_Year_Built(inputYearBuilt);

	newVehicle.Display_Info();

	
	// Car Section
	Car_C newCar;
	inputManufacturer = "";
	inputYearBuilt = 0;
	int inputDoorCount;

	std::cout << "\n\nEnter the car manufacturer: ";
	std::cin >> inputManufacturer;
	newCar.Set_Manufacturer(inputManufacturer);

	std::cout << "Enter the year that the car was built: ";
	std::cin >> inputYearBuilt;
	newCar.Set_Year_Built(inputYearBuilt);
	
	std::cout << "Enter the number of doors that the car has: ";
	std::cin >> inputDoorCount;
	newCar.Set_Door_Count(inputDoorCount);

	newCar.Display_Info();


	// Truck Section
	Truck_C newTruck;
	inputManufacturer = "";
	inputYearBuilt = 0;
	int inputTowingCapacity;

	std::cout << "\n\nEnter the trunk manufacturer: ";
	std::cin >> inputManufacturer;
	newTruck.Set_Manufacturer(inputManufacturer);

	std::cout << "Enter the year that the truck was built: ";
	std::cin >> inputYearBuilt;
	newTruck.Set_Year_Built(inputYearBuilt);

	std::cout << "Enter the truck's max towing capacity (in pounds): ";
	std::cin >> inputTowingCapacity;
	newTruck.Set_Tow_Capacity(inputTowingCapacity);

	newTruck.Display_Info();

	std::cout << "\n\n";
	system("pause");
	return 0;
}
