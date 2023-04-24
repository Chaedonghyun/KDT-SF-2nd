
#include <iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    ifstream file;
    file.open("hello.txt");
	string line;
    vector<string>v1;
	if (file.is_open())
	{
		while (getline(file,line))
		{
			cout << line << endl;
			v1.push_back(line);
		}
	}
	else
	{
		cout << "fail\n";
	}
	
	file.close();


	ofstream file2("output.txt");

	for (int i = v1.size()-1; i >=0; i--)
	{
		cout << v1[i]<<endl;
		file2 << v1[i] <<endl;
		
	}

	
	//getline(cin, line);
	//cout << line;*/
}


