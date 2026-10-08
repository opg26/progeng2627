#include <iostream>

int main(){
    double mass, height;

    std::cout << "Enter mass in kilograms:" << std::endl;
    std::cin >> mass;

    std::cout << "Enter height in meters:" << std::endl;
    std::cin >> height;

    double BMI = mass / pow(height, 2);

    printf("Your BMI is %.2f\n", BMI);

}