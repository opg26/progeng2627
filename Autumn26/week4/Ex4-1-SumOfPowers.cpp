#include <iostream>
#include <cmath>

int main(){
    int x, n, total = 0;

    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i=1; i<=n; i++){
        total += std::pow(x,i);
    }

    std::cout << "The sum of powers is " << total << std::endl;
}