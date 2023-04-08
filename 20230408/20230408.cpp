#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Character {
protected:
	int hp;
	int level;
	int deal;
	static string wepon;
    static int count;

public:
	Character(int hp, int level,int deal,int count,string wepon) {
		this->hp = hp;
		this->level = level;
		this->deal = deal;
		this->count = count;
		this->wepon = wepon;
	}

	

	virtual void attack() {

	}

	//static int get_Count() {
	//	//cout << count;
	//	return count;
	//}

	static string eq() {
		
		return wepon;
	}

	virtual void setCount() {
		
	}

	virtual int getCount() {
		return 0;
	}

};

class Wepon :public Character  {
protected:
	

public:
	Wepon(int deal, int count) :Character(hp, 5,deal,count,wepon) {
		this->hp = hp;
		this->deal = deal;
		this->count = count;
		this->wepon = wepon;
	}
	void attack() {

	}
	int getCount() {
		return 0;
	}

	string eq() {

		return " ";
	}

};

class Knife :public Wepon{

public:
	Knife(string wepon) :Wepon(deal, count) {
		this->wepon = wepon;
		deal = 5;
		count = 3;
	}
	void attack() {
		cout << "데미지"<<deal<<" ";
	}
	
	int getCount() {
		return count;
	}
	void setCount() {
		count=count--;
	}

	string eq() {
	  return wepon;
	}
};

class Gun :public Wepon {

public:
	Gun(string wepon) :Wepon(deal, count) {
		this->wepon = wepon;
		deal = 10;
		count = 1;
	}

	void attack() {
		cout << "데미지" << deal;
	}

	string eq() {
		return wepon;
	}

	int getCount() {
		return count;
	}
	void setCount() {
		count--;
	}
};
string Character::wepon = " ";
int Character::count = 0;
int main() {
	int num;
	int num2=0;
	int item = 0;
	
	/*Wepon* knife = new Knife("칼");
	knife->getCount();
	knife->setCount();
	knife->getCount();*/
	while (true)
	{
		cout << "어떤 동작을 하겠습니까?(1.무기 줍기 2.공격):";
		cin >> num;
		if (num == 1)
		{
			cout << "어떤 무기를 하겠습니까?(1.칼 2.총):";
			cin >> num2;
			cout << "무기를 획득 했습니다" << endl;
		}

		if (num2 == 1)
		{
			Wepon* knife = new Knife("칼");
			knife->eq();
		}

		if (num2 == 2)
		{
			Wepon* gun = new Gun("총");
			gun->eq();
		}

		if (num == 2)
		{
			if (Character::eq() == " ")
			{
				cout << "무기가 없습니다" << endl;
			}
			else if (Character::eq() == "칼") {
				Wepon* knife = new Knife("칼");
				knife->attack();
				knife->setCount();
				if (knife->getCount() == 0)
				{
					cout << "무기가 파괴 되었습니다";
				}

			}
			else if (Character::eq() == "총")
			{
				Wepon* gun = new Gun("총");
				gun->attack();

			}


		}



	}
	return 0;
};


    //Character::get_Count();
	//Wepon* w = new Knife();
	//w->attack();
	
	

	//Wepon* gun = new Gun();
	//gun->attack();
	

	



