#include <iostream>
using namespace std;

int main(){
    int n, count = 0, max = 0;

    cin >> n;

    while (n!=1) {
        if (n>max){
            max = n;
        }
        count++;
        if ((n%2) == 0) {
            n /= 2;
        } else {
            n *= 3;
            n++;
        }
        cout << n << endl;
    }
    cout << "Reached in " << count << " steps" << endl;
    cout << "The maximum number reached was " << max << endl;
}