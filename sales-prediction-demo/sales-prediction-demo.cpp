#include <iostream>
#include <iomanip>

int main()
{
	double milesPerGallon;
	double maxMilesOnFullTank;
	double maxGallonsVehicleCanHold;

	std::cout << "Welcome to the (M)iles (P)er (G)allon calculator!\n\n";
	
	std::cout << "Please enter the following information:\n";

	std::cout << "Max # gallons vehicle holds? ";
	std::cin >> maxGallonsVehicleCanHold;

	std::cout << "Max # miles vehicle has on full tank? ";
	std::cin >> maxMilesOnFullTank;

	milesPerGallon = maxMilesOnFullTank / maxGallonsVehicleCanHold;
	std::cout << std::endl 
		<< "Vehicle's MPG is: " << std::setprecision(2) << std::fixed << std::showpoint << milesPerGallon;
	
	
}
