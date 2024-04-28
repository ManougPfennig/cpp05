#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExec;
		bool				_signed;

	public:

		// Constructor | destructor
		AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
		virtual ~AForm( void ) {};

		// Member functions
		const std::string	getName( void ) const;
		const int			getGradeToSign( void ) const;
		const int			getGradeToExec( void ) const;
		const bool			getSignatureStatus( void ) const;
		void				beSigned(const Bureaucrat &signatory);
		virtual void		execute(const Bureaucrat &executor) const = 0;

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
				return ("Grade too low\n");
			}
		};
		class FormNotSignedException : public std::exception
		{
			const char *what() const throw()
			{
				return ("Form is not signed\n");
			}
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &subject);

#endif
