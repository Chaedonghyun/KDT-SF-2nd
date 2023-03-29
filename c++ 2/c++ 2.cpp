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

//매개변수는 함수의 외부에서 사용되는 값을 함수에 내부에 필요할때
//리턴값은 함수의 내부에서 사용되는 값을 외부에서 필요할때

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
