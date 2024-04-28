#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include "AForm.hpp"


class PresidentialPardonForm : public AForm{

	private:
		const std::string	_target;

	public:

		// Constructors | Destructor
		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm( void );

		// Member functions
		void				execute(const Bureaucrat &executor) const;
		const std::string	getTarget( void ) const;

		class NoTargetException : public std::exception
		{
			const char *what() const throw()
			{
				return ("PresidentialPardonForm is missing target\n");
			}
		};
};

#endif
