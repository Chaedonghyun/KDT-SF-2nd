#include <iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream member("member.txt");
    cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요";
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << "번째 회원:";

        string info;
        getline(cin, info);

        if (member.is_open()) member << info << endl;

    }

    member.close();

    ifstream member_r("member.txt");
    string line;

    if (member_r.is_open())
    {
        while (getline(member_r, line)) {
            cout << line << endl;
        }
    }

    member_r.close();

	//string name, pw, name_in, pw_in;

	//cout << "이름을 입력하세요: ";
	//cin >> name_in;

	//cout << "비밀번호를 입력하세요: ";
	//cin >> pw_in;

	//ifstream member_file("member.txt");

	//bool is_login = false;

	//while (member_file >> name >> pw) {
	//	if (name == name_in && pw == pw_in) {
	//		is_login = true;
	//		break;
	//	}
	//}

	//member_file.close();

	//if (is_login) {
	//	string tel_in, tel;
	//	cout << "로그인 성공" << endl;
	//	cout << "전화번호를 입력하세요. ";
	//	cin >> tel_in;

	//	ifstream member_tel_file_r("member_tel.txt");
	//	string member_tel_temp = "";

	//	bool is_modify = false; // 기존 정보 수정 or 추가를 판단하는 변수

	//	if (!member_tel_file_r.fail()) {
	//		while (member_tel_file_r >> name >> tel) {
	//			string line = name + " ";
	//			if (name == name_in) {
	//				line += tel_in;
	//				is_modify = true;
	//			}
	//			else { 
	//				line += tel; 
	//			}
	//			member_tel_temp += line + "\n";
	//		}
	//		member_tel_file_r.close();
	//	}

	//	ofstream member_tel_file_w;

	//	if (is_modify) {
	//		member_tel_file_w.open("member_tel.txt");
	//		member_tel_file_w << member_tel_temp;
	//	}
	//	else {
	//		member_tel_file_w.open("member_tel.txt", std::ios::app);
	//		member_tel_file_w << name_in + " " + tel_in + "\n";
	//	}

	//	member_tel_file_w.close();
	//}
	//else cout << "로그인 실패";
    
}

