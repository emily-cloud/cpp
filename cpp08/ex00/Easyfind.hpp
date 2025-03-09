#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

template <typename T> void easyfind(T &container, int value);

template <typename T>
void easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        std::cout << "Value not found" << std::endl;
    else
        std::cout << "Value found: " << *it << std::endl;
    return;
}


#endif