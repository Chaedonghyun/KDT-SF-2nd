#include <iostream>
using std::cout;
using std::cin;
using std::string;



//class Person {
//protected:
//    int age;
//    string name;
//public:
//    Person(int age,string name) {
//        this->age = age;
//        this->name = name;
//    }
//    void sleep() {
//        cout << "sleep"<<std::endl;
//    }
//
//    int override_test(int num) {
//        return num;
//    }
//
//};

//class Student :public Person {
//    string stu_id;
//public:
//    Student(int age,string name,string stu_id):Person(age,name) {
//        this->stu_id = stu_id;
//   }
//
//    void study() {
//        cout << "study" << std::endl;
//    }
//    //메소드 오버라이딩 ->부모객체에서 상속 받은 메소드를 다시 정의 하는거 
//    void sleep() {
//        cout << "10" << std::endl;
//    }//함수(메소드)의 원형이 같다, 함수이름,매개변수 종류,개수까지 같다
//
//    int override_test(int num) {
//        
//        return num+age;
//    }
//    void test() {
//        cout << "테스트 함수";
//    }
//    int test(int a) {
//        return a;
//    }
//};

class Student {
protected:
    string name;
    string school;
    int age;
    int s_num;

public:
    Student(string name, string school, int age, int s_num) {
        this->name = name;
        this->school = school;
        this->age = age;
        this->s_num = s_num;
    }

    void lunch() {
        cout << "점심은 학식";
    }
};

class Kim :public Student
{
    string menu;

public:
    Kim(string name, string school, int age, int s_num ,string menu) :Student(name, school, age, s_num) {
        this->menu = menu;
    }


    void lunch() {
        cout << name << " " << school << " " << age << " " << s_num << "점심은:" << menu<<"\n";
    }


};

class Baek :public Student
{
    string menu;
public:
    Baek(string name, string school, int age, int s_num ,string menu) :Student(name, school, age, s_num) {
        this->menu = menu;
    }

    void lunch() {
        cout << name<<" "<<school<<" "<<age<<" "<<s_num << "점심은:" << menu;
    }


};


int main()
{
   
    /*Student s = Student(12,"asd","asd3");
    cout<<s.override_test(2);*/

    Kim k = Kim("asd", "highschool", 35, 19,"한식");
    Baek b = Baek("asd", "middle", 45, 25, "일식");

    k.lunch();
    b.lunch();

}

