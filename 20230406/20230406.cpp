#include <iostream>
#include<ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    

    int num = 0;
    int num2 = 0;

    while (true)
    {
        cout << "개수를 입력하세요";
        cin >> num;
        if (num > 3)
        {
            cout << "1~3 사이의 수를 입력하세요";
            continue;
        }
       
            for (int i = 0; i < num; i++) {
                cout << ++num2 << endl;
            }
            int randomNuber = rand();
            int number = randomNuber % 3 + 1; //컴퓨터가 1~3사이의 숫자를 부름
            cout << "컴퓨터가 부른 숫자:" << endl;
            if (num2 < 31)                
            {
                for (int i = 0; i < number; i++)
                {
                    cout << ++num2 << endl;
                }
            }
            else break;
           
            

       
        

        





    }
}
    



