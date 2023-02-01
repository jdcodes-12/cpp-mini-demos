#include <iostream>
#include <iomanip>

int main() {

	const int ONE_BATCH_YIELD = 48;

	const double CUPS_OF_SUGAR_TO_YIELD_ONE_BATCH  = 1.5;
	const double CUPS_OF_BUTTER_TO_YIELD_ONE_BATCH = 1.0;
	const double CUPS_OF_FLOUR_TO_YIELD_ONE_BATCH  = 2.75;

	int numCookiesToMake;
	double batchesToMake;

	double adjustedCups_Sugar;
	double adjustedCups_Butter;
	double adjustedCups_Flour;

	std::cout << "Welcome to the Ingredient Adjuster!\n\n";
	std::cout << "The following recipe yields 48 cookies:\n";
	std::cout << "\n-- Good Ole' Cookie Receipe --\n";
	std::cout << std::setprecision(3) << std::showpoint;
	std::cout << "Sugar:\t"  << std::setw(5) << CUPS_OF_SUGAR_TO_YIELD_ONE_BATCH  << " cups\n";
	std::cout << "Butter:\t" << std::setw(5) << CUPS_OF_BUTTER_TO_YIELD_ONE_BATCH << " cups\n";
	std::cout << "Flour:\t"  << std::setw(5) << CUPS_OF_FLOUR_TO_YIELD_ONE_BATCH  << " cups\n";

	std::cout << "\nHow many cookies will you be making? ";
	std::cin >> numCookiesToMake;

	std::cout << "\nAdjusting receipe to make " << numCookiesToMake << " cookies, one moment...\n\n";
	batchesToMake = static_cast<double>(numCookiesToMake) / ONE_BATCH_YIELD;
	adjustedCups_Sugar  = (batchesToMake * CUPS_OF_SUGAR_TO_YIELD_ONE_BATCH);
	adjustedCups_Butter = (batchesToMake * CUPS_OF_BUTTER_TO_YIELD_ONE_BATCH);
	adjustedCups_Flour  = (batchesToMake * CUPS_OF_FLOUR_TO_YIELD_ONE_BATCH);
	
	std::cout << "In order to make " << numCookiesToMake << " cookies, you need the following:";
	std::cout << "\n-- Good Ole' Cookie Receipe --\n";
	std::cout << std::setprecision(3) << std::showpoint;
	std::cout << "Sugar:\t"  << std::setw(5) << adjustedCups_Sugar  << " cups\n";
	std::cout << "Butter:\t" << std::setw(5) << adjustedCups_Butter << " cups\n";
	std::cout << "Flour:\t"  << std::setw(5) << adjustedCups_Flour  << " cups\n";
}