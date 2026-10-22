#include <iostream>

int smallest_factor(int n){
    for (int cf = 2; cf < n; cf++){
        if (n % cf == 0){
            return cf;
        }
    }

    return 0;
}

int main(){
    std::cout << "smallest_factor(2): " << smallest_factor(2) << std::endl;
    std::cout << "smallest_factor(13): " << smallest_factor(13) << std::endl;
    std::cout << "smallest_factor(12): " << smallest_factor(12) << std::endl;
    std::cout << "smallest_factor(15): " << smallest_factor(15) << std::endl;
    std::cout << "smallest_factor(25): " << smallest_factor(25) << std::endl;
    std::cout << "smallest_factor(49): " << smallest_factor(49) << std::endl;
}
