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
    string lastname;
    int riskLevel;
    int age;
    string riskStatus;
public:
    Person() { this->name = ""; this->age = 0; this->riskLevel = 0; this->riskStatus = ""; };
    Person(string n, string ln) { this->name = n; this->lastname = ln; this->age = 0; this->riskLevel = 0; this->riskStatus = ""; }
    int getRiskLevel();
    string getName();
    int getAge();
    string getRiskStatus();
    void setRiskLevel(int risk);
    void setName(string n);
    void setAge(int age);
    void setRiskStatus(string risk);
    void print();
    void assess();
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
    personList(int size) {
        this->size = size;
        numOfPeople = 0;
        people = new Person[size];

    }
    void addPerson(Person p);
    void print();
};










#endif