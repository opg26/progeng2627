#include <iostream>
#include <vector>

int main() {
    int n, inp, s, count = 0;
    std::vector<int> v, idx;

    std::cout << "Please enter a number n: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cin >> inp;
        v.push_back(inp);
    }
    
    std::cout << "Please enter a number s: ";
    std::cin >> s;
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == s) {
            count++;
            idx.push_back(i);
        }
    }
    if (count > 0) {
        std::cout << "There are " << count << " occurrences of " << s << " at indices:" << std::endl;
        
        for (int i = 0; i < idx.size(); i++) {
            std::cout << idx[i] << std::endl;
        }
    } else {
        std::cout << "There are no occurrences of " << s << std::endl;
    }
}