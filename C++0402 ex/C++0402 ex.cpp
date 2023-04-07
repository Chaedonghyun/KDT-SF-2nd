
#include <iostream>
#include<vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class Snack {
protected:
	string flavor;
	string share;
public:
	Snack() {
		
	}
	static void info() {
		cout << "0~3을 선택하세요";
	}
};

class Candy : public Snack {
	static string flavor;
public:
	Candy(string flavor) :Snack() {
		this->flavor = flavor;
	}

	 void complete(){
		cout << flavor << "사탕\n";
	}

};

class Chocolate :public Snack {
	 static string share;
public:
	Chocolate(string share) :Snack() {
		this->share = share;

	}
	 void complete() {
		cout << share << "초콜릿\n";
	}
	
};

string Candy::flavor=" ";
string Chocolate::share=" ";

int main()
{
	int num;
	string flavor;
	string share;

	vector<string>arr;
	
	
	while (true)
	{
		Snack::info();
		cin >> num;
		
		if (num == 1) {
			cout << "맛을 선택하세요";
			cin >> flavor;
			Candy::Candy(flavor);
			arr.push_back(flavor+"맛사탕"+" ");
		}
		else if (num == 2) {
			cout << "모양을 선택하세요";
			cin >> share;
			Chocolate::Chocolate(share);
			arr.push_back(share+"모양 초콜릿" + " ");
		}
		else if (num ==0)
		{
			for (int i = 0; i < arr.size(); i++)
			{
				cout << arr[i];
			}
			break;
			arr.clear();
		}
		else {
			cout << "0~1사이에 숫자를 선택하세요";
		}
	}

}

