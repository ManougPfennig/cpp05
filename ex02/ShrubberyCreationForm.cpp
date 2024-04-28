#include "ShrubberyCreationForm.hpp"

// CONSTRUCTOR

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShruberryCreationForm", 145, 137), _target(target){

//	std::cout << "ShrubberyCreationForm constructed with '" << target << "' as target" << std::endl;
	if (_target.length() == 0)
		throw(ShrubberyCreationForm::NoTargetException());
	return ;
}

// DESTRUCTOR

ShrubberyCreationForm::~ShrubberyCreationForm( void ){

	std::cout << "ShrubberyCreationForm " << this->_target << " destructed" << std::endl;
}

// MEMBER FUNCTIONS

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const{

	if (executor.getGrade() > this->getGradeToExec())
		throw(AForm::GradeTooLowException());
	else if (this->getSignatureStatus() == false)
		throw(AForm::FormNotSignedException());
	else
	{
		std::ofstream outfile(this->getTarget() + "_shrubbery");
		outfile << ASCII_TREE << std::endl;
	}
	return ;
}

const std::string	ShrubberyCreationForm::getTarget( void ) const{

	return (this->_target);
}
