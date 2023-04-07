#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main()
{

	vector<int>v1;
	vector<int>v2;
	int num2;
	int count=0;
	bool equal = false;
	while (count<6)
	{
        int randomNumber = rand();
		int num = randomNumber % 25 + 1;
		for (int i = 0; i < count; i++)
		{
			if (v1[i] == num) {
				equal = true;
			}
		}
		if (equal==false)
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
		
		if (num2<1||num2>25)
		{
			cout << "범위 초과입니다 다시입력하세요:";
			continue;
		}

		equal = false;
		for (int i = 0; i < v2.size(); i++)
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

	
	for (int i = 0; i < v1.size(); i++)
	{
		for (int j = 0; j < v2.size(); j++) {
			if (v1[i]==v2[j])
			{
				correct++;
			}
		}
	}

	/*cout << "맞힌갯수:" << correct;*/

	switch (correct)
	{ 
	case 1:
		cout << "7등입니다";
		break;
	case 2:
		cout << "6등입니다";
		break;
	case 3:
		cout << "5등입니다";
		break;
	case 4:
		cout << "4등입니다";
		break;
	case 5:
		cout << "3등입니다";
		break;
	case 6:
		cout << "2등입니다";
		break;
	case 7:
		cout << "1등입니다";
		break;
	}



		

	
		
		


		

		
			

		
			
		
		
	

}

