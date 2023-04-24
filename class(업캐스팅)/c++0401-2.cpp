#include <iostream>
using std::cout;
using std::cin;
using std::string;

class Person {
public:
    void test() {
        cout << "test";
    }
};

class Student:public Person {
public:
    void test_stu() {
        cout << "test2";
    }

};
int main()
{
    Student s;
    Person* p2 =  &s; //업캐스팅:부모 클래스의 포인터로 자식 클래스의 인스턴스에 접근
    //Student* st1 = (Student*)p2;
    p2->test();

    Person * p3 = new Student(); //업캐스팅
    Student* stu = (Student*)p3; //다운캐스팅:업캐스팅 한것을 다시 원래대로 되돌리는것
    //stu->test();
    //stu->test_stu();
    
    delete p3;
    
}

