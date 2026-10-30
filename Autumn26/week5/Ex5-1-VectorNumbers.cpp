#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    v.push_back(5);
    v.push_back(2);
    v.push_back(8);

    std::cout << v[0] * (v[1]+v[2]) << std::endl;

}