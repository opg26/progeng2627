#include <iostream>

double mypow(double base, int exp){
    double result = 1;

    if (exp < 0){
        for (int i = 0; i > exp; i--){
            result /= base;
        }
    }
    else{
        for (int i = 0; i < exp; i++){
            result *= base;
        }
    }

    return result;
}

int main(){
    int x, n, total = 0;

    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int i=1; i<=n; i++){
        total += mypow(x,i);
    }

    std::cout << "The sum of powers is " << total << std::endl;
}
