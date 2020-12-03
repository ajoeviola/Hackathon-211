#include "person.h"

//Function getRiskLevel will return the variable riskLevel
int Person::getRiskLevel()
{
	return this->riskLevel;
}

//Function getName will return the variable name
string Person::getName()
{
	return this->name;
}

//Function getAge will return the variable age
int Person::getAge()
{
	return this->age;
}

//Function getRiskStatus will return the variable riskStatus
string Person::getRiskStatus()
{
	return this->riskStatus;
}

//Function setRisklevel will set the variable risklevel to the parameter
void Person::setRiskLevel(int risk)
{
	this->riskLevel = risk;
}

//Function setRiskStatus will set the variable riskstatus to the parameter
void Person::setRiskStatus(string risk)
{
	this->riskStatus = risk;
}

//Function setName will set the variable name to the parameter
void Person::setName(string n)
{
	this->name = n;
}

//Function setAge will set the variable age to the parameter
void Person::setAge(int age)
{
	this->age = age;
}

//Function print() will print out the Person it is called on 
void Person::print()
{
	cout << name << " " << lastname << " " << age << " " << riskStatus << endl;
}

void Person::assess()
{
	int age, ppl;
	bool answer = 0;
	char response;

	//first question of the assessment
	cout << "How old are you? "; //prompt user for their age 
	cin >> age;
	this->setAge(age); //set the persons age to the class Person
	system("CLS");
	//second question
	cout << "Have you used public transporation in the past 2 weeks? (Y/N)";
	cin >> response;
	if (response == 'Y') {
		answer = 1;
	}
	else if (response == 'N') {
		answer = 0;
	}

	if (answer)
	{
		this->riskLevel++; //increment risklevel for Person
	}
	system("CLS");

	//third question
	cout << "Have you been to a public gym in the past 2 weeks? (Y/N)";
	cin >> response;
	if (response == 'Y') {
		answer = 1;
	}
	else if (response == 'N') {
		answer = 0;
	}

	if (answer)
	{
		this->riskLevel++; //increment risklevel for Person
	}
	system("CLS");

	//fourth question 
	cout << "How many people do you live with?";
	cin >> ppl;
	if (ppl >= 5) {
		this->riskLevel++; //increment risklevel for Person
	}
	system("CLS");

	//fifth question
	cout << "Do you travel to work or school? (Y/N)";
	cin >> response;
	if (response == 'Y') {
		answer = 1;
	}
	else if (response == 'N') {
		answer = 0;
	}

	if (answer)
	{
		this->riskLevel++; //increment risklevel for Person
	}
	system("CLS");

	//sixth question
	cout << "Do you wear a mask when social distancing is not possible? (Y/N)";
	cin >> response;
	if (response == 'Y') {
		answer = 1;
	}
	else if (response == 'N') {
		answer = 0;
	}

	if (answer)
	{
		this->riskLevel++; //increment risklevel for Person
	}
	system("CLS");

	//seventh question
	cout << "Have you traveled by plane in the past month? (Y/N)";
	cin >> response;
	if (response == 'Y') {
		answer = 1;
	}
	else if (response == 'N') {
		answer = 0;
	}

	if (answer)
	{
		this->riskLevel++; //increment risklevel for Person
	}
	system("CLS");

	//set covid risk status based on Person's risk level.
	if (this->riskLevel <= 2) {
		this->setRiskStatus("low"); 
	}else if (this->riskLevel <= 4) {
		this->setRiskStatus("moderate");
	}else if (riskLevel <= 6) {
		this->setRiskStatus("high");
	}







	cout << "Your covid risk status is " << this->riskStatus << endl; //cout the Person's risk level
}

//function add person adds the person to our dynamic array
void personList::addPerson(Person p) {
	if (this->numOfPeople < size) 
	{
	people[this->numOfPeople] = p;
	this->numOfPeople++;
	}
}

//function personList prints out the entire dynamic array
void personList::print() {
	system("CLS");
	for (int i = 0; i < this->numOfPeople; i++) {
		people[i].print();
	}
}
