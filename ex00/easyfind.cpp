#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <array>
#include <exception>


int main() {
    std::vector<int> numbers{2, 5, 3, 6, 7};

    try {
        easyfind(numbers, 6); 
    }
    catch (std::exception &e){
        std::cerr << "Exceprtion " << e.what() << std::endl;
    }
}