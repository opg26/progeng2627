#include <iostream>

int main(){
    double temperature;
    std::cout << "Enter temperature in Celcius:" << std::endl;
    std::cin >> temperature;

    double conversion = (temperature * (9.0/5)) + 32;

    std::cout << temperature << "C in farenheight is " << conversion << "F" << std::endl;

}