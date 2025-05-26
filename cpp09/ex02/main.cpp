#include "PmergeMe.hpp"

// mac 100 random numbers
//./PmergeMe `jot -r 3500 1 100000 | uniq | head -100 | tr '\n' ' '`

int main(int argc, char** argv){

    if(argc < 2){
        std::cerr << "Usage: " << argv[0] << " <numbers>" << std::endl;
        return 1;
    }

    PmergeMe pmergeme;
    pmergeme.prepareReadInput(argc, argv);
    pmergeme.readSortVector();
    pmergeme.readSortDeque();
    pmergeme.printOutput();
    pmergeme.clearData();
    return 0;
}
