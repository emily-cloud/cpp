
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("ShrubberyCreationForm", 145, 137),
	target("default")
{
	setSign(false);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	AForm("ShrubberyCreationForm", 145, 137),
	target(target)
{
	setSign(false);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
	AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute()),
	target(src.target)
{
	setSign(src.getSign());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	if (this != &src)
	{
		AForm::operator=(src);
		*this = src;
	}
	return (*this);
}

void ShrubberyCreationForm::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	setSign(true);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	createShrubbery(target);
}

void ShrubberyCreationForm::createShrubbery(std::string const & target) const
{
	std::string filename = target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (!file) // Check if file opened successfully
    {
        std::cerr << "Error: Could not create file " << filename << std::endl;
        return;
    }

	file << "       ccee88oo\n";
    file << "    C8O8O8Q8PoOb o8oo  \n";
    file << " dOB69QO8PdUOpugoO9bD  \n";
    file << "CgggbU8OU qOp qOdoUOdcb\n";
    file << "    6OuU  /p u gcoUodpP  \n";
    file << "      \\//  /douUP  \n";
    file << "        ||       \n";
    file << "        ||       \n";
    file << "        ||       \n";

	file.close();
	std::cout << "Shrubbery has been created in " << filename << std::endl;
}

