
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other){
    vectorData = other.vectorData;
    dequeData = other.dequeData;
    sortedVector = other.sortedVector;
    sortedDeque = other.sortedDeque;
    dequeDuration = other.dequeDuration;
    vectorDuration = other.vectorDuration;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other){
    if(this != &other){
        vectorData = other.vectorData;
        dequeData = other.dequeData;
        sortedVector = other.sortedVector;
        sortedDeque = other.sortedDeque;
        dequeDuration = other.dequeDuration;
        vectorDuration = other.vectorDuration;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::readInput(int argc, char **argv){
    std::string input;
    for(int i = 1; i < argc; i++){
        input += argv[i];
        input += " ";
    }

    if(!valideInputSyntax(input))
        return;
    
    std::istringstream iss(input);
    std::string number;
    while(iss >> number){
        int num =  stoi(number);
        vectorData.push_back(num);
        dequeData.push_back(num);
    }
}

bool PmergeMe::valideInputSyntax(std::string input){
    std::vector<int> numbers;
    if(input.empty()){
        std::cerr << "Error: empty input" << std::endl;
        return false;
    }

    std::cout << "debug input: " << input << std::endl;
    std::string::iterator it = input.begin();
    while(it != input.end()){
        if(!isdigit(*it) && *it != ' '){
            std::cerr << "Error: invalid input" << std::endl;
            return false;
        }
        int num = 0;
        while(it != input.end() && isdigit(*it)){
            num = num * 10 + (*it - '0');
            ++it;
        }
        if( *it == ' ' && num > 0){
            numbers.push_back(num);
            ++it;
        }
        else if(num == 0 && *it == ' '){
            ++it;
        }
    }

    for(size_t i = 0; i < numbers.size(); i++) {
        for(size_t j = i + 1; j < numbers.size(); j++) {
            if(numbers[i] == numbers[j]) {
                // std::cout << "debug " << numbers[i] << std::endl;
                // std::cout << "debug " << numbers[j] << std::endl;
                std::cerr << "Error: duplicate number found: " << numbers[i] << std::endl;
                return false;
            }
        }
    }

    // for(size_t i = 0; i < numbers.size(); i++){
    //     std::cout <<"debug " << numbers[i] << std::endl;
    // }
    numbers.clear();
    return true;
}

void PmergeMe::sortVector(){
    clock_t start = clock();
    for(size_t i = 0; i < vectorData.size(); i++){
        sortedVector.push_back(vectorData[i]);
        }
    
    std::sort(sortedVector.begin(), sortedVector.end());
    clock_t end = clock();

    vectorDuration  = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

void PmergeMe::sortDeque(){
    clock_t start = clock();
    for(size_t i = 0; i < dequeData.size(); i++){
        sortedDeque.push_back(dequeData[i]);
        }
    
    std::sort(sortedDeque.begin(), sortedDeque.end());
    clock_t end = clock();

    dequeDuration  = static_cast<double>(end - start) / CLOCKS_PER_SEC;
}


void PmergeMe::printOutput() const{
    if(vectorData.size() == 0){
        //std::cerr << "Error: no data to process" << std::endl;
        return;
    }
    std::cout << "Before: ";
    for(size_t i = 0; i < vectorData.size(); i++){
        std::cout << vectorData[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "After: ";
    for(size_t i = 0; i < sortedVector.size(); i++){
        std::cout << sortedVector[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << vectorData.size() << " elements with std::vector : " 
        << std::fixed << std::setprecision(5) << vectorDuration * 1000 << " ms" << std::endl;
    std::cout << "Time to process a range of " << dequeData.size() << " elements with std::deque : "
        << std::fixed << std::setprecision(5) << dequeDuration* 1000 << " ms" << std::endl;
}

void PmergeMe::clearData(){
    vectorData.clear();
    dequeData.clear();
    sortedVector.clear();
    sortedDeque.clear();
}
