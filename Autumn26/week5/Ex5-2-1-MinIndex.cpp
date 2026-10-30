#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int min_vector_element(const std::vector<double>& vin) {
    if (vin.size() == 0) {
        return -1;
    }

    double smallestVal = INFINITY;
    int smallestIdx;

    for (int i=0; i<vin.size(); i++) {
        if (vin[i] < smallestVal) {
            smallestVal = vin[i];
            smallestIdx = i;
        }
    }
    return smallestIdx;
}

int main() {
    assert(min_vector_element({}) == -1);
    assert(min_vector_element({4.2}) == 0);
    assert(min_vector_element({1, 3, 5}) == 0);
    assert(min_vector_element({3, 1, 5}) == 1);
    assert(min_vector_element({3, 5, 1}) == 2);
    assert(min_vector_element({-2, -7, -3}) == 1);
    assert(min_vector_element({0.5, 0.1, 0.3}) == 1);
    assert(min_vector_element({3, 1, 1, 5}) == 1);
    assert(min_vector_element({2, 2, 2}) == 0);
    
    std::cout << "All test cases passed" << std::endl;
}
