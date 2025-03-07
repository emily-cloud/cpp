#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T> class Array
{
    private:
        T *ptr;
        int size;

    public:
        Array();
        Array(int n);
        Array( Array const &src);
        ~Array();
        Array & operator=(Array const &src)

        exception::throw()
};

#endif
