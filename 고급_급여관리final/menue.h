#pragma once
#include<iostream>
#include<string>
#include"admin.h"
#include"user.h"
using namespace std;

class Menu {

	Admin *admin;		//관리자 객체
	User *user;			//사용자 객체
	
	UserDB userdb[100];
	string adminID;		//관리자 ID
	int adminPass;		//관리자 비번

	int userNum;		//사원번호
	int userPass;		//비밀번호

	int a;

public:

	Menu() {
		user = new User(userdb);
		admin = new Admin(userdb);
		menu();
	}
	void menu();

};
