#include <iostream>
using namespace std;

int main(){
    int num, rem;
    cout << "Please enter a number:\n";
    cin >> num;

    rem = num % 3;

    if(rem==0){
        cout << "The number is a multiple of 3" << endl;
    } else {
        cout << "The number is not a multiple of 3" << endl;
    }
}