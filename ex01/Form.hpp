#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:

		// Constructor | destructor
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		Form(Form &other); // will set _signed to false in the new form regardless of the other's status
		~Form( void );

		// Member functions
		const std::string	getName( void ) const;
		const int			getGradeToSign( void ) const;
		const int			getGradeToExecute( void ) const;
		const bool			getSignatureStatus( void ) const;
		void				beSigned(const Bureaucrat &signatory);

		// Exceptions handling
		class SettingGradeTooHigh : public std::exception
		{
			const char *what() const throw()
			{
				return ("Setting Grade too high\n");
			}
		};
		class SettingGradeTooLow : public std::exception
		{
			const char *what() const throw()
			{
				return ("Setting Grade too low\n");
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Signatory Grade too low\n");
			}
		};
};

std::ostream &operator<<(std::ostream &os, const Form &subject);

#endif
