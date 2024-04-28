#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat {

	private:
		const std::string	_name;
		int					_grade;
	
	public:

		// Constructors | Destructor

			Bureaucrat(const std::string name, const int grade);
			~Bureaucrat( void );
			Bureaucrat(const Bureaucrat &toCopy);

		// Member functions

			const std::string	getName( void ) const;
			const int			getGrade( void ) const;
			void				increment( void );
			void				decrement( void );
			void				signForm(AForm &form) const;
			void				executeForm(AForm const &form) const;


		// Exceptions handling

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Grade too high\n");
			}
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Grade too low\n");
			}
		};
};

// Redirection operator override

std::ostream &operator<<(std::ostream &os, const Bureaucrat &subject);

#endif