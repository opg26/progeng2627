#include <iostream>
int main(){
    double n = 2;
    n = 4;
    if(n < 3){
        std::cout << "x" << std::endl;
    }
    else if(n < 4){
        std::cout << "y" << std::endl;
        n = 10;
    }
    else if(n == 10){
        std::cout << "z" << std::endl;
    }
}