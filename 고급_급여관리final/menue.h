#pragma once
#include<iostream>
#include<string>
#include"admin.h"
#include"user.h"
using namespace std;

class Menu {

	Admin *admin;		//������ ��ü
	User *user;			//����� ��ü
	
	UserDB userdb[100];
	string adminID;		//������ ID
	int adminPass;		//������ ���

	int userNum;		//�����ȣ
	int userPass;		//��й�ȣ

	int a;

public:

	Menu() {
		user = new User(userdb);
		admin = new Admin(userdb);
		menu();
	}
	void menu();

};
