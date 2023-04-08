#include <iostream>
#include<vector>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;


int main()
{
    
      int num;
      cout << "홀수를 입력해 주세요:";
      cin >> num;
    
      int** arr = new int* [num];

      for (int i = 0; i < num; i++) //값을 받아 만들 2차원 배열
      {
          arr[i] = new int[num];
      }

      int x=0, y=num/2,k, nmg; //x=시작인덱스 y=1을 넣을 위치 k는 값 nmg는 위치 조절 기준

      for ( k = 1; k <= num*num; k++)
      {
          arr[x][y] = k;

          nmg = k % num;    //행 열을 결정하는 변수 
          if (nmg==0)
          {
              x++;
          }
          else {
              if (--x < 0) {
                  x = num - 1;
              }
              if(++y==num)
              {
                  y = 0;
              }
          }

      }

      for (int i = 0; i < num; i++)
      {
          for (int j = 0; j < num; j++){
              cout<< arr[i][j]<<" ";
          }
          cout<< endl;
      }
      
      
     
    
    
}

