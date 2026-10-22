#include <iostream>

bool leap_year(int year){
    bool ly = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    return ly;
}

int main(){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
}