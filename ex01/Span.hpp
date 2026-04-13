#include <iostream>
#include <arrays>

class Span {
    Span(unsigned int n);
    Span(const Span& obj);
    Span &operator=(const Span& obj);
    ~Span();
    addNumber();
    shortestSpan();
    longestSpan();

    private:
        const unsigned int indx;
        const unsigned int maxIndx;
        std::vector<int> span; 
};