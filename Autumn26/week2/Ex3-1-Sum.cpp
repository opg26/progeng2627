#include <iostream>

int main(){
    int count = 0, sum = 0, inp;

    std::cin >> inp;
    
    while(inp != 0){
        count++;
        sum = sum + inp;
        std::cout << "Current sum is " << sum << std::endl;
        std::cin >> inp;
    }
}