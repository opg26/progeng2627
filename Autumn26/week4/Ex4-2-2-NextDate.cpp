#include <iostream>

bool leap_year(int year){
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

void next_date(int& day, int& month, int& year){
    int days_in_month = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11){
        days_in_month = 30;
    }
    else if (month == 2){
        if (leap_year(year)){
            days_in_month = 29;
        }
        else{
            days_in_month = 28;
        }
    }

    day++;
    if (day > days_in_month){
        day = 1;
        month++;
        if (month > 12){
            month = 1;
            year++;
        }
    }
}

int main(){
    int day, month, year;

    std::cout << "please enter a date (day month year): ";
    std::cin >> day >> month >> year;

    next_date(day, month, year);
    std::cout << "The next date is " << day << "/" << month << "/" << year << std::endl;
}