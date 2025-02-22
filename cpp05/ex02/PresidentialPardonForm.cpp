
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	AForm("PresidentialPardonForm", 25, 5),
	target("default")
{
	setSign(false);
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	AForm("PresidentialPardonForm", 25, 5),
	target(target)
{
	setSign(false);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):
	AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute()),
	target(src.target)
{
	setSign(src.getSign());
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		*this = src;
	}
	return (*this);
}

void PresidentialPardonForm::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	setSign(true);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


