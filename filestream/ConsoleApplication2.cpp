
#include <iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    ifstream member("member.txt"); 
    string name,pw, name_in, pw_in;

    cout << "이름을 입력해주세요";
    cin >> name_in;

    cout << "pw을 입력해주세요";
    cin >> pw_in;

    bool is_login = false;

    if (member.is_open())
    {
        while (member >> name >> pw) {
            if ((name_in==name&&pw_in==pw)){
                is_login=true;
                break;
            }
    }
        if (is_login) cout << "로그인 성공\n";
        else cout << "로그인 실패";
    }
    member.close();

    

    


    


    
}

