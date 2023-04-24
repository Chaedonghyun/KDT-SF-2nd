
#include <iostream>
#include<string>
#include<vector>
using namespace std;


class Rectangel
{
	int width, height;
	
public:
	Rectangel() {
		
	}

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
	
	Rectangel r2=Rectangel();

	r2.setwidth(width);
	r2.setheight(height);
	
	cout << r2.sum();
    
	
}

