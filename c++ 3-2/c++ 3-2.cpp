﻿// c++ 3-2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//사용자한테 입력받은 수로 배열의 크기를 지정 할 때
	/*int n = 3;
	int* p=&n;*/

	//std::cout << p<<"\n"; //그냥 변수이름으로 접근하면 , n의 주소값
	//std::cout << *p << 
	//	'\n'; //p가 가리키고 있는 주소에 들어간 실제 값을 출력


	//std::string str = "aaa";
	//std::string* str_p = &str;

	//std::cout << str_p << "\n"; //그냥 변수이름으로 접근하면 , n의 주소값
	//std::cout << * str_p;

	//int& num = n; //num 참조 변수
	////n이라는 변수가 있는데, n이라는 변수에 num이라는 별명을 붙인 상황
	//std::cout << n << std::endl;
	//std::cout << &n << std::endl;
	//std::cout << num << std::endl;
	//std::cout << &num << std::endl;
	
	//포인터:메모리 주소를 저장하는 변수
	//포인터를 이용하면, 동적 메모리를 생성할 수 있다.
	
	
	int num;
	std::cout << "크기를 입력하세요";
	std::cin >> num;
	int* arr=new int[num];

	for (int i = 0; i < num; i++) {
		arr[i] = i + 1;
	}

	for (int i = 0; i < num; i++) {
		std::cout << arr[i] << " ";
	}

	delete[]arr;

	//동적으로 2차배열 num*num 행렬
	int** arr2=new int*[num];

	for (int i = 0; i < num; i++)
	{
		arr2[i] = new int[num];
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			arr2[i][j]=1;
		}
		
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			std::cout << arr2[i][j] << " ";
		}

	}std::cout << "\n";


	for (int i = 0; i < num; i++)
	{
		delete[] arr2[i];
	}

	delete[] arr2;
 
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
