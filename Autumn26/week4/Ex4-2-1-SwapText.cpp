#include <iostream>

void swap_text(std::string& first, std::string& second){
    std::string temporary = first;
    first = second;
    second = temporary;
}

int main(){
    std::string first = "Hello";
    std::string second = "World";

    std::cout << "Before swap: " << first << ", " << second << std::endl;
    swap_text(first, second);
    std::cout << "After swap: " << first << ", " << second << std::endl;
}
