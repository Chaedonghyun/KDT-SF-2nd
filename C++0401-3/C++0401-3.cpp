
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;


class Snack {
protected:
	int price;
	string name;
	string label;


public:
	Snack(int price, string name, string label) {
		this->price = price;
		this->name = name;
		this->label = label;
	}

	virtual void buy() {
		cout << name << price << label << "사탕을 사다\n";
	}

	virtual void eat() {
		cout << name << price << label << "사탕을 먹다\n";
	}

};

class Candy : public Snack {
	string flavor;
public:
	Candy(string flavor) :Snack(500, "춥파츕스", "롯데제과") {
		this->flavor = flavor;
	}

	void buy() {
		cout << flavor<<"맛" << name <<"를 " << price <<"에 " << label << "사탕을 사다\n";
	}

	void eat() {
		cout << flavor<<"맛" << name <<"를 " << price << "에 " << label << "사탕을 먹다\n";
	}

};

class Chocolate :public Snack {
	string share;
public:
	Chocolate(string share) :Snack(800, "가나", "롯데제과") {
		this->share = share;

	}

	void buy() {
		cout <<share<<"모양" << name << price << label << "초콜릿을 사다\n";
	}

	void eat() {
		cout << share<< "모양" << name << price << label << "초콜릿을 먹다\n";
	}

};

int main()
{
	//Snack* snack = new Candy("딸기"); 업캐스팅
	//Candy* candy = (Candy*)snackBasket[0]; 다운캐스팅


	Snack* Basket[2] = { new Candy("딸기"), new Chocolate("별") };

	for (int i = 0; i < 2; i++)
	{
		Basket[i]->buy();
		Basket[i]->eat();
	}

	delete Basket;
  
}

