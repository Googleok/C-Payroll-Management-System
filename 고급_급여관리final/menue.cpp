#include<iostream>
#include<string>
#include"admin.h"
#include"user.h"
#include"menue.h"
using namespace std;
void Menu::menu() {
	while (1) {
		cout << "==== 급여관리 프로그램입니다.====" << endl;
		cout << "1. 관리자 모드  " << "\t" << "2. 사용자 모드" << endl;
		cin >> a;

		switch (a) {

			case 1:
			{
				cout << "관리자ID를 입력하세요 =>";
				cin >> adminID;

				if (admin->loginID(adminID)) {

					cout << "비밀번호를 입력하세요 =>";
					cin >> adminPass;

					if (admin->loginPass(adminPass)) {


						cout << "=== Login Success ===" << endl;
						// 관리자 로그인모드
						admin->adminMode();

					}

				
					else {
						cout << "비밀번호가 틀렸습니다." << endl; continue;
					}
				}
				else {
					cout << "관리자ID가 틀렸습니다." << endl; continue;
				}
			}break;

			case 2:
			{
				cout << "사원번호를 입력하세요:";
				cin >> userNum;
				if (user->loginID(userNum)) {

					cout << "비밀번호를 입력하세요 =>";
					cin >> userPass;
					if (user->loginPass(userPass)) {


						cout << "=== User Login Success ===" << endl;
						// 사용자모드
						user->userSearch();

					}

					else {
						cout << "비밀번호가 틀렸습니다." << endl; break;
					}

				}
				else {
					cout << "사원번호가 존재하지 않습니다. " << endl;
				}

			} break;

			default:cout << "잘못된 입력입니다." << endl; break;
		}
		


	}
}