
#include "Mutantstack.hpp"


int main()
{
    MutantStack<int> mstack;

    // Push some numbers into the stack
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(9);
    mstack.push(11);

    // Iterate through the stack using begin() and end()
    std::cout << "Stack contents using iterators: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    // Iterate in reverse order using rbegin() and rend()
    std::cout << "Stack contents in reverse order: ";
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
        std::cout << *rit << " ";
    std::cout << std::endl;

    return 0;
}
