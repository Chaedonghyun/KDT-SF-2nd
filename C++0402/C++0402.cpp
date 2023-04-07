#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

//class Person {
//
//public:
//	static int static_var;
//	string name;
//	void sleep() {
//		name = "123";
//	}
//	static void static_method() {
//		//name = "aaa";   오류:name은 객체가 되어야 사용가능 일반 필드이기 때문에 접근 x
//		static_var=10; //  
//		cout << "static";
//	}
//};

//int Person::static_var = 0;
class Person
{
	static int cnt;
	string name;
public:
	Person(string name) {
		this->name = name;
	}

	static int getCnt() {
		return cnt;
	}
	void plusCnt() {
		cnt++;
	}


};
int Person::cnt = 0;
int main()
{
	//Person::static_var = 5; //객체선언 안하고 사용가능
	//cout << Person::static_var;
	//Person::static_method();
	//
	//Person p;
	//p.name = "홍길동";
 //   //p.static_var = 2;
	//cout << p.static_var << " ";
	//Person::static_method();
	//
	//Person p2;
	//p2.name = "성춘향";
	//p2.static_var = 5;


	//cout << p.name << " " << p2.name;
	//cout << p.static_var << " " << p2.static_var;

	Person p("aaa");
	Person p2("bbb");

	cout << "score" << Person::getCnt() << endl;
}
