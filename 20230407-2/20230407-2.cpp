#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Operate {
protected:
    int num;
    int num2;
    static int result;
public:
    Operate(int num,int num2 ) {
        this->num = num;
        this->num2 = num2;
        
    }

    virtual int calculate() {
        return 0;
    }
    
    static int get_Result() {
        return result;
    }

};

class Add :public Operate
{
public:
    Add(int num,int num2) :Operate(num,num2) {
        this->num = num;
        this->num2 = num2;
        
    }
    int calculate() {
        cout <<"결과:" << num + num2 << endl;
        return Operate::result=num+num2;
    }

};

class Minus :public Operate
{
public:
    Minus(int num, int num2) :Operate(num, num2) {
        this->num = num;
        this->num2 = num2;
    }

    int calculate() {
        cout << "결과:" << num - num2 << endl;
        return Operate::result = num - num2;
    }
};

class Multiply :public Operate
{
public:
    Multiply(int num, int num2) :Operate(num, num2) {
        this->num = num;
        this->num2 = num2;
    }

    int  calculate() {
        cout << "결과:" << num * num2 << endl;
        return Operate::result = num * num2;
    }
};

class Divide :public Operate
{
public:
    Divide(int num, int num2) :Operate(num,num2){
        this->num=num;
        this->num2=num2;
    }

    int calculate() {
        cout << "결과:" << (float)num / (float)num2 << endl;
        return Operate::result = (float)num / (float)num2;
    }

};
int Operate::result = 0;


int main()

{   int b = true;
    while (true)
    {
        int result;
        int num2;
        int num= Operate::get_Result();
        string s;
        string chose;
        
        
        if (b==true)
        {
            cout << "숫자를 입력해주세요.:" << endl;
            cin >> num;
            cout << "연산자를 입력해주세요:" << endl;
            cin >> s;
            cout << "숫자를 입력해주세요.:" << endl;
            cin >> num2;
        }
        else
        {
            cout << "연산자를 입력해주세요:" << endl;
            cin >> s;
            cout << "숫자를 입력해주세요.:" << endl;
            cin >> num2;
        }
        cout << "----------------------------------" << endl;

        if (s == "+")
        {
            Operate* c = new Add(num, num2);
            c->calculate();
            
        }
        else if (s == "-") {
            Operate* c = new Minus(num, num2);
            c->calculate();

        }
        else if (s == "*")
        {
            Operate* c = new Multiply(num, num2);
            c->calculate();
        }
        else if (s == "/") {
            Operate* c = new Divide(num, num2);
            c->calculate();
        }
        else
        {
            cout << "잘못 입력하셨습니다";

        }

        cout << "연산을 계속 진행하시겠습니까? (Y:계속, AC:초기화, EXIT:종료)";
        cin >> chose;

        if (chose == "Y")
        {
            b = false;
            result=Operate::get_Result();
        }
        else if (chose == "AC") {
            b = true;
            num = 0;
        }
        else if (chose == "EXIT") {
            cout << "종료합니다";
            break;
        }
        
    }
        
    
    
}

