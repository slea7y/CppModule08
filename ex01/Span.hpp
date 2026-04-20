
#pragma once
#include <iostream>
#include <ostream>
#include <vector>
#include <ctime>

class Span {
	public:
		Span(unsigned int n);
		Span(const Span& obj);
		Span &operator=(const Span& obj);
		~Span();
		void addNumber(int nbr);
		void addNumber(int range, time_t time);
		int shortestSpan();
		int longestSpan();
		const std::vector<int>& getSpan() const;
		unsigned int getSize() const;
	private:
		unsigned int maxSize;
		std::vector<int> span;
};

std::ostream& operator<<(std::ostream& os, const Span& obj);
