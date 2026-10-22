#include <iostream>

void intdiv(int a, int b, int& quotient, int& remainder){
    quotient = a / b;
    remainder = a % b;
}

int main(){
    int quotient, remainder;

    intdiv(17, 5, quotient, remainder);
    std::cout << "17 / 5 = " << quotient << ", remainder = " << remainder << std::endl;

    intdiv(20, 4, quotient, remainder);
    std::cout << "20 / 4 = " << quotient << ", remainder = " << remainder << std::endl;

    intdiv(3, 5, quotient, remainder);
    std::cout << "3 / 5 = " << quotient << ", remainder = " << remainder << std::endl;

    intdiv(-17, 5, quotient, remainder);
    std::cout << "-17 / 5 = " << quotient << ", remainder = " << remainder << std::endl;
}
