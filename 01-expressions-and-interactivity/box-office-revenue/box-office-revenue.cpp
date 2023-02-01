#include <iostream>
#include <iomanip>
#include <string>

int main() {

	const double THEATER_PROFIT_PERCENTAGE = .20;
	const double DISTRIBUTOR_PROFIT_PRCERNTAGE = .80;

	const double TICKET_PRICE_ADULT = 10.0;
	const double TICKET_PRICE_CHILD = 6.0;
	
	double numTicketsSold_Adult;
	double numTicketsSold_Child;
	
	double ticketRevenue_Adult;
	double ticketRevenue_Child;
	
	double boxOfficeGrossProfit;
	double boxOfficeNetProfit;
	double amountPaidToDistributor;

	std::string movieTitle;

	std::cout << "Welcome to the Box Office Revenue Tracker!\n\n";

	std::cout << "Theaters must pay distributors for the rights to \nshow their movies.";
	std::cout << "A certain theater keeps 20% of \ngross profits. It's ticket pricing is as follows:\n\n";
	std::cout << "---- Ticket Pricing ----\n";
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << "Adult Tickets\t$" << TICKET_PRICE_ADULT << std::endl;
	std::cout << "Child Tickets\t$" << TICKET_PRICE_CHILD << std::endl;
	
	std::cout << "\nTo help determine how much money should be paid \nto the distributor, please enter the following:\n";
	std::cout << "\n---- Info ----\n";
	std::cout << "(1) What is the movie's title? ";
	std::getline(std::cin, movieTitle);
	
	std::cout << "(2) How many adult tickets were sold? ";
	std::cin >> numTicketsSold_Adult;

	std::cout << "(3) How many child tickets were sold? ";
	std::cin >> numTicketsSold_Child;

	std::cout << "\nOne second as the box office breakdown is being calculated...\n";

	ticketRevenue_Adult  = (TICKET_PRICE_ADULT * numTicketsSold_Adult);
	ticketRevenue_Child  = (TICKET_PRICE_CHILD * numTicketsSold_Child);
	boxOfficeGrossProfit = (ticketRevenue_Adult + ticketRevenue_Child);

	boxOfficeNetProfit   = (boxOfficeGrossProfit * THEATER_PROFIT_PERCENTAGE);

	amountPaidToDistributor = (boxOfficeGrossProfit * DISTRIBUTOR_PROFIT_PRCERNTAGE);

	std::string quotedMovieTitle = "\"" + movieTitle + "\"";

	
	std::cout << "\n---- Box Office Breakdown ----\n";
	std::cout << std::setw(25) << std::left << "Movie Name:\t\t\t" << std::setw(33) << std::right << quotedMovieTitle << std::endl;
	std::cout << std::setw(25) << std::left << "Adult Tickets Sold:\t\t\t" << std::setw(30) << std::right << numTicketsSold_Adult << std::endl;
	std::cout << std::setw(25) << std::left << "Child Tickets Sold:\t\t\t" << std::setw(30) << std::right << numTicketsSold_Child << std::endl;
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << std::setw(25) << std::left << "Gross Box Office Profits:\t\t\t" << std::setw(25) << std::right << boxOfficeGrossProfit << std::endl;
	std::cout << std::setw(25) << std::left << "Net Box Office Profits:\t\t\t" << std::setw(33) << std::right << boxOfficeNetProfit << std::endl;
	std::cout << std::setw(25) << std::left << "Amount Paid to Distributor:\t\t\t" << std::setw(25) << std::right << amountPaidToDistributor << std::endl;
}