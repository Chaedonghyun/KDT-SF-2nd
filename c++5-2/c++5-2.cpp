#include <iostream>
using namespace std;
//struct Position
//{
//    int x = 0;
//    int y = 0;
//};

struct Rectangle
{
    int width;
    int height;

    int sum() {
        return width * height;
    }

};


int main()
{
   /* Position p;
    p.x = 3;
    p.y = 5;

    p = { 10,4 };

    cout << "x좌표는: " " " << p.x << "y좌표는:" << p.y << endl;*/

    Rectangle r;
    int w, h;

    cout << "구조체\n";
    cout << "가로,세로 길이를 입력하세요"; 
    cin >> r.width;
    cin >> r.height;

    /*r.width = w;
    r.height = h;*/

    cout << "r" << r.width << " " << r.height;

    cout << "넓이는:" << r.sum();
    
}

