#include<iostream>
#include<string>
#include"admin.h"
#include"user.h"
#include"menue.h"
using namespace std;
void Menu::menu() {
	while (1) {
		cout << "==== �޿����� ���α׷��Դϴ�.====" << endl;
		cout << "1. ������ ���  " << "\t" << "2. ����� ���" << endl;
		cin >> a;

		switch (a) {

			case 1:
			{
				cout << "������ID�� �Է��ϼ��� =>";
				cin >> adminID;

				if (admin->loginID(adminID)) {

					cout << "��й�ȣ�� �Է��ϼ��� =>";
					cin >> adminPass;

					if (admin->loginPass(adminPass)) {


						cout << "=== Login Success ===" << endl;
						// ������ �α��θ��
						admin->adminMode();

					}

				
					else {
						cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl; continue;
					}
				}
				else {
					cout << "������ID�� Ʋ�Ƚ��ϴ�." << endl; continue;
				}
			}break;

			case 2:
			{
				cout << "�����ȣ�� �Է��ϼ���:";
				cin >> userNum;
				if (user->loginID(userNum)) {

					cout << "��й�ȣ�� �Է��ϼ��� =>";
					cin >> userPass;
					if (user->loginPass(userPass)) {


						cout << "=== User Login Success ===" << endl;
						// ����ڸ��
						user->userSearch();

					}

					else {
						cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl; break;
					}

				}
				else {
					cout << "�����ȣ�� �������� �ʽ��ϴ�. " << endl;
				}

			} break;

			default:cout << "�߸��� �Է��Դϴ�." << endl; break;
		}
		


	}
}