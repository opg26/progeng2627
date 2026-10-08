#include <iostream>

int main(){
    int side1, side2;
    std::cout << "Enter side one: " << std::endl;
    std::cin >> side1;
    std::cout << "Enter side two: " << std::endl;
    std::cin >> side2;

    std::cout << "The perimeter of the shape is " << (side1 * 2) + (side2 * 2) << ", and the area is " << side1 * side2 << std::endl;

}