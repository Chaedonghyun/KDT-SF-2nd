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
	
	virtual void buy(){
		cout  <<name << price << label << "사탕을 사다\n";
	}

	virtual void eat() {
		cout << name << price << label << "사탕을 먹다\n";
	}

};

class Candy: public Snack {
	
	string flavor;
public:
	Candy(string flavor) :Snack(500, "춥파츕스", "롯데제과") {
		this->flavor = flavor;
	}

	void buy() {
		cout << flavor<<name<<price<<label<<"사탕을 사다\n";
	}

	void eat() {
		cout << flavor <<name << price << label << "사탕을 먹다\n";
	}

};

class Chocolate :public Snack {
	string share;
public:
	Chocolate(string share) :Snack(800, "가나", "롯데제과") {
		this->share = share;
		
	}
	
	void buy() {
		cout <<name << price << label << "초콜릿을 사다\n";
	}

	void eat() {
		cout <<name << price << label << "초콜릿을 먹다\n";
	}

};

//class Person
//{
//public:
//	Person() { cout << "생성자 입니다."; };
//	//~Person() { cout << "소멸자 입니다."; };//소멸자
//	//가상함수:부모클래스에서 정의될 예정
//	//자식 함수가 재정의(오버라이딩)할 것이라고 기대하는 함수
//	//순수 가상함수:구현이 안되어 있는 함수(=0)
//	//virtual void sleep() = 0;
//	virtual void sleep() { //가상 함수:동적 바인딩을 하기 위해서
//		cout << "sleep";
//	}
//private:
//
//};
//
//class Student :public Person {
//
//
//};


int main()
{
	//Person p = Person();  //Person에 추상메서드가 있어서 객채화를 할 수 없다. 
	/*Student s = Student();
	s.eat();
	s.sleep();*/

	//Shape s = Rect(5);
	//cout << s.getLineNum() << endl; //shape에 있는 public 맴버에만 접근 가능함 Rect에 있는 맴버에는 접근 불가능

	
	/*Snack* candy1=new Candy("딸기맛");
	candy1->buy();
	candy1->eat();*/

	

	Snack* snackBasket[4] = { new Candy("딸기"),new Candy("초코"),new Chocolate("둥근"),new Chocolate("네모난") };

	

	for (int i = 0; i <4; i++)
	{
		snackBasket[i]->buy();
		snackBasket[i]->eat();
	}

  
	
	//Candy* candy = (Candy*)snackBasket[0];
	//candy->buy();
  //delete snackBasket;
	//클래스는 필드, 메서드, 생성자, 소멸자로 구성됨
	//소멸자:객체가 소멸될 때 자동으로 실행되는 메서도

	//Person p; //정적 메모리 스택영역에  저장됨 해제를 명시적으로 할 필요 x 자동으로 해제 main함수가 닫힐 때

	//Person* p2 = new Person();//동적 메모리 힙영역에 저장 해제를 명식적으로 할필요가 있다 delete

}





