#include <iostream>

void perimeter_area(double length, double width, double& perimeter, double& area){
    perimeter = 2 * (length + width);
    area = length * width;
}

int main(){
    double perimeter, area;

    perimeter_area(5, 3, perimeter, area);
    std::cout << "Rectangle 5 x 3: perimeter = " << perimeter << ", area = " << area << std::endl;

    perimeter_area(2.5, 4, perimeter, area);
    std::cout << "Rectangle 2.5 x 4: perimeter = " << perimeter << ", area = " << area << std::endl;
}

