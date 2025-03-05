
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate(void)
{

    srand(time(NULL));
    int random = rand() % 3;
    switch (random)
    {
        case 0:
            return new A();
            break;
        case 1:
            return new B();
            break;
        case 2:
            return new C();
            break;
        default:
            break;
    }
    return NULL;
}

void identify(Base *p)
{
    try
    {
        A &a = dynamic_cast<A &>(*p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception &e)
    {
    }
    
    try
    {
        B &b = dynamic_cast<B &>(*p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception &e)
    {
    }

    try
    {
        C &c = dynamic_cast<C &>(*p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception &e)
    {
    }
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception &e)
    {
    }

    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception &e)
    {
    }

    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception &e)
    {
    }
}