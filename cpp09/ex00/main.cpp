
#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    if(argc != 2){
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    BitcoinExchange exchange;
    exchange.readData();
    //exchange.debugPrintData();
    exchange.calculatePrintExchange(argv[1]);
    return 0;
}