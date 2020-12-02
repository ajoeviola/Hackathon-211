#include "person.h"

int Person::getRiskLevel()
{
	return this->riskLevel;
}

string Person::getName()
{
	return this->name;
}

int Person::getAge()
{
	return this->age;
}

void Person::setRiskLevel(int risk)
{
	this->riskLevel = risk;
}

void Person::setName(string n)
{
	this->name = n;
}

void Person::setAge(int age)
{
	this->age = age;
}

void Person::setRiskStatus(string risk)
{
	this->riskStatus = risk;
}

void Person::print(Person p)
{
	cout << this->name << " " << this->age << " " << this->riskStatus;
}

int Person::assess(Person p)
{
	return 0;
}
