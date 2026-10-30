#include <iostream>
#include <vector>
#include <cassert>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    for (int i=0; i<vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for (int i=0; i<vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }
}

int main() {
    std::vector<int> vin1{1, 7, 3, 4};
    std::vector<int> vin2{2, -2, 19};
    std::vector<int> vout;

    append_vectors(vin1, vin2, vout);
    assert((vout == std::vector<int>{1, 7, 3, 4, 2, -2, 19}));

    vout.clear();
    append_vectors({}, {}, vout);
    assert(vout.empty());

    vout.clear();
    append_vectors({}, {2, -2, 19}, vout);
    assert((vout == std::vector<int>{2, -2, 19}));

    vout.clear();
    append_vectors({1, 7, 3, 4}, {}, vout);
    assert((vout == std::vector<int>{1, 7, 3, 4}));

    vout.clear();
    append_vectors({1}, {2}, vout);
    assert((vout == std::vector<int>{1, 2}));

    vout.clear();
    append_vectors({0, -1, -1}, {-1, 0, 2}, vout);
    assert((vout == std::vector<int>{0, -1, -1, -1, 0, 2}));

    std::cout << "All test cases passed" << std::endl;
}
