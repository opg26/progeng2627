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

double sum_of_powers(double x, int n){
    double total = 0;

    for (int i = 1; i <= n; i++){
        total += mypow(x, i);
    }

    return total;
}

int main(){
    std::cout << "sum_of_powers(2, 3): " << sum_of_powers(2, 3) << std::endl;
    std::cout << "sum_of_powers(0.5, 3): " << sum_of_powers(0.5, 3) << std::endl;
    std::cout << "sum_of_powers(-2, 3): " << sum_of_powers(-2, 3) << std::endl;
    std::cout << "sum_of_powers(2, 0): " << sum_of_powers(2, 0) << std::endl;
    std::cout << "sum_of_powers(0, 3): " << sum_of_powers(0, 3) << std::endl;
    std::cout << "sum_of_powers(1, 4): " << sum_of_powers(1, 4) << std::endl;
}
