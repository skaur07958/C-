#include <iostream>
using namespace std;
/*1. Create a function that takes in a range of numbers (0-30) and outputs the
total sum of the odd numbers only.
2. Create a function that takes in a range of numbers (0-30) and outputs each
even number multiplied by 3.
3. Create a function that while the counter is less than 10, the output to
the terminal will be:
“The number is n”
When the counter reaches 5 the output will be: “We are halfway through”
When the counter reaches 10 the output will be: “This is the end of the program”
*/

//function takes a range of numbers (0-30) and outputs the total sum of the odd numbers only.
void optionOne(){
    int number, sum, i;
    cout << "Choose a number between 0-30 to find the sum of odd numbers:  \n";
    cin >> number;

    if (number > 30){
        cout<< "invalid selection \n";
        optionOne();
    }

    sum = 0;
    //for loop to find sum of odd number
    for (i=1;i<=number;i+=2){
        sum = sum + i;
    }
    cout << "sum of odd numbers is: " << sum;
}

//2. function that takes in a range of numbers (0-30) and outputs each even number multiplied by 3.
void optionTwo(){
    int number, sum, i;
    cout << "Choose a number between 0-30:  \n";
    cin >> number;

    //constraint for number over 30
    if (number > 30){
        cout<< "invalid selection \n";
        optionTwo();
    }

    sum = 0;
    //for loop to find sum of even number
    for (i=2;i<=number;i+=2){
        cout<<i<<"*3";
        cout <<"="<<i*3<<" ";
    }
}

//3. function that while the counter is less than 10 ...
int optionThree(){
  int count = 0;
  while (count < 10) {
    cout << "The number is: "<< count << "\n";
    count++;
  }
    if (count = 5) {cout << "5 reached: half way there \n";}
    if (count = 10){cout << "10 reached: end of program \n";}
        return 0;
}

//A selection option using Switch statement to work on a certain function
void selection(){
    int input;
    cout << "Please make a selection: \n";
    cout << "============================= \n";
    cout << "1: Sum of odd numbers program \n";
    cout << "2: Multiplied by 3 program \n";
    cout << "3: Counter program \n";
    cin >> input;

    switch (input) {
      case 1:
        optionOne();
        break;
      case 2:
        optionTwo();
        break;
      case 3:
        optionThree();
        break;
    }
}


int main() {
    selection();
}


