#include <iostream>

int smallest_factor(int n){
    for (int cf = 2; cf < n; cf++){
        if (n % cf == 0){
            return cf;
        }
    }

    return 0;
}

int main(){
    int first, last;
    std::cin >> first >> last;

    for (int n = first; n <= last; n++){
        if (smallest_factor(n) == 0){
            std::cout << n << std::endl;
        }
    }
}
