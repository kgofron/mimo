// simple vector program
#include <iostream>
#include <vector>
int main() {
    int how_many;
    std::cout << " How many ints in data?: " << std::endl;
    std::cin >> how_many;

    std::vector<int> data (how_many);
    std::cout << "The contents of data:";
    for (std::vector<int>::iterator it = data.begin(); it != data.end(); ++it) {
        std::cin >> *it;
        // more code;
    }
    for (std::vector<int>::iterator it = data.begin(); it != data.end(); ++it) {
        std::cout << *it << ", "; // std::endl;
        // more code;
    }   
    std::cout << std::endl;
}

// construct a container with hom_many elements
// fill it from std::in