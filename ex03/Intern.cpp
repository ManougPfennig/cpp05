#include "Intern.hpp"

Intern::Intern( void ){

	// std::cout << "Intern constructed" << std::endl;
	return ;
}

Intern::~Intern( void ){

	std::cout << "Intern destructed" << std::endl;
	return ;
}

AForm	*Intern::makeForm(const std::string formName, const std::string target) const{

	int i = 0;
	while (i < 3 && this->_nameList[i] != formName)
		i++;
	switch (i)
	{
		case 0 :
			std::cout << "Intern creates " << formName << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1 :
			std::cout << "Intern creates " << formName << std::endl;
			return (new PresidentialPardonForm(target));
		case 2 :
			std::cout << "Intern creates " << formName << std::endl;
			return (new RobotomyRequestForm(target));
		case 3 :
			std::cout << "Intern couldn't create " << formName << std::endl;
			throw (Intern::UnvalidFormNameException());
	}
	return (NULL);
}
