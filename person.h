#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

/*

Class Person will contain the following: 
	private members: string name, int riskLevel, int age, string riskStatus
	public member functions: getRiskLevel(), getName(), getAge(), getRiskStatus(), setRiskLevel(), setName(), setAge(), setRiskStatus(), print(), assess() (function assess will contain the questions for assesment and calculate risk level based on each question)
	a default constructor as well as another constructor that takes in the users name as a parameter
*/
class Person {
private:
	string name;
	int riskLevel;
	int age;
	string riskStatus;
public:
	Person() { this->name = ""; this->age = 0;};
	Person(int n) { this->name = n; }
	int getRiskLevel();
	string getName();
	int getAge();
	void setRiskLevel(int risk);
	void setName(string n);
	void setAge(int age);
	void setRiskStatus(string risk);
	void print(Person p);
	int assess(Person p);
};



/*

class personList will contain the following:
	private members: int size, int numOfPeople, Person* people
	public member functions: addPerson(), print(), getPerson();
	constructor that has an integer parameter size of the array that if not passed, will default to setting the size to 0
	destructor that deletes the class object
*/
class personList {
private:
	int size;
	int numOfPeople;
	Person* people;
public:
	personList(int size = 0) { this->size = size; }
	void addPerson(Person p);
	void getPerson();
	void print(Person* people);
};


/* 
Function printMenu will print a menu that gives the user an option of either:
A. Assessing a new person's covid risk level
B. Display the current list (personList) of people already assesed 
C. Exit Program

*/
void printMenu() {

}


























#endif