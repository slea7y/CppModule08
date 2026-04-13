#include "Span.hpp"
#include <climits>
#include <cmath>
#include <algorithm>


Span::Span(unsigned int n) : maxIndx(n), size(0) {
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

// template <typename T> T max(T a, T b){
// 	return (a > b) ? a : b;
// }

// template <typename T> T min(T a, T b){
// 	return (a < b) ? a : b;
// }

// template <typename T> void swap(T& a, T& b){
// 	T temp = a;
// 	a = b;
// 	b = temp;
// }



std::vector<int> Span::getSpan(){
	return (this->span);
}

//maybe make it from largetst to smallest to then sub idk
int Span::shortestSpan() {
	int shortestSpan = INT_MAX;

	sort(this->span.rbegin(), this->span.rend());
	for (unsigned int i = 0; i < this->size - 1; i++) {
		printf("a= %i, b= %i, calc = %i, bool = %i\n",this->span[i], this->span[i + 1], this->span[i] - this->span[i + 1], this->span[i] - this->span[i + 1] < shortestSpan);
		if (this->span[i] - this->span[i + 1] < shortestSpan){
			printf("hereee\n");
			shortestSpan = this->span[i] - this->span[i + 1];}
	} 
	return shortestSpan;
}


//wtf is auto?? ok 
int Span::longestSpan() {
	int longestSpan ;
	auto a = std::max_element(this->span.begin(), this->span.end());
	std::cout << " check bby: " <<*a;
	
	auto b = std::min_element(this->span.begin(), this->span.end());
	std::cout << " check bby: " << *b << std::endl ;
	
	longestSpan = *a - *b;
	
	return longestSpan;
}

void Span::addNumber(int nbr) {
	this->size += 1;
	if (this->size > this->maxIndx)
		throw std::out_of_range("out of range");
	else
		this->span.push_back(nbr);
}

// std::ostream& operator<<(std::ostream& os, const Span& obj) {
// 	obj.
// }
