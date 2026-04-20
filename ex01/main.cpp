#include "Span.hpp"
#include <exception>
#include <ostream>
#include <ctime>

int main() {
	Span vec = Span(5);
	try {
		vec.addNumber(7);
		vec.addNumber(3);
		vec.addNumber(17);
		vec.addNumber(19);
		vec.addNumber(11);
		// vec.addNumber(11);
		// vec.addNumber(11);
		// vec.addNumber(11);
	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cerr << "SHORTEST SPAN: " << vec.shortestSpan() << std::endl;
		std::cout << "LONGEST SPAN: " << vec.longestSpan() << std::endl;	
	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	Span vec2 = Span(5);
	vec2.addNumber(7);
	try {
		vec2.longestSpan();	
	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
		std::srand(std::time(NULL));

	Span sp(10000);

	try {
		sp.addNumber(10000, time(NULL));

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	// std::cout << sp << std::endl;
}