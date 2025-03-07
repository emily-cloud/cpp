#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T> void iter(T array[], int length, void (*func)(T&) )
{
    for (int i = 0; i < length; i++)
        func(array[i]);
    return;
};

template <typename T> void func( T& element)
{
    
    std::cout << element << std::endl;
    
    return;
}

#endif