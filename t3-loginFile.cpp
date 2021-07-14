#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> //to stop 'system was not declared' error

using namespace std;

bool IsLoggedIn(){
    //function determines if username/password matches the file and if given credentials are correct

    //variables to hold the data (2 for username, 2 for password for comparison)
    string username, password, un, pw;

    //create statement that asks users for username and password and save
    cout<<"Please enter your username: \n";
    cin>>username;
    cout<<"Please enter your password: \n";
    cin>>password;

    //use ifstream to read created file
    ifstream read("C:\\" + username + ".txt");

    //read text to compare username to the entered username, same for password
    getline(read, un);
    getline(read, pw);

    //if statement that compares username with the one entered and password
    //if both entered return true else return false
    if(un == username || pw ==password){
        return true;
    }else{
        return false;
    }

}


int main(){
    int choice;
    string username, password;

    cout<< "Please choose: 1: Register, 2: Login";
    cin>>choice; //input saved into choice

    if(choice ==1){
        cout<< "Select a username: ";
        cin>> username;
        cout<< "Select a password: ";
        cin>> password;
       // }
    //once username and password is saved, create a file
        fstream my_file;

    //save file as txt called 'confidential'
        my_file.open("confidential.txt", ios::out);


    //within file save username and password
        my_file<<username<<endl<<password;

    //close file, call main function so program continues running
        my_file.close();
        main();

    }else if (choice == 2){
        bool status = IsLoggedIn();

            if(!status){
                cout<< "False Login!" << endl;
                system("PAUSE");
                return 0;
            }
        //if status is true successful loggin
            if(status){
                cout<< "Successfully logged in" << endl;
                system("PAUSE");
            }
        return 1; //runs the program until return 0 is given
    }
}
