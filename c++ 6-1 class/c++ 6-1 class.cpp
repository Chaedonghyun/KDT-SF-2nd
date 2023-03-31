
#include <iostream>
#include<string>
#include<vector>
using namespace std;

//class Cat
//{
//	string name;
//	int age;
//
//public:
//	Cat(string name, int age) {
//		this->name = name;
//		this->age = age;
//		cout << name <<"고양이가 태어났다\n";
//	}
//	string getName() {
//		return name;
//	}
//
//	void setName(string name) {
//		this-> name=name;
//	}
//
//	void mew() {
//		cout << "냐옹\n";
//	}
//
//};
//class Rectangel
//{
//	int width;
//	int height;
//
//public:
//	Rectangel(int x, int y) {
//		this->width = x;
//		this->height =y;
//		
//	}
//
//	int sum() {
//		return width * height;
//	}
//
//};

class Rectangel
{
	int width, height;


public:
	/*Rectangel() {
		this->width = width;
		this->height = height;
	}*/

	int getWidth(){
		return width;
	}

	int getheight() {
		return height;
	}

	void setwidth(int width) {
		this->width = width;
	}

	void setheight(int height) {
		this->height = height;
	}

	int sum() {

		return width * height;

	}
};




int main()

{
	int width, height;
    
	
	cout << "두수를 입력하세요:";
	cin >> width;
	cin >> height;
	
	Rectangel r2;

	r2.setwidth(width);
	r2.setheight(height);
	
	cout << r2.sum();
    
	

	/*Cat cat1("나비",5);

	cout << cat1.getName();
	cat1.setName("도라에몽");
	cout << cat1.getName();*/
}

