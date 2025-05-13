#pragma once

#include <iostream>
#include <stack>
#include <algorithm>

class RPN{
private:
    std::stack<char> expressions;
    std::stack<int> numbers;
    int result;

public:
    RPN();
    RPN(const RPN &other);
    RPN& operator=(const RPN &other);
    ~RPN();
    void readInput(std::string input);
    bool valideInput(std::string input);
    void calculate();
    void printResult();
    void clearStacks();
};