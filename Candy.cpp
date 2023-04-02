#include "Candy.h"

    using namespace std;

    string flavor;
    string name;

    Candy::Candy(string flavor, string name) : Snack(name){
        this-> flavor = flavor;
        this->name = name;
    }

    void setInfo(){
         cout << "맛을 입력해주세요 : ";
         cin >> flavor;
         cout << endl;
         cout << flavor << "맛 사탕 입니다" << endl;
    }

    void getInfo(){
        cout << flavor << " 맛 사탕입니다." << endl;
    }
