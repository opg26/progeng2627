#include <iostream>

int main(){
    int year;

    std::cout << "please enter a year" << std::endl;

    bool isLeapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    if (isLeapYear) {
        std::cout << "is a leap year" << std::endl;
    }
    else {
        std::cout << "not a leap year" << std::endl;
    }

}
