#include <iostream>

void swapDouble(double& n1, double& n2){
    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    if (s1 > s2){
        swapDouble(s1, s2);
    }
    if (s2 > s3){
        swapDouble(s2, s3);
    }
    if (s1 > s2){
        swapDouble(s1, s2);
    }
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers: ";
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}
