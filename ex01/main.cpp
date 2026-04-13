#include "Span.hpp"
#include <exception>
#include <ostream>
#include <vector>

int main() {
	Span vec = Span(5);
	try {
		vec.addNumber(7);
		vec.addNumber(3);
		vec.addNumber(17);
		vec.addNumber(19);
		vec.addNumber(11);
	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	// std::cerr << "SHORTEST SPAN: " << vec.shortestSpan() << std::endl;


	std::cout << vec.longestSpan() << std::endl;	
}