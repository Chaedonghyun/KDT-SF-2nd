// c++ 3-1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

	/*int grade[5];
	int total=0;

	for (int i = 0; i <5; i++)
	{
		std::cout << i+1 << "번째 학생 점수를 입력하시오" << " ";
		std::cin >> grade[i];
		total += grade[i];
	}


	std::cout << "평균 점수는:"<< (float)total/(float)5;*/

	int score[3][3];

	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << "번째 학생의 영어 점수:";
		std::cin >> score[i][0];
		std::cout << i + 1 << "번째 학생의 수학 점수:";
		std::cin >> score[i][1];
		std::cout << i + 1 << "번째 학생의 국어 점수:";
		std::cin >> score[i][2];
	}
	int engtotal;

	for (int i = 3; i < 3; i++) {
		engtotal += socre[i][0];
	}
	int engave = (float)engtotal / 3;

	int mathtotal;
	for (int i = 3; i < 3; i++) {
		mathtotal += socre[i][1];
	}
	int mathevg = (float)mathtotal / 3;

	int kototal;
	for (int i = 3; i < 3; i++) {
		kototal += socre[i][2];
	}
	int koevg = (float)kototal / 3;

	std::cout << "영어 평균점수:" << engave<<std::endl;
	std::cout << "수학 평균점수:" << mathevg << std::endl;
	std::cout << "국어 평균점수:" << koevg << std::endl;

	std::cout << i + 1 << "번째 학생의 영어 점수:";

}
}



}
