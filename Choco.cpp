#include "Choco.h"

using namespace std;

    std::string shape;
    std::string name;

    Choco::Choco(string shape, string name) : Snack(name){
        this-> shape = shape;
        this-> name = name;
    }

    void setInfo(){
         cout << "이름을 입력해주세요 : ";
         cin >> name;
         cout << endl;
         cout << shape << "모양 초콜릿 입니다" << endl;
    }

    void getInfo(){
        cout << shape << " 모양 초콜릿 입니다." << endl;
    }