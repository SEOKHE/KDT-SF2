#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    std::srand(time(NULL));
    int gnum = 0; // game number
    int pnum; // cin, player's num
    int cnum; // cpu's num
    bool turn = false; // turn false = player, true = cpu

    while(gnum < 30){ 

        if(turn == false){
            cout << "숫자를 입력해주세요 : ";
            cin >> pnum;
            cout << endl;
            if(pnum == 0 || pnum > 3){
                cout << "1~3 사이의 숫자를 입력해주세요" << endl;
            }
            else if(pnum > 0 && pnum < 4 && turn == false){
                // if(turn == false){
                    for(int i = 0; i < pnum; i++){
                        gnum++;
                        cout << gnum << endl;
                    }
                    cout << endl;
                    turn = true;
                // }
                if(turn == true){
                    cout << "컴퓨터가 입력한 숫자입니다!" << endl;
                    int rnum = std::rand();  //random num
                    cnum = rnum % 3 + 1;
                    for(int j = 0; j < cnum; j++){
                        gnum++;
                        cout << gnum << endl;
                    }
                    cout << endl;
                    turn = false;
                }
            
                if(gnum >= 31){
                break;
                }
            }
        } 
    }

    if(gnum >= 31){
        cout << "게임이 종료되었습니다" << endl;
        if(turn == false && gnum > 30){
            cout << "player 승!" << endl;
        }
        else if(turn == true && gnum > 30){
            cout << "cpu 승!" << endl;
        }
    }
}