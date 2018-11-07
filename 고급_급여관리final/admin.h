#pragma once
#include<iostream>
#include<string>
#include"userDB.h"

using namespace std;



class Admin {

	string name;
	string position;
	string department;
	int userNum;
	int password;
	double salary;
	int age;
	int c = 0;
	UserDB *userdb;

	

private:

	string adminID;
	int pass;



public:
	// ������
	Admin(UserDB *userdb) {  
		this->userdb = userdb;

		adminID = "1";
		pass = 1;

	}
	bool loginID(string adminID);	//�α��� ID
	bool loginPass(int pass);		//�α��� ���
	void adminMode();				//������ �޴�
	void setUserDB();				//����� ���


	void setUserName(string name);					//�̸����
	void setUserPosition(string position);			//���޵��
	void setUserDepartment(string department);		//�μ����

	void setUserNum(int userNum);					//�����ȣ ���

	void setUserPass(int pass);						//��� ���
	void setUserSalaryF(string salary);				//������ �޿����

	void setUserSalaryP(string salary);				//�������� �޿����

	void setUserAge(int age);						//����

	void search();									//��ȸ
	void deleteUser();								//����
	void update();									//����

}; // Admin class