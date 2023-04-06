#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

// -1/ -2 / -3/ -4  -> 2로 나눈 몫을 빼준 위치에 1을 놓으면 중앙에 1 위치 가능 
//3 = 2/ 5 = 3/ 7 = 4/ 9 = 5 

int main(){
    int num;
    int x, y;
    int mbj[num][num];


    while(1){
        cout << "홀수를 입력해주세요 : ";
        cin >> num;
        if(num%2 == 0){
            cout << "잘못된 수 입니다! 홀수를 입력해주세요!!" << endl;
        }
        else if(num%2 != 0){
            for(int i = 0; i < num * num; i++){

            }
        }
    }
    

}