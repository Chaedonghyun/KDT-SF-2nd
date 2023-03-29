// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<vector>

int add(int num1, int num2) {

	return  num1 + num2;
}

int minus(int num1, int num2) {
	int sum;
	if (num1>=num2)
	{
		sum = num1 - num2;
	}
	else {
		sum = num2 - num1;
	}

	return sum;
}

int multiple(int num1, int num2) {
	return num1 * num2;
}

double divide(int num1, int num2) {
	return (double)num1 / (double)num2;
}

int main()
{

	/*int num;
	int sum=0;

	std::cout << "1부터 n까지의 합 구하기\n";
	std::cout << "숫자를 입력 하세요:";
	std::cin >> num;


	for (int i = 1; i < num; i++)
	{
		sum += num;
	}
	std::cout << "1부터"<<num<<"까지의 합은:" << sum;*/

	/*std::cout << "사용자가 입력한 숫자 더하기\n";
	int num=1 ;
	int score=0;
	int total=0;
	
	while (num!=0)
	{
		std::cout << "숫자를 입력하세요(0종료):";
		std::cin >> num;
		total += num;
	}
	std::cout << "사용자가 입력한 수의 합은:" <<total;*/
	/*int str ;

	std::cout << "input:";
	std::cin >> str;

	for (int i = 1; i <= str; i++)
	{
		for (int j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}*/

	/*for (int i = 0; i < 5; i++)
	{
		for(int j=5; j>i; j--){
			std::cout << "*";
		}
		std::cout << "\n";
	}*/

	
	//int num2[3];

	//for (auto &n : num2) {      
	//	std::cin >>n;
 //    }
	//for (auto n : num2) {      //for(변수:배열)
	//	std::cout << n << " ";
	//
	//}
	/*int order;
	int num;
	std::cout << "주문을 하시겠습니까(1번 yes 2번 no)";
	std::cin >> order;

    std::cout << "메뉴를 선택하세요\n 1.아메리카노 2.라떼 3.아이스티 \n";
	while (order==1)
	{
		  std::cin >> num;
		  
		  if (num == 0) {
			  std::cout << "주문이 종료됩니다";
			  break;
		  }
		  std::cout << num<<"번 음료가 추가되었습니다.";

	}*/

	//int  num;
	//std::cout << "양수를 입력하세요";
	//do
	//{
	//	std::cin >> num;
	//} while (num>=0);
	
	//int num1; 
	//int num2;

	//std::cout << "두 수를 입력하세요";
	//std::cin >> num1;
	//std::cin >> num2;

	//std::cout << "더하기:" << add(num1, num2)<< "\n";
	//std::cout << "빼기:" << minus(num1, num2) << "\n";
	//std::cout << "곱하기" << multiple(num1, num2) << "\n";
	//std::cout << "나누기:" << divide(num1, num2);

	/*int score[3][3];

	for (int i = 0; i < 3; i++)
	{
		std::cout << i + 1 << "번째 학생의 영어 점수:";
		std::cin >> score[i][0];
		std::cout << i + 1 << "번째 학생의 수학 점수:";
		std::cin >> score[i][1];
		std::cout << i + 1 << "번째 학생의 국어 점수:";
		std::cin >> score[i][2];
	}
	int engtotal=0;

	for (int i = 0; i < 3; i++) {
		engtotal += score[i][0];
	}
	double engave = (double)engtotal / 3;

	int mathtotal=0;
	for (int i = 0; i < 3; i++) {
		mathtotal += score[i][1];
	}
	double mathevg = (double)mathtotal / 3;

	int kototal=0;
	for (int i = 0; i < 3; i++) {
		kototal += score[i][2];
	}
	double koevg = (double)kototal / 3;

	std::cout << "영어 평균점수:" << engave << std::endl;
	std::cout << "수학 평균점수:" << mathevg << std::endl;
	std::cout << "국어 평균점수:" << koevg << std::endl;*/
//int num;
//std::cout << "크기를 입력하세요";
//std::cin >> num;
//int** arr2 = new int* [num];
//
//for (int i = 0; i < num; i++)
//{
//	arr2[i] = new int[num];
//}
//
//for (int i = 0; i < num; i++)
//{
//	for (int j = 0; j < num; j++)
//	{
//		arr2[i][j]= 1;
//	}
//
//}
//
//for (int i = 0; i < num; i++)
//{
//	for (int j = 0; j < num; j++)
//	{
//		std::cout << arr2[i][j] << " ";
//	}
//
//}std::cout << "\n";
//
//
//for (int i = 0; i < num; i++)
//{
//	delete[] arr2[i];
//}
//
//delete[] arr2;

//int num1;
//int num2;
//int up = 0;
//
//while (1)
//{std::cout << "x를 입력하세요:";
//std::cin >> num1;
//std::cout << "\n";
//std::cout << "y를 입력하세요:";
//std::cin >> num2;
//std::cout << "\n";
//
//if (num1 < 0)
//{
//	std::cout << "x와y모두 양수를 입력해주세요.\n";
//}
//else if (num2 < 0) {
//	std::cout << "x와y모두 양수를 입력해주세요.\n";
//}
//else
//{
//	break;
//}
//
//}
//
//
//int** arr = new int* [num1, num2];
//
//for (int i = 0; i < num1; i++)
//{
//	arr[i] = new int[num2];
//}
//
//for (int i = 0; i < num1; i++)
//{
//	for (int j = 0; j < num2; j++) {
//		up += arr[i][j] = 1;
//
//		std::cout << up << " ";
//	}
//	std::cout << "\n";
//}
//
//for (int i = 0; i < num1; i++)
//{
//	delete[] arr[i];
//}
//delete[] arr; 

//int num = 1;
//int sum = 0;
//
//std::vector<int> v;
//
//while (1) {
//	std::cout << "숫자를 입력하세요(0은 종료) :";
//		std::cin >> num;
//
//	if (num == 0) {
//		break;
//	}
//	v.push_back(num); //v에 num값을 대입
//}
//
//for (int i = 0; i < v.size(); i++) { //.size() 크기를 알려주는 함수
//	sum += v.at(i);        //v배열의 .at(i)인덱스에해당하는 값 반환
//}
//std::cout << sum;

int x, y;
while (1)
{
	std::cout << "x값을 입력하세요";
	std::cin >> x;
	std::cout << "y값을 입력하세요";
	std::cin >> y;

	if (x < 0 || y < 0)
	{
		std::cout << "x,y양수를 입력하세요.";
	}
	else
	{
		break;
	}
	

}
std::vector<std::vector<int>> arr(x, std::vector<int>(y));

int cnt = 1;
for (int i = 0; i < x; i++)
{
	for (int j = 0; j < y; j++) {
		arr[i][j] = cnt++;
	}
}

for (int i = 0; i < x; i++)
{
	for (int j = 0; j < y; j++) {
		std::cout << arr[i][j] << " ";
	}
	std::cout << std::endl;
}

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
