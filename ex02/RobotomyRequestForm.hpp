#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include "AForm.hpp"


class RobotomyRequestForm : public AForm{

	private:
		const std::string	_target;

	public:

		// Constructors | Destructor
		RobotomyRequestForm(const std::string target);
		~RobotomyRequestForm( void );

		// Member functions
		void				execute(const Bureaucrat &executor) const;
		const std::string	getTarget( void ) const;

		class NoTargetException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Robotomy form is missing target\n");
			}
		};
};

#endif
