#include <iostream>

int main(){

    std::string inp = "";

    std::cin >> inp;
    
    while(inp != "STOP" && inp != "Stop" && inp != "stop"){
        std::cout << inp << std::endl;
        std::cin >> inp;
    }
}