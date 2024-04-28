#ifndef SCHRUBERRYCREATIONFORM_H
# define SCHRUBERRYCREATIONFORM_H

# include <iostream>
# include <fstream>
# include "AForm.hpp"


class ShrubberyCreationForm : public AForm{

	private:
		const std::string	_target;

	public:

		// Constructors | Destructor
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm( void );

		// Member functions
		void				execute(const Bureaucrat &executor) const;
		const std::string	getTarget( void ) const;

		class NoTargetException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Shrubbery form is missing target\n");
			}
		};
};

# define ASCII_TREE "   ooooo\n OOOOOOOOO\nOOOhelloOOO\nOOOOOOOOOOO\n  OOOOOOO\n    |||\n    |||\n    |||\n###########"

#endif
