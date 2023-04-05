#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    std::srand(time(NULL));
    int num; // cin
    int gnum = 0; // game number
    int pnum; // player's num
    int cnum; // cpu's num
    int rnum = std::rand(); //random num
    bool turn = false; // turn false = player, true = cpu

    while(gnum < 31){ 

        if(turn == false){
            cout << "숫자를 입력해주세요 : ";
            cin >> num;
            cout << endl;
        }
        
        if(turn == false && num < 4){
            for(int i = 0; i < num; i++){
                gnum++;
                cout << gnum << endl;
            }
            cout << endl;
            turn = true;
        }
        else if(turn == true){
            cout << "컴퓨터가 입력한 숫자입니다!" << endl;
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