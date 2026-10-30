#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int search_vector(int n, const std::vector<int>& vin) {

    for (int i=0; i<vin.size(); i++) {
        if (vin[i] == n) {
            return i;
        }
    }

    return -1;
}

int main() {
    assert(search_vector(3, {}) == -1);
    assert(search_vector(3, {3}) == 0);
    assert(search_vector(3, {5}) == -1);
    assert(search_vector(3, {3, 5, 7}) == 0);
    assert(search_vector(5, {3, 5, 7}) == 1);
    assert(search_vector(7, {3, 5, 7}) == 2);
    assert(search_vector(4, {3, 5, 7}) == -1);
    assert(search_vector(5, {3, 5, 5, 7}) == 1);
    assert(search_vector(-5, {-3, -5, -7}) == 1);
    assert(search_vector(0, {-1, 0, 1}) == 1);
    
    std::cout << "All test cases passed" << std::endl;
}
