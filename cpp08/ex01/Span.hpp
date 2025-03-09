#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private:
        unsigned int n;
        std::vector<int> vector;
        
    public:
        Span();
        Span(unsigned int n);
        Span(Span const &other);
        Span &operator=(Span const &other);
        ~Span();

        void addNumber(int number);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        class SpanIsFull: public std::exception
        {
           public:
            virtual    const char *what() const throw();
        };
        class SpanIsNotEnoughNumbers: public std::exception
        {
           public:
            virtual    const char *what() const throw();
        };
};      

#endif