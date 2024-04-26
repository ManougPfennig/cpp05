#include "Bureaucrat.hpp"

int main ( void )
{
	try
	{
		Bureaucrat joe("Joe", 2);
		Bureaucrat patronx("NIKOLASS", 150);
		std::cout << std::endl;
		joe.increment();
		patronx.decrement();
		std::cout << "all good" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "\n" << e.what() << '\n';
	}

	return (0);
}