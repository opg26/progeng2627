#include <iostream>
#include <vector>
#include <cassert>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (int i=0; i<vin.size(); i++) {
        if (vin[i] < t) {
            vout.push_back(vin[i]);
        }
    }
}

int main() {
    std::vector<double> vout;

    filter_v({1, 7, 3, 4, 2, -2, 19}, 4, vout);
    assert((vout == std::vector<double>{1, 3, 2, -2}));

    vout.clear();
    filter_v({}, 4, vout);
    assert(vout.empty());

    vout.clear();
    filter_v({3, 1, 2}, 4, vout);
    assert((vout == std::vector<double>{3, 1, 2}));

    vout.clear();
    filter_v({5, 6, 7}, 4, vout);
    assert(vout.empty());

    vout.clear();
    filter_v({4, 4}, 4, vout);
    assert(vout.empty());

    vout.clear();
    filter_v({-3, -1, -2, 0}, -1, vout);
    assert((vout == std::vector<double>{-3, -2}));

    vout.clear();
    filter_v({0.25, 1.5, 0.5, -0.25}, 0.5, vout);
    assert((vout == std::vector<double>{0.25, -0.25}));

    vout.clear();
    filter_v({-1, 0, -1, 1, 0}, 1, vout);
    assert((vout == std::vector<double>{-1, 0, -1, 0}));

    std::cout << "All test cases passed" << std::endl;
}