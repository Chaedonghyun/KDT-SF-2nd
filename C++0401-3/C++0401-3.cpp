
#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Snack
{protected:
	string name;
	string brand;
	int price;
public:
	Snack(string name, string brand, int price) {
		this->name = name;
		this->brand = brand;
		this->price = price;
	}

	virtual void buy() {
		//cout << flavor << "맛 " << name << brand << price << "사탕을 사다";
	}
	
	virtual void eat() {

	}

};

class Candy :public Snack {
	string flavor;
public:
	Candy(string flavor, string name,string brand, int price) :Snack(name, brand, price) {
		this->flavor = flavor;
		this->name = name;
		this->brand = brand;
		this->price = price;
	}

	void buy() {
		cout << flavor << "맛 " << name << brand << price << "사탕을 사다";
	}

	void eat() {
		cout << flavor << "맛 " << name << brand << price << "사탕을 먹다";
	}};

class Chocolate :public Snack {
	string shape;
public:
	Chocolate(string shape, string name, string brand, int price) :Snack(name, brand, price) {
		this->shape = shape;
		this->name = name;
		this->brand = brand;
		this->price = price;
	}

	void buy() {
		cout << shape << "모양 " << name << brand << price << "초콜릿을 사다";
	}

	void eat() {
		cout << shape << "모양 " << name << brand << price << "초콜릿을 먹다";
	}

};


int main()
{
	string flavor;
	string name;
	string brand;
	int price=0;
	string shape;
	Snack* arr[2] = { new Candy("딸기","춥파","롯데",500),new Candy("초코","춥파","해테",800)};
	
	for (int i = 0; i < 2; i++)
	{
		arr[i]->buy();
		arr[i]->eat();
	}

}

