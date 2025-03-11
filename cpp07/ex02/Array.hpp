#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T> class Array
{
    private:
        T *array;
        int size;

    public:
        Array();
        Array(int n);
        Array( Array const &src);
        ~Array();
        Array & operator=(Array const &src);

        T &operator[](int index);
        const T &operator[](int index) const;
        int getSize() const;
        class OutOfBound: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};


template <typename T>
 Array<T>::Array()
{
    array = new T[0];
    size = 0;
}

template <typename T> 
Array<T>::Array(int n)
{
    if (n <= 0)
    {
        array = new T[0];
        size = 0;
    }
    else
    {
         array = new T[n];
         size = n;
    }      
}


template <typename T> 
Array<T>::Array(Array<T> const &src)
{
    size = src.size;
    array = new T[size];

    for(int i = 0; i < size; i++)
    {
        array[i] = src.array[i];
    }
}

template <typename T>
 Array<T>::~Array()
{
    delete[] array;
}


template <typename T> 
Array<T> &Array<T>::operator=(Array<T> const &src)
{
    if(this != src)
    {
        delete[] array;
        size = src.size;
        array = new T[size];
        for(int i = 0; i < size; i++)
        {
            array[i] = src.array[i];
        }
    }
    return (*this);
}

template <typename T>
int Array<T>::getSize() const
{
    return size;
}

template <typename T>
T &Array<T>::operator[](int index)
{
    if (index < 0 || index >= size)
        throw OutOfBound();
    return array[index];
}


template <typename T>
const T &Array<T>::operator[](int index) const
{
    if (index < 0 || index >= size)
        throw OutOfBound();
    return array[index];
}

template <typename T> 
const char* Array<T>::OutOfBound::what() const throw()
{
    return ("Error: Out of bound");
}

#endif
