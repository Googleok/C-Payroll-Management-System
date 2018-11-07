#include<iostream>
#include<string>
#include "userDB.h"
using namespace std;
void UserDB::setName(string name)
{
	this->name = name;
}
string UserDB::getName()const
{
	return name;
}


void UserDB::setAge(int age)
{
	this->age = age;
}
int UserDB::getAge()const {
	return age;
}

void UserDB::setNum(int userNum)
{
	this->userNum = userNum;
}
int UserDB::getNum()const {

	return userNum;
}

void UserDB::setPass(int password)
{
	this->password = password;
}
int UserDB::getPass()const
{
	return password;
}

void UserDB::setDepartment(string department)
{
	this->department = department;
}
string UserDB::getDepartment()const {
	return department;
}

void UserDB::setPosition(string position)
{
	this->position = position;
}
string UserDB::getPosition()const {
	return position;
}

void UserDB::setSalary(double salary)
{
	this->salary = salary;
}
double UserDB::getSalary()const {
	return salary;
}