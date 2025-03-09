#include "Span.hpp"


Span::Span():n(0), vector(std::vector<int>())
{

}

Span::Span(unsigned int n):n(n), vector(std::vector<int>())
{

}

Span::Span(Span const &other)
{
    n = other.n;
    vector = other.vector;
}

Span &Span::operator=(Span const &other)
{
    if(this != &other)
    {
        n = other.n;
        vector = other.vector;
    }
    return *this;
}

Span::~Span()
{

}

void Span::addNumber(int number)
{
    if(vector.size() == n)
        throw SpanIsFull();
    vector.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if(vector.size() + std::distance(begin, end) > n)
        throw SpanIsFull();
    vector.insert(vector.end(), begin, end);
}

int Span::shortestSpan()
{
    if(vector.size() < 2)
        throw SpanIsNotEnoughNumbers();
    std::sort(vector.begin(), vector.end());
    int min = vector[1] - vector[0];
    for(unsigned int i = 2; i < vector.size(); i++)
    {
        if(vector[i] - vector[i - 1] < min)
            min = vector[i] - vector[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if(vector.size() < 2)
        throw SpanIsNotEnoughNumbers();
    std::sort(vector.begin(), vector.end());
    return vector[vector.size() - 1] - vector[0];
}

const char* Span::SpanIsFull:: what() const throw()
{
    return "Span is full";
}

const char* Span::SpanIsNotEnoughNumbers:: what() const throw()
{
    return "Not enough numbers";
}