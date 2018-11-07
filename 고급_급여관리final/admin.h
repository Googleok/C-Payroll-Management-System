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
	// 생성자
	Admin(UserDB *userdb) {  
		this->userdb = userdb;

		adminID = "1";
		pass = 1;

	}
	bool loginID(string adminID);	//로그인 ID
	bool loginPass(int pass);		//로그인 비번
	void adminMode();				//관리자 메뉴
	void setUserDB();				//사용자 등록


	void setUserName(string name);					//이름등록
	void setUserPosition(string position);			//직급등록
	void setUserDepartment(string department);		//부서등록

	void setUserNum(int userNum);					//사원번호 등록

	void setUserPass(int pass);						//비번 등록
	void setUserSalaryF(string salary);				//정규직 급여등록

	void setUserSalaryP(string salary);				//비정규직 급여등록

	void setUserAge(int age);						//나이

	void search();									//조회
	void deleteUser();								//삭제
	void update();									//수정

}; // Admin class