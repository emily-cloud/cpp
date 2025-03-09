
#include "Easyfind.hpp" 

int main()
{
    std::vector<int> vector;
    std::list<int> list;

    for (int i = 0; i < 10; i++)
    {
        vector.push_back(i);
        list.push_back(i);
    }

   ::easyfind(vector, 5);
   ::easyfind(list, 5);
   ::easyfind(vector, 42);
   ::easyfind(list, 42);

    return 0;
}