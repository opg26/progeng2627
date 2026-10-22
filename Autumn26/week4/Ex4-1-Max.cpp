#include <iostream>

double mymax(double first, double second, double third){
    double largest = first;

    if (second > largest){
        largest = second;
    }
    if (third > largest){
        largest = third;
    }

    return largest;
}

int main(){
    std::cout << "max(3, 2, 1): " << mymax(3, 2, 1) << std::endl;
    std::cout << "max(1, 3, 2): " << mymax(1, 3, 2) << std::endl;
    std::cout << "max(1, 2, 3): " << mymax(1, 2, 3) << std::endl;
    std::cout << "max(-4, -2, -7): " << mymax(-4, -2, -7) << std::endl;
    std::cout << "max(5, 5, 2): " << mymax(5, 5, 2) << std::endl;
    std::cout << "max(1.5, 2.75, 2.5): " << mymax(1.5, 2.75, 2.5) << std::endl;
}
