#include<iostream>
#include<string>
#include"admin.h"
#include "user.h"
using namespace std;

bool User::loginID(int userNum) {
	for (int i = 0; i < 100; i++) {

		if (userNum == userdb[i].getNum()) {

			return true; break;
		}
		else {

		}

	}return false;

}

bool User::loginPass(int pass) {
	for (int i = 0; i < 100; i++) {

		if (this->pass == userdb[i].getPass()) {
			return true;
		}break;

	}return false;

}
// ����� �α���

void User::userSearch() {

	cout << "������ �����ȣ�� �Է����ּ��� :";
	cin >> checking_ID;

	for (int i = 0; i < 100; i++)
	{
		if (checking_ID == (userdb[i].getNum()))
		{
			cout << "\n" << userdb[i].getNum() << "\t" <<userdb[i].getName() << "\t" << userdb[i].getAge() << "\t" <<userdb[i].getDepartment() << "\t" << userdb[i].getPosition() << "\t" << userdb[i].getSalary() << "\t" << userdb[i].getPass() << endl;
			break;
		}
		else {
			cout << "�����ȣ�� �������� �ʽ��ϴ�." << endl;
			break;
		}
	}

}
// ����� ��ȸ(����)