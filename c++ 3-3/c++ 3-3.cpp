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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
