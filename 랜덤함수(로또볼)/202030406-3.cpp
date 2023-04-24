#include <iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main()
{
	std::srand(time(NULL)); //매번 다른 값을 생성하려면 srand()함수에 seed를 전달
	vector<int>v1;
	vector<int>v2;
	int num2;
	int count=0;
	bool equal = false;
	while (count<6)
	{
        int randomNumber = rand();
		int num = randomNumber % 25 + 1; //1~25사이의 랜덤 숫자
		for (int i = 0; i < count; i++) 
		{
			if (v1[i] == num) {
				equal = true;   //겹치는 순간 제외
			}
		}
		if (equal==false) //겹치지 않으면 v1에 들어간다
		{
          v1.push_back(num);
		  count++;
		}
	}
		
	int count2 = 1;
	cout << "숫자는 1~25까지의 숫자만 입력 받을 수 있습니다."<<endl;
	while (count2<7)
	{
		cout << count2 << " 번호를 입력하세요:";
		cin >> num2;
		
		if (num2<1||num2>25) //입력 숫자 범위 조절 1~25
		{
			cout << "범위 초과입니다 다시입력하세요:";
			continue; //반복문에 맨 위로 이동
		}

		equal = false;
		for (int i = 0; i < v2.size(); i++) //입력한 숫자 반복체크
		{
			if (num2 == v2[i]) {
				equal = true;
				break;
			}
		}

		if (equal==true)
		{
			cout << "이미입력한 숫자입니다\n";
		}
		else
		{
			v2.push_back(num2);
			count2++;
		}
		
	}
	
	cout << "당첨번호 공개!"<<endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
		
	int correct = 0;

	
	for (int i = 0; i < v1.size(); i++) //
	{
		for (int j = 0; j < v2.size(); j++) {
			if (v1[i]==v2[j])
			{
				correct++;
			}
		}
	}

	cout << 8 - correct << "등 입니다.";
	
	v1.clear();
	v2.clear();

	
	
	


		

	
		
		


		

		
			

		
			
		
		
	

}

