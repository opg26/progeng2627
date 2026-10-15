#include <iostream>
using namespace std;

int main(){
    int x, n, tot = 1;
    printf("Enter number x then n: ");
    cin >> x;
    cin >> n;

    for(int i = 1; i<=n; i++) {
        tot *= x;
    }
    cout << x << "^" << n << " is " << tot << endl;
}