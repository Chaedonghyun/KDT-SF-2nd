#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//int add(int num1, int num2) {
//
//    return num1 + num2;
//
//}

int main()
{
    //구구단 만들기
    /*for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            cout << i << "x" << j << "=" << i * j<<endl;
        }
        cout << endl;
    }*/

    //반복문 1에서 n까지의 합 구하는 공식
   /* int num=0;
    int total=0;
    cout << "1부터 n까지의 합 구하기"<<endl;

    cout << "숫자(양의 정수)를 입력하세요:";
    cin >> num;

   for (int i = 1; i <=num; i++)
    {
       total += i;
    }

    cout << "1부터" << num << "까지의 합은:"<<total;*/


    //입력 받은 숫자 계속 더하기(0이 나올때 까지)
    /*int input,output=0;
    while (true)
    {
        cout << "숫자를 입력 하세요:";
        cin >> input;

        output += input;

        if (input==0)
        {
            cout << "여태까지의 합은:"<<output;
            break;
        }
        
    }*/

    //별 찍기
   /* int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    
   // add 함수 사용하기
   // cout<<add(1, 3);

   /* string alph[2][4] = { {"a","b","c","d"},{"e","f","g","h"} };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++) {
            cout << alph[i][j]<< " ";
        }
        cout <<endl;
    }*/
    
    //숫자 맞추기
    /*int correct[3] = { 1,8,5 };
    int use[3];
    int answer = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "숫자를 입력파세요";
        cin >> use[i];
    }
    for (int i = 0; i <3 ; i++)
    {
        for (int j = 0; j < 3; j++) {
            if (correct[i] == use[j]) {
                answer++;
            }
        }
    }

    cout << answer;*/



}
