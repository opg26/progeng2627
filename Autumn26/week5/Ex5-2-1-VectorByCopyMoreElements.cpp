#include <iostream>
#include <vector>

// Edit the main in the program above. Replace the part that stores only three elements in the vector. Instead, ask the user how many elements they want to enter and then read the elements from the user and store them in the vector.

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n;
    double inp;

    std::cout << "How many elements to store: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cin >> inp;
        v.push_back(inp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}