#pragma once
#include<iostream>
#include<string>
using namespace std;

class UserDB {

	string name;      //이름
	string position;   //직급
	string department;   //부서
	int userNum;      //사원번호 (검색용)
	int password;      //비밀번호 (개인정보 조회용)
	double salary;      //급여
	int age;         //나이


public:

	UserDB() {

	}

	//이름 set get
	void setName(string name);						
	string getName()const;	
	//나이 set get
	void setAge(int age);							
	int getAge()const;
	//사번 set get
	void setNum(int userNum);
	int getNum()const;
	//비번 set get 
	void setPass(int password);
	int getPass()const;
	//부서 set get 
	void setDepartment(string department);
	string getDepartment()const;
	// 직급 set get 
	void setPosition(string position);
	string getPosition()const;
	//급여 set get 
	void setSalary(double salary);
	double getSalary()const;

};