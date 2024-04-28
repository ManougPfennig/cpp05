#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ( void )
{
	std::cout << "\n\n\n\nTesting SchrubberyCreationForm :" << std::endl;
	try
	{
		ShrubberyCreationForm		schrub("FABIONX");
		Bureaucrat					patronx("NIKOLAS", 50);
		Bureaucrat					nullos("NULLOS", 150);
		std::cout << "\n" << schrub << ", target '" << schrub.getTarget() << "'" << std::endl;
		std::cout << patronx;
		std::cout << nullos << std::endl;
		nullos.executeForm(schrub);
		nullos.signForm(schrub);
		nullos.executeForm(schrub);
		patronx.executeForm(schrub);
		patronx.signForm(schrub);
		patronx.executeForm(schrub);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\n\n\n\nTesting RobotomyRequestForm :" << std::endl;
	try
	{
		RobotomyRequestForm			robot("FABIONX");
		Bureaucrat					patronx("NIKOLAS", 25);
		Bureaucrat					nullos("NULLOS", 150);
		std::cout << "\n" << robot << ", target '" << robot.getTarget() << "'" << std::endl;
		std::cout << patronx;
		std::cout << nullos << std::endl;
		nullos.executeForm(robot);
		nullos.signForm(robot);
		nullos.executeForm(robot);
		patronx.executeForm(robot);
		patronx.signForm(robot);
		patronx.executeForm(robot);
		patronx.executeForm(robot);
		patronx.executeForm(robot);
		patronx.executeForm(robot);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;



	std::cout << "\n\n\n\nTesting PresidentialPardonForm :" << std::endl;
	try
	{
		PresidentialPardonForm		president("FABIONX");
		Bureaucrat					patronx("NIKOLAS", 1);
		Bureaucrat					nullos("NULLOS", 150);
		std::cout << "\n" << president << ", target '" << president.getTarget() << "'" << std::endl;
		std::cout << patronx;
		std::cout << nullos << std::endl;
		nullos.executeForm(president);
		nullos.signForm(president);
		nullos.executeForm(president);
		patronx.executeForm(president);
		patronx.signForm(president);
		patronx.executeForm(president);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "\n\n" <<std::endl;
	return (0);
}
