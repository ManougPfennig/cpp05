#include "PresidentialPardonForm.hpp"

// CONSTRUCTOR

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){

//	std::cout << "PresidentialPardonForm constructed with '" << target << "' as target" << std::endl;
	if (_target.length() == 0)
		throw(PresidentialPardonForm::NoTargetException());
	return ;
}

// DESTRUCTOR

PresidentialPardonForm::~PresidentialPardonForm( void ){

	std::cout << "PresidentialPardonForm " << this->_target << " destructed" << std::endl;
}

// MEMBER FUNCTIONS

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const{

	if (executor.getGrade() > this->getGradeToExec())
		throw(AForm::GradeTooLowException());
	else if (this->getSignatureStatus() == false)
		throw(AForm::FormNotSignedException());
	else
	{
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	return ;
}

const std::string	PresidentialPardonForm::getTarget( void ) const{

	return (this->_target);
}
