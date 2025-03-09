
#include "Array.hpp"

int main()
{
    Array<int> intArray(5);
    Array<float> floatArray(5);
    Array<double> doubleArray(5);

    for (int i = 0; i < 5; i++)
    {
        intArray[i] = i;
        floatArray[i] = i + 0.5;
        doubleArray[i] = i + 0.5;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        std::cout << "floatArray[" << i << "] = " << floatArray[i] << std::endl;
        std::cout << "doubleArray[" << i << "] = " << doubleArray[i] << std::endl;
        std::cout << std::endl;
    }

    try
    {
        intArray[6] = 42;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    delete &intArray;
    delete &floatArray;
    delete &doubleArray;
    
    return 0;

}