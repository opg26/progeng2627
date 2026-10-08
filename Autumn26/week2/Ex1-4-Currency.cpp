#include <iostream>
#include <cstdio>

int main(){
    double amount;
    std::cout << "Enter amount of money in GBP:" << std::endl;
    std::cin >> amount;
    double conversion = amount * 1.18;

    printf("£ %.2f in euros is €%.2f\n", amount, conversion);

}