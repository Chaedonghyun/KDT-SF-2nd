// day 4-1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>// stl
using std::cout;
using std::string;
using std::cin;
using std::vector;


int main()
{
    //std::string str = "aa";
    //std::vector<int> v(5); //선언 크기가 5인 배열 모든 값 0으로 초기화
    //std::vector<int> v(4,1); 크기가 4인 배열을 만듬, 모든값을 1로 초기화
    //std::vector<std::string> a;

    //std::vector<std::string> v1(5, "aa");

    //v.assign(5, 2); 크기가 5인 배열을 만듬 ,모든 값을 2호 초기화

    //std::vector<int> v;
    //v.assign(5, 2);
    //
    ////v.size() 백테 v의 사이즈를 반환
    ////for (int i = 0; i < v.size(); i++)
    ////{
    ////    std::cout << v[i] <<" "; //오류를 out of range 발생해도 제대로 잡아주지 않는다
    ////    std::cout << v.at(i) << "\n"; //out of range발생 하면 오류를 잡아준다.
    ////}

    //v.push_back(6); //{2,2,2,2,2,6} vector 의 마지막에 원소를 푸쉬함
    //v.push_back(7); //{2,2,2,2,2,6,7}
    //v.pop_back(); //꺼낸다. 제일 마지막 원소를 꺼낸다 {2,2,2,2,2,6}
    //v.begin(); //vector의 시작 주소를 반환함, 인덱스 0
    //v.insert(v.begin(),5);// (자리/원소){5,2,2,2,2,2,6}
    //v.erase(v.begin(),v.begin()+3); //{2,2,2,6}

    //for (int i = 0; i < v.size(); i++)
    //{
    //    std::cout << v[i] << " "; //오류를 out of range 발생해도 제대로 잡아주지 않는다
    //    //std::cout << v.at(i) << "\n"; //out of range발생 하면 오류를 잡아준다.
    //}

    //v.clear();

    //std::vector<std::vector<int>>v2 = {{1,2},{3,4}};
    //for ( int i = 0; i < v2.size(); i++)
    //{
    //    for (int j = 0; j < v2.at(i).size(); j++) {
    //        std::cout << v2.at(i).at(j) << " ";
    //    }
    //    std::cout << std::endl;
    //}

    
    int x;
    int y;
    int sum = 0;
   
    std::cout << "x를 입력하세요:\n";
    std::cin >> x ;
    std::cout << "y를 입력하세요:\n";
    std::cin >> y;
    
     if (x<0 || y<0)
    {
        std::cout << "x,y 양수를 입력하세요.\n";
    }
    
    vector<vector<int>>v3(x,vector<int>(y));
     
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <y; j++) {
            sum += v3[i][j]=1;
            std::cout << sum << " ";
        }
        std::cout << "\n";
    }

    /*int score=1;
    int sum=0 ;
    
    std::cout << "사용자가 입력한 숫자 더하기\n";

    std::vector<int> v4;
        while (score!=0)
        {
            std::cout << "숫자를 입력하세요(0:exit):";
            std::cin >> score;
            v4.push_back(score);
            sum += score;
            
        }
    
    std::cout << "총 점:"<<sum;*/

    
}
