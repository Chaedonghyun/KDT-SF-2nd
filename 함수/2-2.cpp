// 2-2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


void test();
int add(int num1, int num2);
int minus(int num1, int num2);
int multiple(int num1, int num2);
float divide(int num1, int num2);
void odd(int num1);
int big(int num1, int num2, int num3);

int main()
{
	int num1;
	int num2;
	int num3;
	/*int num2;
	std::string a;

	std::cout <<  "두 수를 입력하세요";
	std::cout << "\n";
	std::cin >> num1;
	std::cin >> num2;

	std::cout << "+,-,*,/ 선택하세요\n"; 
	std::cin >> a;

	if (a == "+")
	{
		std::cout<<add(num1, num2);
	}
	else if (a == "-") {
		std::cout << minus(num1, num2);
	}
	else if (a=="*")
	{
		std::cout << multiple(num1, num2);
	}
	else if (a == "/") {
		std::cout << divide(num1, num2);
	}
	else
	{
		std::cout << "다시입력하세요";
	}*/
	
	std::cout << "수를 입력하세요";
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	big(num1, num2, num3);

	 //odd(num1);
}

int add(int num1,int num2) {
	int result = num1 + num2;

	return result;
}

int minus(int num1, int num2) {
	int result;
	if (num1 > num2) {
		 result=num1 - num2;
	}
	else
	{
		 result = num2 - num1;
	}
	return result;
}

int multiple(int num1, int num2) {
	int result = num1 * num2;

	return result;
}

float divide(int num1, int num2) {
	float result = (float)num1 / (float)num2;
	
	return result;
}

void odd(int num1) {
	if (num1%2==0)
	{
		std::cout << "짝수입니다.";
	}
	else
	{
		std::cout << "홀수입니다.";
	}
}

int big(int num1,int num2, int num3){
	if (num1>num2 && num1>num3)
	{
		std::cout << num1 << "이가장크다";
	}
	else if (num2 > num1 && num2 > num3) {
		std::cout << num2 << "이가장크다";
	}
	else if (num3 > num1 && num3 > num2) {
		std::cout << num3 << "이가장크다";
	}

	return 0;
}





