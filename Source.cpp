#include <iostream>
#include "person.h"
#include <stdlib.h>
using namespace std;

/*

This program will assess an individual's risk of contracting covid in terms of low/moderate/high risk with a short assesment.
It will also store each person who has their risk calculated in a dynamically allocated array, which can be displayed by the user.


*/

void printMenu();


int main() 
{
	printMenu(); //call printMenu() function
}






/*
Function printMenu will print a menu that gives the user an option of either:
A. Assessing a new person's covid risk level
B. Display the current list (personList) of people already assesed
C. Exit Program

*/
void printMenu() {


    char option; //char that selects which option to choose
    personList plist(100); //Calling our dynamic array of people

    //do while loop that will always default to the menu as long as the user doesn't use option C to shut down program
    do {
        option = ' ';

        cout << "Please choose one option from these: " << endl;
        cout << "A. Assessing a new person's covid risk level" << endl;
        cout << "B. Display the current list of people already assessed" << endl;
        cout << "C. Exit Program" << endl;

        cin >> option;

        if (option == 'A') {
            string name, lastname; //two strings of first and last name
            cout << "Full Name: "; //prompt user to enter full name
            cin >> name;
            cin >> lastname;
            cout << endl;
            Person p(name, lastname); //create a new class Person with firstname and lastname 
            p.assess(); //assess our person's covid risk status
            plist.addPerson(p); //add the person to our dynamic array
        }
        else if (option == 'B') {
            plist.print(); //print our dynamic array of people
        }
        else if (option == 'C') {
            void exit(); //exits the program 
        }
        else cout << "That was not a valid input. Try again" << endl; //If there was not a valid input, this will be output to the user and the loop will iterate again
    } while (option != 'C'); // loop will continue until the user selects option C to close the program 
}