#include "RobotomyRequestForm.hpp"

// CONSTRUCTOR

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){

//	std::cout << "RobotomyRequestForm constructed" << std::endl;
	if (_target.length() == 0)
		throw(RobotomyRequestForm::NoTargetException());
	return ;
}

// DESTRUCTOR

RobotomyRequestForm::~RobotomyRequestForm( void ){

	std::cout << "RobotomyRequestForm destructed" << std::endl;
}

// MEMBER FUNCTIONS

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const{

	if (executor.getGrade() > this->getGradeToExec())
		throw(AForm::GradeTooLowException());
	else if (this->getSignatureStatus() == false)
		throw(AForm::FormNotSignedException());
	else
	{
		std::cout << "* intense drilling noises *\n";
		if ((std::rand() % 2))
			std::cout << this->getTarget() << "'s robotomy was successful !" << std::endl;
		else
			std::cout << this->getTarget() << "'s robotomy has failed !" << std::endl;
	}
	return ;
}

const std::string	RobotomyRequestForm::getTarget( void ) const{

	return (this->_target);
}
