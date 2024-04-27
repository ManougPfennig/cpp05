#include "Form.hpp"

// Constructors | Destructor

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {

	if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
		throw (Form::SettingGradeTooHigh());
	else if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
		throw (Form::SettingGradeTooLow());
	std::cout << "Form '" << this->getName() << "' constructed" << std::endl;
	return ;
}

Form::Form(Form &other) : _name(other.getName()), _signed(false), _gradeToSign(other.getGradeToSign()), _gradeToExecute(other.getGradeToExecute()){

	std::cout << "Form constructed from '" << other.getName() << "'" << std::endl;
	return ;
}

Form::~Form( void ){

	std::cout << "Form '" << this->getName() << "' destructed" << std::endl;
}

// Member functions

const std::string	Form::getName( void ) const{

	return (this->_name);
}

const int			Form::getGradeToSign( void ) const{

	return (this->_gradeToSign);
}

const int			Form::getGradeToExecute( void ) const{

	return (this->_gradeToExecute);
}

const bool			Form::getSignatureStatus( void ) const{

	return (this->_signed);
}

void				Form::beSigned(const Bureaucrat &signatory){

	if (signatory.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
	else
		this->_signed = true;
	return ;
}

// Operator overload

std::ostream &operator<<(std::ostream &os, const Form &subject){

	os << "Form '" << subject.getName() << "': grade " << subject.getGradeToSign() << " to sign, " << subject.getGradeToExecute() << " to execute" << std::endl;
	return (os);
}