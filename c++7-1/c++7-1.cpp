#include<string>
#include<vector>
#include <iostream>
#include<fstream>
using  std::cout;
using  std::cin;
using  std::string;

//private 자기 자신(해당 클래스 내)에서만 접근 가능
//protected 라는 자료형:자기 자신과, 자식 클래스에서 접근 가능
//public 모든곳에서 접근 가능
class Person { //부모클래스, 슈퍼클래스, 상위 클래스
    //필드,메소드,생성자
protected:
       string name;
       int age;
public: 
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    //Person(int age) {  }; //기본 생성자 자동으로 생산

    void sleep() {
        cout << name << age<< " ";
        cout << "잠자기";
    }
};

class Student:public Person { //자식클래스, 서브클래스,하위클래스  //public:부모 클래스에서 상속받은 맴버들의 접근제어자의 한계를 지정한다.
    string stu_id;
    public:
    //Studetn(){ }
    //Student(){Person(); }
        Student(string name, int age,string stu_id) :Person(name,age) {
            this->name = name;
            this->age = age;
            //부모클래스의 생성자를 선택할 예정
            this->stu_id = stu_id;

        }
    void study() {
        cout << name << age << stu_id << " ";
        cout << "공부하기";
    }

};
//자식클래스(기본생성자가 없을경우) 생성자는 부모의 기본 생성자를 호출함


int main()
{
    string name;
    int age=0;
    string stu_id;
    Person p = Person(name,55);//p는 객체
    
    Student s = Student("ehdgus", 18, "ehd");

    

    s.study();
    p.sleep();

    
    
}
