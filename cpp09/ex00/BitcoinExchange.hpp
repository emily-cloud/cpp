
// ex00 use map ex01 list, ex02 vector qeueu stack
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <iomanip>
#include <cctype>



class BitcoinExchange
{
private:
    std::map<std::string, double> data;

public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();
    void readData();
    void debugPrintData() const;
    void calculatePrintExchange(const std::string &filename);
    bool validateInput(std::string date, double value);
};


#endif