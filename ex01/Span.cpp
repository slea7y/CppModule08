#include "Span.hpp"

Span::Span(unsigned int n){
    this->n = n;
}

Span::Span(const Span& obj) {
}

Span &Span::operator=(const Span& obj) {

}

Span::~Span() {}

Span::addNumber() {
    if (this->indx + 1 >= this->maxIngx)
        throw "container full";
    else
        this->span.
}