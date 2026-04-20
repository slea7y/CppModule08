#include <iostream>

template <typename T>
typename T::iterator easyfind(T& container, int val){
	typename T::iterator it;
	for (it = container.begin(); it != container.end(); it++) {
		if (*it == val)
			return it;
	}
	throw std::runtime_error("value not found");
}
