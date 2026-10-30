#include <iostream>
#include <vector>

int main() {
    int n, inp, t;
    std::vector<int> v;

    std::cout << "Please enter a number n: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cin >> inp;
        v.push_back(inp);
    }
    
    std::cout << "Please enter a number t: ";
    std::cin >> t;
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < t) {
            std::cout << v[i] << std::endl;
        }
    }
    
}