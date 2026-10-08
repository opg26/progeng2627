#include <iostream>
using namespace std;

int main(){
    double n, absv;

    cout << "Please enter a number:\n";
    cin >> n;

    if(n<0){
        absv = -n;
    } else {
        absv = n;
    }
    
    printf("|%f| = %f\n", n, absv);
}