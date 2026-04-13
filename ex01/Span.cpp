#include "Span.hpp"
#include <cmath>


Span::Span(unsigned int n) : maxIndx(n), indx(0) {
}


// Span::Span(const Span& obj) {

// }

// Span &Span::operator=(const Span& obj) {
// 	if (this == &obj)
// 	{

// 	}
// 	return *this;
// }

Span::~Span() {}

template <typename T> T max(T a, T b){
	return (a > b) ? a : b;
}

template <typename T> T min(T a, T b){
	return (a < b) ? a : b;
}

//maybe make it from largetst to smallest to then sub idk
int Span::shortestSpan() {
	int shortestSpan = 0;

	for (unsigned int i = 0; i < this->indx; i++) {
		for (unsigned int j = i + 1; j < this->indx; j++) {
			if (shortestSpan >= 0 &&
				shortestSpan > max(this->span[i], this->span[j]) - min(this->span[i], this->span[j]) 
				&& max(this->span[i], this->span[j]) - min(this->span[i], this->span[j]) > 0)
				shortestSpan = max(this->span[i], this->span[j]) - min(this->span[i], this->span[j]);
		}
	}
	return shortestSpan;
}


// int Span::longestSpan() {

// }

void Span::addNumber(int nbr) {
	this->indx += 1;
	if (this->indx > this->maxIndx)
		throw std::out_of_range("out of range");
	else
		this->span.push_back(nbr);
}

// std::ostream& operator<<(std::ostream& os, const Span& obj) {
// 	return os << obj
// }
