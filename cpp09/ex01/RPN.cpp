#include "RPN.hpp"

RPN::RPN() : result(0) {}

RPN::RPN(const RPN &other) : expressions(other.expressions), 
    numbers(other.numbers), result(other.result) {}

RPN& RPN::operator=(const RPN &other) {
    if(this != &other){
        expressions = other.expressions;
        numbers = other.numbers;
        result = other.result;
    }
    return *this;
}

RPN::~RPN() {}

void RPN::readInput(std::string input) {
    if(!valideInput(input)){
        return;
    }
    std::reverse(input.begin(), input.end());
    for(std::string::iterator it = input.begin();it != input.end(); ++it){
        if(*it == ' '){
            continue;
        }
        if( isdigit(*it)){
            numbers.push(*it - '0');
        } else {
            expressions.push(*it);
        }
    }
}

bool RPN::valideInput(std::string input){
    int numberCount = 0;
    int operatorCount = 0;
    for (std::string::iterator it = input.begin(); it != input.end(); ++it) {
        if (!isdigit(*it) && *it != ' ' && *it != '+' && *it != '-' && *it != '*' && *it != '/') {
            std::cerr << "Error: invalid input" << std::endl;
            return false;
        }
        if(isdigit(*it)){
            numberCount++;
        } else if(*it == '+' || *it == '-' || *it == '*' || *it == '/'){
            operatorCount++;
        }
    }
    if(numberCount < 2){
        std::cerr << "Error: invalid input" << std::endl;
        return false;
    }
    if( operatorCount != numberCount - 1){
        std::cerr << "Error: invalid input" << std::endl;
        return false;
    }
    return true;
}

void RPN::calculate() {
    while(!expressions.empty()){
        char op = expressions.top();
        expressions.pop();
        int num1 = numbers.top();
        numbers.pop();
        int num2 = numbers.top();
        numbers.pop();
        switch(op){
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if(num2 == 0){
                    std::cerr << "Error: division by zero" << std::endl;
                    return;
                }
                result = num1 / num2;
                break;
            default:
                std::cerr << "Error: invalid operator" << std::endl;
                return;
        }
        numbers.push(result);
    }
}

void RPN::printResult() {
    if(numbers.empty()){
        return;
    }
    else
        std::cout << "Result: " << numbers.top() << std::endl;
}

void RPN::clearStacks() {
    while(!numbers.empty()){
        numbers.pop();
    }
    while(!expressions.empty()){
        expressions.pop();
    }
}