#include <iostream>
#include <iomanip>

int main() {

	const double TICKET_PRICE_A = 15.0;
	const double TICKET_PRICE_B = 12.0;
	const double TICKET_PRICE_C = 9.0;

	int numTicketsSold_A;
	int numTicketsSold_B;
	int numTicketsSold_C;
	
	double ticketRevenue_A;
	double ticketRevenue_B;
	double ticketRevenue_C;
	double totalRevenue;
	
	std::cout << "Welcome to the Stadium Seating Revenue Calculator\n\n";
	std::cout << "----- Galaxy Stadium Ticket Prices -----\n";
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << "Class A seats:\t$" << std::setw(5) << TICKET_PRICE_A << std::endl;
	std::cout << "Class B seats:\t$" << std::setw(5) << TICKET_PRICE_B << std::endl;
	std::cout << "Class B seats:\t$" << std::setw(5) << TICKET_PRICE_C << std::endl;
	
	std::cout << "\nLet's collect some details to calculate revenue:\n";
	std::cout << "How many A tickets were sold? ";
	std::cin >> numTicketsSold_A;
	std::cout << "How many B tickets were sold? ";
	std::cin >> numTicketsSold_B;
	std::cout << "How many C tickets were sold? ";
	std::cin >> numTicketsSold_C;
	
	ticketRevenue_A = numTicketsSold_A * TICKET_PRICE_A;
	ticketRevenue_B = numTicketsSold_B * TICKET_PRICE_B;
	ticketRevenue_C = numTicketsSold_C * TICKET_PRICE_C;
	totalRevenue = (ticketRevenue_A + ticketRevenue_B + ticketRevenue_C);

	std::cout << "\nCalculating Revenue, one moment...\n\n";

	std::cout << "----- Here's the Revenue Breakdown ----\n";
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << "Revenue - A Seats:\t$" << std::setw(5) << ticketRevenue_A << std::endl;
	std::cout << "Revenue - B Seats:\t$" << std::setw(5) << ticketRevenue_B << std::endl;
	std::cout << "Revenue - C Seats:\t$" << std::setw(5) << ticketRevenue_C << std::endl << std::endl;
	std::cout << "Total Revenue:\t\t$" << totalRevenue;
}
	