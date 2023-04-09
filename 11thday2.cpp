#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// int num; //함수로 count 역할을 대체해보려는 시도 중이었음

// int count(int num){
    
//     bool turn = false;
//     int gnum = 0;
//     for(int i = 0; i < num; i++){
//         cout << ++gnum << endl; //gnum ++;과 같은 역할
//     }
//     cout << endl;
//     if(turn == true){
//         turn = false;
//     }
//     else turn = true;

//     return gnum;
// }

int main(){
    std::srand(time(NULL));
    int gnum = 0; // game number
    int pnum; // cin, player's num
    int cnum; // cpu's num
    bool turn = false; // turn false = player, true = cpu

    while(gnum < 31){ 

        if(turn == false){
            cout << "숫자를 입력해주세요 : ";
            cin >> pnum;
            cout << endl;
            if(pnum == 0 || pnum > 3 || pnum < 0){
                cout << "1~3 사이의 숫자를 입력해주세요" << endl;
            }
            else{
                // gnum = count(pnum);
                // cout << endl;
                for(int i = 0; i < pnum; i++){
                    cout << ++gnum << endl; //gnum ++;과 같은 역할
                }
                cout << endl;
                turn = true;
            }
        }

        else if(turn == true){
            cout << "컴퓨터가 입력한 숫자입니다!" << endl;
            int rnum = std::rand();  //random num
            cnum = rnum % 3 + 1;
            // gnum = count(cnum);
            // cout << endl;
            for(int j = 0; j < cnum; j++){
                cout << ++gnum << endl;
            }
            cout << endl;
            turn = false;
            }        
    }

    if(gnum >= 31){
        cout << "게임이 종료되었습니다" << endl;
        if(turn == false){
            cout << "player 승!" << endl;
        }
        else if(turn == true){
            cout << "cpu 승!" << endl;
        }
    }
}