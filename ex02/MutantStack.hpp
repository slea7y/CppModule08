#pragma once
#include <iostream>
#include <stack>

template<class T>
// class MutantStack : public std::stack<T>, public std::vector<T>{
class MutantStack : public std::stack<T>{
	public:

	typedef typename std::stack<T>::container_type container;
	typedef typename container::iterator iterator;
	MutantStack(){

	};
	MutantStack( const MutantStack& obj );
	MutantStack &operator=( const MutantStack& obj);
	~MutantStack() {};

	unsigned int size(){
		return std::stack<T>::size();
	};
	iterator begin() {
		return std::stack<T>::c.begin();
	}
	iterator end() {
		return std::stack<T>::c.end();
	}
};
