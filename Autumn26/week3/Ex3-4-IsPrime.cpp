#include <iostream>
using namespace std;

int main(){
    int num;
    bool prime = true;

    cout << "Please enter a number: ";
    cin >> num;

    for(int i=2; i < num; i++){
        if ((num%i) == 0) {
            prime = false;
            break;
        }
    }
    
    cout << num << (prime ? " is prime" : " is not prime") << endl;
}