#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <chrono> 
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>

class PmergeMe{
private:
    std::vector<int> vectorData;
    std::deque<int> dequeData;
    std::vector<int> sortedVector;
    std::deque<int> sortedDeque;
    double vectorDuration;
    double dequeDuration;


public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe& operator=(const PmergeMe &other);
    ~PmergeMe();

    void readInput(int argc, char **argv);
    bool valideInputSyntax(std::string input);
    void sortVector();
    void sortDeque();
    void printOutput() const;
    void clearData();
};