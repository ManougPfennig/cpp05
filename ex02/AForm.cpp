#include "AForm.hpp"

// Constructors | Destructor

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {

	if (this->getGradeToSign() < 1 || this->getGradeToExec() < 1)
		throw (AForm::SettingGradeTooHigh());
	else if (this->getGradeToSign() > 150 || this->getGradeToExec() > 150)
		throw (AForm::SettingGradeTooLow());
//	std::cout << "AForm '" << this->getName() << "' constructed" << std::endl;
	return ;
}

// Member functions

const std::string	AForm::getName( void ) const{

	return (this->_name);
}

const int			AForm::getGradeToSign( void ) const{

	return (this->_gradeToSign);
}

const int			AForm::getGradeToExec( void ) const{

	return (this->_gradeToExec);
}

const bool			AForm::getSignatureStatus( void ) const{

	return (this->_signed);
}

void				AForm::beSigned(const Bureaucrat &signatory){

	if (signatory.getGrade() > this->getGradeToSign())
		throw (AForm::GradeTooLowException());
	else
		this->_signed = true;
	return ;
}

// Operator overload

std::ostream &operator<<(std::ostream &os, const AForm &subject){

	os << "Form '" << subject.getName() << "': grade " << subject.getGradeToSign() << " to sign, " << subject.getGradeToExec() << " to execute";
	return (os);
}