#include <iostream>
using namespace std;

int main(){
    int inp, max = 0, min = INFINITY;

    do {
        cout << "Please enter a number: ";
        cin >> inp;
        if (inp>max){
            max = inp;
        }
        if (inp<min){
            min = inp;
        }
        cout << "Maximum so far: " << max << endl;
        cout << "Minimum so far: " << min << endl;
    } while(inp != 0);

}