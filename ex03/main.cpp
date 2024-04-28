#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main ( void )
{
	std::cout << "\n\n\n\nTesting Intern's makeForm :" << std::endl;
	try
	{
		Bureaucrat					patronx("NIKOLAS", 1);
		Intern						nullos;
		AForm						*form;

		std::cout << patronx << "Random Intern\n" << std::endl;
		form = nullos.makeForm("presidential pardon", "ENORMECRIMINEL");
		std::cout << std::endl;
		patronx.signForm(*form);
		patronx.executeForm(*form);
		std::cout << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\n\n\n\n\n\nTesting Intern's makeForm (non-existing form):" << std::endl;
	try
	{
		Bureaucrat					patronx("NIKOLAS", 1);
		Intern						nullos;
		AForm						*form;

		std::cout << patronx << "Random Intern\n" << std::endl;
		form = nullos.makeForm("OUGAOUGAOUGAOUGA", "ENORMECRIMINEL");
		std::cout << std::endl;
		patronx.signForm(*form);
		patronx.executeForm(*form);
		std::cout << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\n\n\n\nTesting Intern's makeForm (unvalid target) :" << std::endl;
	try
	{
		Bureaucrat					patronx("NIKOLAS", 1);
		Intern						nullos;
		AForm						*form;

		std::cout << patronx << "Random Intern\n" << std::endl;
		form = nullos.makeForm("presidential pardon", "");
		std::cout << std::endl;
		patronx.signForm(*form);
		patronx.executeForm(*form);
		std::cout << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
