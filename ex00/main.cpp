#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <exception>

int main() {
	std::list<int> numbers{2, 5, 3, 6, 7};

	try {
		easyfind(numbers, 6); 
	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cerr << "no exception! :D" << std::endl;
	try {
		easyfind(numbers, 10); 
	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}