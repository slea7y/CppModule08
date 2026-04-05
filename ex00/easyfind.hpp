#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

template <typename T> T easyfind(std::vector<T> container, int val){
    for (int i = 0; i < container.size(); i++) {
        if (container.at(i) == val)
            return container.at(i);
    }
    throw ("value not found");
}
