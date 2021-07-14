#include <iostream>
#include <string>
using namespace std;

/*
1. Create a struct for a company with individual employee details
and write a function. Once you’ve created the struct write a function that prints
to the console who works in what department.

The output should be:
•“Employee number: <employee“<person> works in the <department>

2. Create an array that will print to a terminal (optional - write a function)
•
Write a function that takes in this array of numbers:
int nums[]{ 4, 6, 7, 3, 8, 2, 1, 5, 9 };
•
Ask the user to enter a number between 1 9.
•
If the number is less than 1 or more than 9 the program
repeats the question until they enter a number between 1 9.
•
If the number is between 1 9 then it searches to see if the
users number is within the pre defined list.
•
If it is then the output is: “You entered n which is in the
•
It then prints the list to the terminal as output: “The list is:
[list]
*/

struct Employee{
    string name;
    string surname;
    int employeeNumber;
    string department;
};

void myFunc(){
    int userInput;
    cout<<"C++ TASKS: \n" << "============\n"<<"Task 1: Struct of Employees: /n";
    cout<< "Please select from the following options for employee details: \n"
    << "Employee: 1: 2: 3: 4 : 5: 6: 7: 8: \n"<<
    "Task 2: press 9 for Array loop task \n" << "Task 3: press 10 for optional task "<< " ...";
    cin>> userInput;


    switch (userInput){
    case 1:
            {
            struct Employee e1;
            e1.name = "George";
            e1.surname="Rodgers";
            e1.employeeNumber = 1254325;
            e1.department="IT";

                //access values in variable
            cout<< "Employee Number: "<< e1.employeeNumber<<"\n";
            cout<< e1.name <<" works in the "<< e1.department<< " department";
            myFunc();
            break;
            }


    case 2:
        {
            struct Employee e2;
            e2.name = "Matthew";
            e2.surname="Clarke";
            e2.employeeNumber = 2354268;
            e2.department="HR";

                //access values in variable
            cout<< "Employee Number: "<< e2.employeeNumber<<"\n";
            cout<< e2.name <<" works in the "<< e2.department<< " department";
            myFunc();
            break;
        }

    case 3:
        {
            struct Employee e3;
            e3.name = "Sarah";
            e3.surname="Medows";
            e3.employeeNumber = 6521538;
            e3.department="Development";

                //access values in variable
            cout<< "Employee Number: "<< e3.employeeNumber<<"\n";
            cout<< e3.name <<" works in the "<< e3.department<< " department";
            myFunc();
            break;
        }


    case 4:
        {
            struct Employee e4;
            e4.name = "Anita";
            e4.surname="Singh";
            e4.employeeNumber = 5678456;
            e4.department="Marketing";

                //access values in variable
            cout<< "Employee Number: "<< e4.employeeNumber<<"\n";
            cout<< e4.name <<" works in the "<< e4.department<< " department";
            myFunc();
            break;
        }


    case 5:
        {
            struct Employee e5;
            e5.name = "Patrick";
            e5.surname="Smith";
            e5.employeeNumber = 5236863;
            e5.department="HR";
            cout<< "Employee Number: "<< e5.employeeNumber<<"\n";
            cout<< e5.name <<" works in the "<< e5.department<< " department";
            myFunc();
            break;
        }

    case 6:{
            struct Employee e6;
            e6.name = "Samantha";
            e6.surname="Xi";
            e6.employeeNumber = 3046576;
            e6.department="Development";

            cout<< "Employee Number: "<< e6.employeeNumber<<"\n";
            cout<< e6.name <<" works in the "<< e6.department<< " department";
            myFunc();
            break;
        }

    case 7:{
            struct Employee e7;
            e7.name = "Bruce";
            e7.surname="Vegas";
            e7.employeeNumber = 5476378;
            e7.department="Marketing";

            cout<< "Employee Number: "<< e7.employeeNumber<<"\n";
            cout<< e7.name <<" works in the "<< e7.department<< " department";
            myFunc();
            break;
        }

    case 8:{
            struct Employee e8;
            e8.name = "Riona";
            e8.surname="Ablah";
            e8.employeeNumber = 7953134;
            e8.department="IT";

            //access values in variable
            cout<< "Employee Number: "<< e8.employeeNumber<<"\n";
            cout<< e8.name <<" works in the "<< e8.department<< " department";
            myFunc();
            break;

    }

    case 9:{
            cout<<"===================\n";
            cout<<"Looping through an array task: \n";
            cout<<"===================\n";
            string flowers[] = {"Daisies", "Gardenias", "Lilies", "Orchids", "Roses", "Sunflowers", "Tulips", "Dahlias", "Peonies"};
            for(int i = 0; i < 9; i++) {
              cout << flowers[i] << ", ";
            }
            myFunc();
        }

    case 10:{
        int userI;
        cout<<"===================\n";
        cout<<"Optional task: \n" << "A function that takes an array of numbers.\n";
        cout<<"===================\n";

        int nums[] = {4,6,7,3,8,2,1,5,9};
        cout<<"Enter a number between 1 - 9: ";
        cin>>userI;
            //if user input is outside of 1-9 range, repeat the function
        if(userI < 1 || userI> 9){
            myFunc();
            //if userI is within the range, search for input in nums array list
        }else if (userI >= 1 || userI <= 9){
                for(int i = 0; i<9; i++){
                        if(nums[i] == userI){
                        cout<<"You entered " << userI <<" which is in the list \n";
                        cout << "The list is: ";
                            for(int i = 0; i < 9; i++) {
                            cout << nums[i] << ", ";
                            }
                        }
                    }
        } else{
                    cout<<"Sorry number is not in list";
                }
            }


        }

    }

int main(){
    myFunc();
    }

