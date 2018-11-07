#pragma once
#include<iostream>
#include<string>
#include"userDB.h"
#include"admin.h"

using namespace std;


bool Admin::loginID(string adminID) {
	if (this->adminID == adminID)
		return true;
	else return false;
}
bool Admin::loginPass(int pass) {
	if (this->pass == pass)
		return true;
	else return false;

}// ������ �α��� 

void Admin::adminMode() {

	int a;
	cout << "[������ ����Դϴ�.] " << endl;
	cout << "1. ����� �߰� 2. ����� ��ȸ 3. ����� ���� 4. ����� ��������" << endl;
	cin >> a;

	switch (a) {
	case 1:setUserDB(); break;
	case 2:search(); break;
	case 3:deleteUser(); break;
	case 4:update(); break;
	default: cout << "�߸��� �Է��Դϴ�." << endl; break;


	}


}// ������ Ŭ���� �޴�
void Admin::setUserDB() {
	int num;
	cout << "1. ������ 2. ��������" << endl;
	cin >> num;


	cout << "��� �̸��� �Է��ϼ���:";
	cin >> name;
	setUserName(name);

	cout << "������ �Է��ϼ���:";
	cin >> position;
	setUserPosition(position);

	cout << "�μ��� �Է��ϼ���:";
	cin >> department;
	setUserDepartment(department);

	cout << "�����ȣ�� �Է��ϼ���:";
	cin >> userNum;
	setUserNum(userNum);

	cout << "��й�ȣ�� �Է��ϼ���:";
	cin >> password;
	setUserPass(password);
	cout << "���̸� �Է��ϼ���:";
	cin >> age;
	setUserAge(age);
	if (num == 1) {
		setUserSalaryF(position);
	}
	else if (num == 2) {
		setUserSalaryP(position);
	}

	cout << "*����ڰ� �߰��Ǿ����ϴ�.*" << endl;
	c++;


}// ����� ���

void Admin::setUserName(string name) {
	userdb[c].setName(name);
}
void Admin::setUserPosition(string position) {
	userdb[c].setPosition(position);
}
void Admin::setUserDepartment(string department) {
	userdb[c].setDepartment(department);
}

void Admin::setUserNum(int userNum) {
	userdb[c].setNum(userNum);
}

void Admin::setUserPass(int pass) {
	userdb[c].setPass(pass);
}

void Admin::setUserSalaryF(string salary) {
	if (salary._Equal("���")) {
		userdb[c].setSalary(150);
	}
	else if (salary._Equal("�븮")) {
		userdb[c].setSalary(200);
	}
	else if (salary._Equal("����")) {
		userdb[c].setSalary(250);
	}
	else if (salary._Equal("����")) {
		userdb[c].setSalary(300);
	}
	else if (salary._Equal("����")) {
		userdb[c].setSalary(400);
	}
	else if (salary._Equal("����")) {
		userdb[c].setSalary(500);
	}
	else if (salary._Equal("�̻�")) {
		userdb[c].setSalary(700);
	}
	else if (salary._Equal("����")) {
		userdb[c].setSalary(1000);
	}
}

void Admin::setUserSalaryP(string salary) {
	if (salary._Equal("����")) {
		userdb[c].setSalary(120);
	}
	else if (salary._Equal("�����")) {
		userdb[c].setSalary(200);
	}
	else if (salary._Equal("�İ�")) {
		userdb[c].setSalary(250);
	}
}

void Admin::setUserAge(int age) {
	userdb[c].setAge(age);

}

void Admin::search() {
	int number;
	int checking_ID;
	cout << "1.��ü��ȸ 2.������ȸ";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "\n" << "�����ȣ" << "\t" << "�̸�" << "\t" << "����" << "\t" << "�μ�" << "\t" << "����" << "\t" << "�޿�" << "\t" << "��й�ȣ" << endl;
		for (int i = 0; i < c; i++)
		{
			cout << "=========================================================================================================" << endl;
			cout << userdb[i].getNum() << "\t" << "\t" << userdb[i].getName() << "\t" << userdb[i].getAge() << "\t" << userdb[i].getDepartment() << "\t" << userdb[i].getPosition() << "\t" << userdb[i].getSalary() << "\t" << userdb[i].getPass() << endl;
		}
		break;

	case 2:
		cout << "��ȸ�� ID �Է����ּ���";
		cin >> checking_ID;

		for (int i = 0; i < 100; i++)
		{
			if (checking_ID == (userdb[i].getNum()))
			{
				cout << "�����ȣ" << "\t" << "�̸�" << "\t" << "����" << "\t" << "�μ�" << "\t" << "����" << "\t" << "�޿�" << "\t" << "��й�ȣ" << endl;
				cout << userdb[i].getNum() << "\t" << "\t" << userdb[i].getName() << "\t" << userdb[i].getAge() << "\t" << userdb[i].getDepartment() << "\t" << userdb[i].getPosition() << "\t" << userdb[i].getSalary() << "\t" << userdb[i].getPass() << endl;
			}
		}
		break;
	default: cout << "�߸� �Է�"; break;
	}
}
void Admin::deleteUser() {

	int checking_ID;
	cout << "�����ϰ� ���� ID�� �Է��Ͻÿ�";
	cin >> checking_ID;

	for (int i = 0; i < 100; i++)
	{
		if (checking_ID == (userdb[i].getNum()))
		{

			for (int j = i; i < 100 - i; i++)
			{
				userdb[i] = userdb[i + 1];
			}
			--c;
		}

	}
}

void Admin::update() {
	int number;
	int checking_ID;
	cout << "������ ID�� �Է��ϼ���." << endl;
	cin >> checking_ID;

	for (int i = 0; i < 100; i++)
	{
		if (checking_ID == (userdb[i].getNum()))
		{
			cout << "��� �̸��� �Է��ϼ���:";
			cin >> name;
			userdb[i].setName(name);

			cout << "������ �Է��ϼ���:";
			cin >> position;
			userdb[i].setPosition(position);

			cout << "�μ��� �Է��ϼ���:";
			cin >> department;
			userdb[i].setDepartment(department);

			cout << "�����ȣ�� �Է��ϼ���:";
			cin >> userNum;
			userdb[i].setNum(userNum);

			cout << "��й�ȣ�� �Է��ϼ���:";
			cin >> password;
			userdb[i].setPass(password);

			cout << "�޿��� �Է��ϼ���:";
			cin >> salary;
			userdb[i].setSalary(salary);

			cout << "���̸� �Է��ϼ���:";
			cin >> age;
			userdb[i].setAge(age);

			cout << "*����ڰ� �����Ǿ����ϴ�.*" << endl;
		}
	}
}