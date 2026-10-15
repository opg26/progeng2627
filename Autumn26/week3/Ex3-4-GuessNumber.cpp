#include <iostream>
using namespace std;

int main(){
    int upper, lower, guess;
    string feedback;

    cout << "Please enter a lower then upper bound: ";
    cin >> lower >> upper;

    while (feedback != "actual") {
        guess = lower + ((upper-lower)/2);
        cout << "Is your number " << guess << "? higher/lower/actual: ";
        cin >> feedback;
        if (feedback == "higher") {
            lower = guess;
        } else if (feedback == "lower") {
            upper = guess;
        }
    }
    cout << "Your number was " << guess <<"!"<<endl;
}