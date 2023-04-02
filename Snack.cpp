#include "Snack.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

    static int cnt;

    int price; 
    string name;
    string co_name;
    string flavor;
    string shape;

    Snack::Snack(string name){
        this->name = name;
        makeCnt();
    }
    
    void setInfo(){
         cout << "이름을 입력해주세요 : ";
         cin >> name;
         cout << endl;
    }
    void getInfo(){
        cout << name << " 입니다." << endl;
    }

    static int getCnt(){
        return cnt;
    }

    void makeCnt(){
        cnt++;
    }