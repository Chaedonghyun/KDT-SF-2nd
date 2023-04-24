// c++ 3-3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{/*
    int num1;
    int num2;
    int up=0;


    std::cout << "x를 입력하세요:";
    std::cin >> num1;
    std::cout << "\n";
    std::cout << "y를 입력하세요:";
    std::cin >> num2;
    std::cout << "\n";

    if (num1 < 0)
    {
        std::cout << "x와y모두 양수를 입력해주세요.";
    }
    else if (num2 < 0) {
        std::cout << "x와y모두 양수를 입력해주세요.";
    }

    int** arr = new int* [num1,num2];

    for (int i = 0; i < num1; i++)
    {
        arr[i] = new int[num2];
    }

    for (int i = 0; i <num1; i++)
    {
        for (int j = 0; j < num2; j++) {
           up+= arr[i][j] = 1;
            
            std::cout << up <<" ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < num1; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;*/


    int student;
    int score = 0;
    
    std::cout << "몇명의 학생인지 입력하세요:";
    std::cin >> student;
    int* arr1 = new int[student];
    // int* arr2 = new int[score];
   

    for (int i = 0; i < student; i++)
    {
        std::cout << i + 1 << "번 학생의 성적을 입력하세요";
        std::cin >> arr1[i];
        score = score + arr1[i];
    }

    delete[] arr1;

    std::cout << "성적평균:" << (float)score / student;

   

}

