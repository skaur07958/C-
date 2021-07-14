/*You’re working for a company that specialises in competition winners.
They want you to create a function for the three finalists.
The n range is between 0-1000.
The winner scores between 900-1000 points.
Second place scores between 800-900 points.
Third place scores between 700-800 points.
Anything under 700 does not go through.

They want the competition representative to be able to input the three separate scores:
Alice scored 978
Bill scored 841
Rachael scored 789
The output for this function should be:
“Alice is the winner with a score of 978.
Bill is second place with a score of 841.
And Rachael is third place with a score of 789.
Well done to all of our finalists.”
Make sure to include a statement for any errors in the input (if it is below 700).
*/
#include <iostream>
using namespace std;

void myFunction() {
    string firstN;
    int firstSc;

    cout << "Enter 1st competitor: ";
    cin >> firstN;
    cout << "Type 1st competitor's score: ";
    cin >> firstSc;

      //between 900-1000 points.
      if (firstSc < 900) {
      cout << "This is not the winning score. Please ensure that a range between 9-1000 is entered.";
      myFunction();
    } else if (firstSc > 1000) {
      cout << "Score is out of range. ";
      myFunction();
    } else if (firstSc < 700) {
      cout << "Invalid range. Please check and enter score.";
      myFunction();
    } else {
        cout << "1st: " << firstN << " is the winner with a score of " << firstSc<< "\n";
      }
}

void myFunction2() {
    string secondN;
    int secondSc;

    cout << "Enter 2nd competitor: ";
    cin >> secondN;
    cout << "Type 2nd competitor's score: ";
    cin >> secondSc;

        //between 800-900 points.
        if (secondSc < 800) {
      cout << "Not within range. Please ensure that a range between 8-900 is entered.";
      myFunction2();
    } else if (secondSc > 900) {
      cout << "Score is out of range for 2nd place. ";
      myFunction2();
    } else if (secondSc < 700) {
      cout << "Invalid range. Please check and enter score.";
      myFunction2();
    } else {
        cout << "2nd: " << secondN << " is second place with a score of " << secondSc << "...and..."<< "\n";
      }
}

void myFunction3() {
    string thirdN;
    int thirdSc;

    cout << "Enter 3rd competitor: ";
    cin >> thirdN;
    cout << "Type 3rd competitor's score: ";
    cin >> thirdSc;

        //between 700-800 points.
        if (thirdSc < 700) {
      cout << "Invalid range for 3rd place. Please ensure that a range between 7-800 is entered.";
      myFunction3();
    } else if (thirdSc > 800) {
      cout << "Score is out of range. ";
      myFunction3();
    } else {
        cout << "3rd: " << thirdN << " is in third place with a score of " << thirdSc<< "\n";
      }
}

int myFunction4() {
    cout << "====Well done to all of our finalists.===="<< "\n";
}


int main() {
    myFunction();
    myFunction2();
    myFunction3();
    myFunction4();
  return 0;
}





/*
void ScoreChecker(int &firstN) {

  //int score;

      if (firstN < 900) {
      cout << "This is not the winning score. Please ensure that a range between 9-1000 is entered.";
    } else if (firstN > 1000) {
      cout << "Score is out of range. ";
    } else if (firstN < 700) {
      cout << "Invalid range. Please check and enter score.";
    }
}


//1 Enter Competitor, Enter score
int main() {
    string FirstN, SecondN, ThirdN;
    int firstSc, secondSc, thirdSc;

    cout << "Enter 1st competitor: ";
    cin >> FirstN;
    cout << "Type 1st competitor's score: ";
    cin >> firstSc;
        if (firstSc < 900) {
      cout << "This is not the winning score. Please ensure that a range between 9-1000 is entered.";
    } else if (firstSc > 1000) {
      cout << "Score is out of range. ";
    } else if (firstSc < 700) {
      cout << "Invalid range. Please check and enter score.";
    }

    //2nd competitors details
    cout << "Enter 2nd competitor: ";
    cin >> SecondN;
    cout << "Type 2nd competitor's score: ";
    cin >> secondSc;
        if (secondSc < 900) {
      cout << "This is not the winning score. Please ensure that a range between 9-1000 is entered.";
    } else if (secondSc > 1000) {
      cout << "Score is out of range. ";
    } else if (secondSc < 700) {
      cout << "Invalid range. Please check and enter score.";
    }

    //3rd competitors details
    cout << "Enter 3rd competitor: ";
    cin >> ThirdN;
    cout << "Type 3rd competitor's score: ";
    cin >> thirdSc;

        if (thirdSc < 900) {
      cout << "This is not the winning score. Please ensure that a range between 9-1000 is entered.";
    } else if (thirdSc > 1000) {
      cout << "Score is out of range. ";
    } else if (thirdSc < 700) {
      cout << "Invalid range. Please check and enter score.";
    }

    cout << "1st: " << FirstN << " is the winner with a score of " << firstSc<< "\n";
    cout << "2nd: " << SecondN << " is second place with a score of " << secondSc << "...and..."<< "\n";
    cout << "3rd: " << ThirdN << " is in third place with a score of " << thirdSc<< "\n";
    cout << "====Well done to all of our finalists.===="<< "\n";
}
*/

