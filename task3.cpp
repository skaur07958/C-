#include <iostream>
using namespace std;

int getValueFromUser(){
    int input1, input2, sum;

    cout << "Enter an integer: ";
    cin >> input1;
    cout << "Enter 2nd integer: ";
    cin >> input2;
    sum = input1 + input2;
    cout << input1 << " + " << input2 << " = " << sum;
    return 0;
}

int main() {
    getValueFromUser();
}
