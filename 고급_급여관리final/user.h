#pragma once

#include<iostream>
#include<string>
#include"admin.h"
using namespace std;

class User { // �α��ΰ� ��ȸ

	UserDB *userdb;
	int userNum;
	int pass;
	int checking_ID;

public:

	User(UserDB *userdb) {
		this->userdb = userdb;
	}

	bool loginID(int userNum);

	bool loginPass(int pass);
	// ����� �α���

	void userSearch();
	// ����� ��ȸ(����)


};