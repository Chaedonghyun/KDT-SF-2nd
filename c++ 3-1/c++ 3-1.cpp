// c++ 3-1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

	//int num;//변수의선언
	//num = 0;//변수의 초기화, 할당
	//std::string fruit[3] = { "apple","banana","grape" };
	//std::string fruit[] = { "apple","banana","grape" };
	//선언할 때 크기가 정해져야함


	/*std::cout << fruit[0] << std::endl;
	std::cout << fruit[1] << std::endl;
	std::cout << fruit[2] << std::endl;*/




	//sizeof():변수,자료형의 크기를 byte 단위로
	//sizeof(fruit)/sizeof(fruit[0])
	//sizeof(fruit)/sizeof(std::string)
	/*for (int i= 0; i < sizeof(fruit)/sizeof(fruit[0]); i++)
	{
		std::cout << fruit[i] << std::endl;
	}*/

	//std::string fruit1[3]; //배열의 선언
	//fruit1[0]="apple";
	//fruit1[1]="grape";
	//fruit1[2]="kiwi";

	//2,2,2
	//1,23,4
	//int num[2][3] = { {2,2,2},{1,23,4} };

	//std::string alpha[2][4] = { {"a","b","c","d"},{"e","f","g","h"}};

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 4; j++) {
	//		std::cout << alpha[i][j]+" ";
	//	}
	//	std::cout << "\n";
	//}

	//int num2[3] = { 1,2,3 };

	//for (auto n : num2) {      //for(변수:배열)
	//	std::cout << n << " ";
	//
	//}

	//for (auto &n : num2) {      
	//	std::cin >>n;

	//}

	//std::string alpha3[2][4] = { {"a","b","c","d"},{"e","f","g","h"} };

	//for ( auto &arr:alpha3)
	//{
	//	for (auto a : arr) {
	//		std::cout << a << " ";
	//     }
	//	std::cout << std::endl;
	//}

	/*std::string city[5] = { "한국","일본","중국","미국","러시아" };
	std::string city2[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "나라를 입력하세요.";
		std::cin >> city2[i];

	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << city[i]<<" ";
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << city2[i] << " ";
	}*/


	/*int grade[5];
	int total=0;

	for (int i = 0; i <5; i++)
	{
		std::cout << i+1 << "번째 학생 점수를 입력하시오" << " ";
		std::cin >> grade[i];

		total += grade[i];

	}


	std::cout << "평균 점수는:"<< (float)total/(float)5;*/

	int score[2][3];

	/*for (int i = 0; i < 3; i++)
	{
		std::cout << i+1 <<"번 째 학생의 국어점수 수학점수를  받으시오";
		for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> score[i][j];
			std::cin >> score[i][j];
		}

	}
	}*/

	



	int korea[3];
	int math[3];
	int total1 = 0;
	int total2 = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << "번 째 학생의 국어 수학 점수를 입력하세요";
		std::cin >> korea[i];
		std::cin >> math[i];

		total1 += korea[i];
		total2 += math[i];
	}

	std::cout << "국어 평균 점수는:" << (float)total1 / 3;
	std::cout << "수학 평균 점수는:" << (float)total2 / 3;

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
