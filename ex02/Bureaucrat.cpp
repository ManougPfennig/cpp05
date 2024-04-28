# include "Bureaucrat.hpp"

// Constructors

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade) {

//	std::cout << "Bureaucrat '" << name << "' constructed" << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy) : _name(toCopy.getName()), _grade(toCopy.getGrade()) {

	std::cout << "Copy Bureaucrat constructed from '" << toCopy.getName() << "'" << std::endl;
	return ;
}

// Destructor

Bureaucrat::~Bureaucrat( void ){

	std::cout << "Bureaucrat '" << this->getName() << "' destructed" << std::endl;
	return ;
}

// Member functions

const std::string	Bureaucrat::getName( void ) const{

	return (this->_name);
}

const int	Bureaucrat::getGrade( void ) const{

	return (this->_grade);
}

void	Bureaucrat::increment( void ){

	if ((this->getGrade() - 1) < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade -= 1;
	std::cout << this->getName() << " had rank incremented" << std::endl;
	return ;
}

void	Bureaucrat::decrement( void ){

	if ((this->getGrade() + 1) > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade += 1;
	std::cout << this->getName() << " had rank decremented" << std::endl;
	return ;
}

void	Bureaucrat::signForm(AForm &form) const{

	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << form.getName() << " because : ";
		std::cerr << e.what();
	}
	return ;
}

void	Bureaucrat::executeForm(AForm const &form) const{

	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't execute " << form.getName() << " because : ";
		std::cerr << e.what();
	}
	return ;
}

// Operator override

std::ostream &operator<<(std::ostream &os, const Bureaucrat &subject){

	os << subject.getName() << ", bureaucrat grade " << subject.getGrade() << std::endl;
	return (os);
}