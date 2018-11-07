#pragma once

#include<iostream>
#include<string>
#include"admin.h"
using namespace std;

class User { // 로그인과 조회

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
	// 사용자 로그인

	void userSearch();
	// 사용자 조회(본인)


};