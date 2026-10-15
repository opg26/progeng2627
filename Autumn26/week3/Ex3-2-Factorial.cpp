#include <iostream>
using namespace std;

int main(){
    int inp, tot = 1;
    printf("Enter number: ");
    cin >> inp;

    for(int i = 1; i<=inp; i++) {
        tot *= i;
    }
    cout << inp << "! is " << tot << endl;
}