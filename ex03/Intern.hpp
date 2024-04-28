#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

	private:
		const std::string		_nameList[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};

	public:

		// Constructor | Destructor
		Intern( void );
		~Intern( void );

		// Member functions
	AForm	*makeForm(const std::string formName, const std::string target) const;

	class UnvalidFormNameException : public std::exception
	{
		const char *what() const throw()
		{
			return ("Unvalid form name\n");
		}
	};

};

#endif