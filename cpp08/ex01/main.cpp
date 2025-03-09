#include "Span.hpp"

int main()
{
    Span span(10);

    span.addNumber(5);
    span.addNumber(3);
    span.addNumber(17);
    span.addNumber(9);
    span.addNumber(11);

    int array[] = {1, 2, 7, 4, 8};
    std::vector<int> numbers(array, array + sizeof(array) / sizeof(array[0]));
    span.addNumber(numbers.begin(), numbers.end());

    std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span.longestSpan() << std::endl;

    try
    {
        span.addNumber(42);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Span emptySpan(0);
    try
    {
        emptySpan.shortestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Span oneElementSpan(1);
    oneElementSpan.addNumber(42);
    try
    {
        oneElementSpan.shortestSpan();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Span bigSpan(10000);
    for (int i = 0; i < 10000; i++)
    {
        bigSpan.addNumber(i);
    }
    std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
    std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;

    try
    {
        bigSpan.addNumber(10001);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}