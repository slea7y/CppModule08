
#pragma once
#include <iostream>
#include <ostream>
#include <vector>
// #include <arrays>

class Span {
	public:
	Span(unsigned int n);
	Span(const Span& obj);
	Span &operator=(const Span& obj);
	~Span();
	void addNumber(int nbr);
	int shortestSpan();
	int longestSpan();
	std::vector<int> getSpan();
	unsigned int getSize() {
		return this->size;
	}
	private:
		const unsigned int maxIndx;
		unsigned int size;
		std::vector<int> span;
};

std::ostream operator<<(std::ostream os, const Span& obj);
