#pragma once
#include<iostream>
#include<string>
using namespace std;

class UserDB {

	string name;      //�̸�
	string position;   //����
	string department;   //�μ�
	int userNum;      //�����ȣ (�˻���)
	int password;      //��й�ȣ (�������� ��ȸ��)
	double salary;      //�޿�
	int age;         //����


public:

	UserDB() {

	}

	//�̸� set get
	void setName(string name);						
	string getName()const;	
	//���� set get
	void setAge(int age);							
	int getAge()const;
	//��� set get
	void setNum(int userNum);
	int getNum()const;
	//��� set get 
	void setPass(int password);
	int getPass()const;
	//�μ� set get 
	void setDepartment(string department);
	string getDepartment()const;
	// ���� set get 
	void setPosition(string position);
	string getPosition()const;
	//�޿� set get 
	void setSalary(double salary);
	double getSalary()const;

};