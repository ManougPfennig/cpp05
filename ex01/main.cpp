#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ( void )
{
	std::cout << "\n\n\n\nTrying to create a form :" << std::endl;
	try
	{
		Form		papier("boutDePapier", 50, 50);
		std::cout << papier;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	

	std::cout << "\n\n\n\nTrying to create a form (grade too high):" << std::endl;
	try
	{
		Form		papier("boutDePapier", 0, 0);
		std::cout << papier;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\n\n\n\nTrying to create a form (grade too low):" << std::endl;
	try
	{
		Form		papier("boutDePapier", 151, 151);
		std::cout << papier;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\n\n\n\nTrying to sign a form :" << std::endl;
	try
	{
		Bureaucrat	patronx("NIKOLAS", 50);
		Form		papier("boutDePapier", 50, 50);
		std::cout << "\n" << patronx << papier;
		patronx.signForm(papier);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\n\n\n\nTrying to sign a form (grade too low):" << std::endl;
	try
	{
		Bureaucrat	patronx("NIKOLAS", 51);
		Form		papier("boutDePapier", 50, 50);
		std::cout << "\n" << patronx << papier;
		patronx.signForm(papier);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "\n\n" << std::endl;



	return (0);
}