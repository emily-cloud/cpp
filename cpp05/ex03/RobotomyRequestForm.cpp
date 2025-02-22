
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", 72, 45),
	target("default")
{
	setSign(false);
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	AForm("RobotomyRequestForm", 72, 45),
	target(target)
{
	setSign(false);
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):
	AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute()),
	target(src.target)
{
	setSign(src.getSign());
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		*this = src;
	}
	return (*this);
}

void RobotomyRequestForm::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	setSign(true);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);

	std::cout << "Bzzzzz... DRILLING NOISES!!!" << std::endl;

	// Generate a 50% success rate
	std::srand(std::time(0)); // Seed random number generator
	if (std::rand() % 2 == 0)//generates either 0 or 1, so 50% chance be 1
	{
		std::cout << target << " has been successfully robotomized!" << std::endl;
	}
	else
		std::cout << "Robotomy of " << target << " failed!" << std::endl;
}
