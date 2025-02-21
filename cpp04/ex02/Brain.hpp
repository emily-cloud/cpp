
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain& src);
		~Brain();
		Brain& operator=(const Brain& src);
};

#endif //BRAIN_HPP
