// c++4-2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//namespace test {
//    int num = 1;
//    int sum(int n, int n2) {
//        return 0;
//    }
//}

//using std::cout; //cout만 접근을 풀어주겠다
//using namespace std; //모든 std접근 제한
//using namespace test;

namespace seoul {
    std::string num = "02";
    std::string mark = "63빌딩";
    
}

namespace busan {
    std::string  num = "07";
    std::string mark = "해운대";

}

using namespace seoul;

int main()
{
    std::cout << "서울 지역 번호와 랜드 마크 출력: " << " " << seoul::num<<" " << seoul::mark << "\n";
    std::cout << "부산 지역 번호와 랜드 마크 출력: " << " " << busan::num << " "<< busan::mark << "\n";
    std::cout << "서울 지역 번호와 랜드 마크 출력: " << " " << num << " " << mark << "\n";
    
}


