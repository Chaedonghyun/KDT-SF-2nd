// c++ 2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>



int main()
{
    /*for(int i=0;i<5; i++){
        std::cout << "*";
    }*/
    
    //int order;
   /* while (1) {
        std::cin >> order;
        if (order==1)
        {
            std::cout << "아ㅔ리카노";
        }
        else if (order == 2) {
            std::cout << "라떼";
        }
        else if (order == 3) {
            std::cout << "종료";
            break;
        }
        else {
            std::cout << "1~3";
        }
    }*/

 /*   int i = 0;
    do {
        std::cout << "안녕하세요";
        std::cout << "\n";
        i++;
    } while (i < 5);*/
   /* std::cout << "1~9단 출력";
    std::cout << "\n";
    for (int i = 1; i <= 9; i++) {
        std::cout << i << "단";
        std::cout << "\n";
        for (int j = 1; j <= 9; j++) {
            std::cout << i << "*" << j << "=" << i * j;
            std::cout << "\n";
        }
        std::cout << "\n";
    }*/

    /*int num1;
    std::cout << "1부터 n까지의 합구하기";
    std::cout << "\n";
    std::cout << "숫자를 입력하세요:";
    std::cin >> num1;

    std::cout << "1부터" << num1 << "까지의 합은:";

    for (int i=1; i<=num1  ; i++)
    {
        
    }

    std::cout << num1;;*/

    int i = 1;
    int j = 1;
    while (i<=9)
    {
        std::cout << i << "단";
        while(j<=9) {
            std::cout << i << "*" << j << "=" << i * j;
            std::cout << "\n";
            j++;
            
        }
        i++;
        
        std::cout << "\n";
    }


    test_1();
    //인자 5, "str"
    test_2(5, "str");

    int num = 5;
    std::string str = "str";
    
    test_3(num, str);

    test_4(); //함수가 리턴값이 되고 끝난다.
}


//함수는 매개변수와 리턴깂의 여부에 따라 나늰다.

//1.매개변수x return x
void test_1() {

}
//2.매개변수 있고 return x
void test_2(int num1, std::string str) {
    std::cout << "test_2호출";
}

//.3매개변수가 있고 return 있는경우
std::string test_3(int num, std::string str) {
    
    //함수의 본문

    return "test";
}

//4.매개변수 없고 return있는경우
int test_4() {

    return 5;
}


