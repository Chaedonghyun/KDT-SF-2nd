#include <iostream>
#include<ctime>
#include<vector>
#include<cstdlib>


using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;


int main()
{
    string word;
	string word2;
	string timeOut= "다음단어를 입력하세요";
	vector<string>v;
    clock_t startTime = clock();
	bool ment = false;
	while (true)
	{
		
		cin >> word;
		v.push_back(word);
		cout << "다음단어를 입력하세요";
		/*cin >> word;
		v.push_back(word);*/
		
		clock_t endtTime = clock();
		int timer = (endtTime - startTime) / CLOCKS_PER_SEC;
		if (timer>30)
		{
			cout << "시간초과 입니다";
		}
		else {
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i] << "->";
			}
			
			for (int i = 0; i < v.size() - 1; i++)
			{
				int n = v[i].size();
				if (v[i][n - 1] == v[i + 1][0])
				{
					continue;
				}
				else
				{
					cout << "잘못된 단어입니다";
					v.pop_back();
				}
			}


		}
		
			
			/*for (int i = 0; i < v.size() - 1; i++)
			{
				int n = v[i].size();
				if (v[i][n - 1] == v[i + 1][0])
				{   
					cout << "다음단어를 입력하세요";
				}
				else
				{
					cout << "잘못된 단어입니다";
					v.pop_back();
				}
			}*/
			
		

			
			
		
			

	
	}

	

	

	
	
}

