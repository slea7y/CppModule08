#include "Span.hpp"
#include <climits>
#include <cmath>
#include <algorithm>
#include <stdexcept>


Span::Span(unsigned int n) : maxSize(n) {
}

Span::Span(const Span& obj) {
	this->maxSize = obj.maxSize;
	this->span = obj.span;
}

Span &Span::operator=(const Span& obj) {
	if (this != &obj)
	{
		this->maxSize = obj.maxSize;
		this->span = obj.span;
	}
	return *this;
}

Span::~Span() {}

const std::vector<int>& Span::getSpan() const {
	return this->span;
}

int Span::shortestSpan() {
	if (this->span.size() < 2) {
		throw std::logic_error("not enough elements");
	}
	int shortestSpan = INT_MAX;
	std::vector<int> temp = this->span;

std::sort(temp.begin(), temp.end());

	for (size_t i = 0; i < temp.size() - 1; i++) {
		int diff = temp[i + 1] - temp[i];
		if (diff < shortestSpan)
		shortestSpan = diff;
	}
	return shortestSpan;
}


int Span::longestSpan() {
	if (this->span.size() < 2) {
		throw std::logic_error("not enough elements");
	}
	auto a = std::max_element(this->span.begin(), this->span.end());
	auto b = std::min_element(this->span.begin(), this->span.end());

	return *a - *b;
}

void Span::addNumber(int nbr) {
	if (this->span.size() >= this->maxSize)
		throw std::out_of_range("out of range");
	else
		this->span.push_back(nbr);
}

void Span::addNumber(int range, time_t time) {
	if (this->span.size() + range > this->maxSize)
		throw std::out_of_range("out of range");
	std::srand(static_cast<unsigned int>(time));
	for (int i = 0; i < range; i++) {
		this->addNumber(rand());
	}
}

std::ostream& operator<<(std::ostream& os, const Span& obj) {
	const std::vector<int>& v = obj.getSpan();
	for (size_t i = 0; i < v.size(); i++) {
		os << v[i] << " ";
	}
	return os;
}
