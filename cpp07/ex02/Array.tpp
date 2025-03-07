
#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    ptr = NULL;
    size = 0;
}

template <typename T> Array<T>::Array(int n)
{
    size = n;
    if (n <= 0)
        throw std::invalid_argument("Size must be greater than 0");
    ptr = new T[n]();
}


template <typename T> Array<T>::Array(Array<T> const &src)
{
    size = src.size;
    ptr = new T[size];


    for(int i = 0; i < n; i++)
    {
        ptr[i] = src.ptr[i]
    }

}

template <typename T> Array<T>::~Array()
{
}


template <typename T> Array<T> &Array<T>::operator=(Array<T> const &src)
{
    if(*this != src)
    {
        delet ptr[];
        size = src.size;
    
        ptr = new T[size]
        for(int i = 0; i < size; i++)
        {
            ptr[i] = src.ptr[i]
        }
    }
    return (*this);
}

