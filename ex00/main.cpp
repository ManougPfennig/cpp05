#include "Bureaucrat.hpp"

int main ( void )
{
	std::cout << "\nTrying to decrement (100->101):" << std::endl;
	try
	{
		Bureaucrat patronx("NIKOLASS", 100);
		patronx.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n\nTrying to increment (101->100):" << std::endl;
	try
	{
		Bureaucrat patronx("NIKOLASS", 101);
		patronx.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n\nTrying to increment (1->0) -> exception:" << std::endl;
	try
	{
		Bureaucrat patronx("NIKOLASS", 1);
		patronx.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n\nTrying to decrement (150->151) -> exception:" << std::endl;
	try
	{
		Bureaucrat patronx("NIKOLASS", 150);
		patronx.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n\nTrying to construct with grade too low (151) -> exception:" << std::endl;
	try
	{
		Bureaucrat patronx("NIKOLASS", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n\nTrying to construct with grade too high (0) -> exception:" << std::endl;
	try
	{
		Bureaucrat patronx("NIKOLASS", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}