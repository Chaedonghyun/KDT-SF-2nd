#include <iostream>
#include<vector>
using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;

int main()
{
	cout << "야구게임"<<endl;
	bool end = true;
    int num=0;
	vector<int>choiceNum;
	vector<int>comNumber;
	bool correct = false;
	int input=0;
	while (input < 3)     //컴퓨터 랜덤 3개 뽑기
		{
			int randomNumber = rand() % 9 + 1;
			for (int i = 0; i < input; i++)
			{
				if (comNumber[i] == randomNumber) {
					correct = true;
				}
			}

			if (correct == false)
			{
				comNumber.push_back(randomNumber);
				input++;
			}

		}


	for (int i = 0; i < comNumber.size(); i++)  //랜덤 확인용
	{
		cout << comNumber[i] << " ";
	}
	
	
	

	
	int answer=0;
	while (end==true)
	{   
		int strike = 0;
		int count = 0;
		choiceNum.clear();
		bool correct2 = false;
		
		cout << "1~9까지의 숫자 3개를 입력 하시오(이외의 숫자:종료)";
		for (int i = 0; i < 3; i++)
		{
          cin >> num;
		  choiceNum.push_back(num);
		}
		
		for (int i = 0; i < 3; i++)
		{
			if (choiceNum[i] > 9 || choiceNum[i] < 1) { //입력값에 0~9를 넘어가면 종료
				end = false;  
				break;
			}
		}
		
		
	if (choiceNum[0]==choiceNum[1]|| choiceNum[1]==choiceNum[2]) //입력값중에 중복 확인
	    {
				correct2 = true;
			}
			else if (choiceNum[0]==choiceNum[2])
			{
				correct2 = true;
			}
		
		if (correct2==true)
		{
			cout << "중복된 숫자가 있습니다.";
			continue;
		}

		
		
		
		for (int i = 0; i < 3; i++)      //볼+스트라이크 통합해서 갯수를 구함
		{
			for (int j = 0; j < 3; j++) {
				if (comNumber[i]==choiceNum[j])
				{
					++count;
				}
			}
		}

	

		for (int i = 0; i < 3; i++)
		{
			if (comNumber[i] == choiceNum[i]) { //똑같은 자리에 있는 strike를 구함
				++strike;
			}
		}
		
		cout << "strike:" << strike<<" ";
		cout << "Ball:" << count - strike << endl;  //전체 맞은수에서 strike갯수를 빼서 볼수를 정한다.
		++answer;                                   
		if (strike==3)
		{
			cout << answer << "만에 정답";
			break;
		}

		
		
	}
		
		
		
		


		
	

}


