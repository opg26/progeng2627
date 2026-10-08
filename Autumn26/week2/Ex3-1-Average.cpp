#include <iostream>

int main(){
    float count = 0, sum = 0, inp;

    std::cin >> inp;
    
    while(inp != 0){
        count++;
        sum = sum + inp;
        std::cout << "Current average is " << sum/count << std::endl;
        std::cin >> inp;
    }
}