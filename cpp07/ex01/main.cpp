
#include "Iter.hpp"

template <typename T>
void func(T const &x)
{
    std::cout << x << std::endl;
}

int main()
{
    std::string array1[] = {"hi", "it is a test", "it works" };
    int array2[] = { 1, 2, 3, 4, 5, 0};

    int lenght1 = sizeof(array1) / sizeof(array1[0]);
    int lenght2 = sizeof(array2) / sizeof(array2[0]);

    std::cout << "Processing array1:" << std::endl;
    ::iter(array1, lenght1, func<std::string>);
    std::cout << std::endl;

    std::cout << "Processing array2:" << std::endl;
    ::iter(array2, lenght2, func<int>);
    std::cout << std::endl;

    return 0;
}