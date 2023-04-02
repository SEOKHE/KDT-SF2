#include <iostream>
#include <vector>
#include "Snack.h"
#include "Candy.h"
#include "Choco.h"

using namespace std;


//실습1
// class Snack{
//     static int cnt;

// protected:
//     int price; 
//     string name;
//     string co_name;
//     string flavor;
//     string shape;

// public:
//     Snack(string name){
//         this->name = name;
//         makeCnt();

//     }
    
//     void setInfo(){
//          cout << "이름을 입력해주세요 : ";
//          cin >> name;
//          cout << endl;
//     }
//     virtual void getInfo(){
//         cout << name << " 입니다." << endl;
//     }

//     static int getCnt(){
//         return cnt;
//     }

//     void makeCnt(){
//         cnt++;
//     }
    
// };

// int Snack::cnt = 0; // 스태틱 멤버의 초기화 구조 : 자료형 클래스명::멤버명 = 초기화 값;

// class Candy : public Snack{
//     string flavor;
//     string name;
// public:
//     Candy(string flavor, string name) : Snack(name){
//         this-> flavor = flavor;
//         this->name = name;
//     }

//     void setInfo(){
//          cout << "맛을 입력해주세요 : ";
//          cin >> flavor;
//          cout << endl;
//          cout << flavor << "맛 사탕 입니다" << endl;
//     }

//     void getInfo(){
//         cout << flavor << " 맛 사탕입니다." << endl;
//     }

// };

// class Choco :public Snack{
//     string shape;
//     string name;
// public:
//     Choco(string shape, string name) : Snack(name){
//         this-> shape = shape;
//         this-> name = name;
//     }

//     void setInfo(){
//          cout << "이름을 입력해주세요 : ";
//          cin >> name;
//          cout << endl;
//          cout << shape << "모양 초콜릿 입니다" << endl;
//     }

//     void getInfo(){
//         cout << shape << " 모양 초콜릿 입니다." << endl;
//     }
// };

//실습2 <<미완성>>
//아이디어: 벡터 배열에 입력받은 이름을 저장(<- 스태틱 멤버로 설정)한다.
//배열의 제일 마지막 원소와 가장 마지막에 입력받은 이름을 비교해서 틀리면 반복문 탈출! 

// class Namegame{
//     static string name_s;
// protected: 
//     string name;
// public: 
//     Namegame(string name){
//         this->name = name;
//     }
// };

// string Namegame::name_s = " ";

// class Pass : public Namegame{
//     static int cnum;

// public:
//     Pass(string name) : Namegame(name){
//         this-> name = name;
//         cnum++;
//     }
//     static int getCnum(){
//         return cnum;
//     }
//     void getName(){
//         cout << name;
//     }

//     void count(){
//         cnum++;
//     }

//     void stop(){
//         cout << "stop!! 총 " << cnum << " 명까지 성공했습니다. 게임을 종료하겠습니다." << endl;
//     }

// };

// int Pass::cnum = 0;

// class stop : public namegame{



// };

int Snack::cnt = 0;

int main(){

//실습1
    // int num;
    // string name;
    // string flavor;
    // string shape;
    // Snack::getCnt();
    // vector<Snack*> v;

    // while(1){
    //     cout << "과자 바구니에 추가할 간식을 고르시오 (1: 사탕 2: 초콜릿 0: 종료) :" << endl;
    //     cin >> num;
    //     if(num == 0){
    //         break;
    //     }
    //     else if(num == 1){
    //         cout << "맛을 입력해주세요: ";
    //         cin >> flavor;
    //         v.push_back(new Candy(flavor, name));
    //     }
    //      else if(num == 2){
    //         cout << "모양을 입력해주세요: ";
    //         cin >> shape;
    //         v.push_back(new Choco(shape, name));
    //     }
    //     else cout << "0~2 사이의 숫자를 입력하세요!" << endl;
    // }
    // cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::getCnt() << "개 입니다" << endl;

    // for(int i = 0; i < Snack::getCnt(); i++){
    //     v[i]->getInfo();
    // }

    // for(int i = 0; i < 4; i++){
    //     snackBasket[i]->getInfo();
    // }

//실습2 <<미완성>>
    // string name;

    // vector<Pass*> vN;

    // while(1){
    //     cout << "이름 쌓기! 이름 쌓기!! 이름!!! : ";
    //     cin >> name;
    //     cout << endl;

    //     if(name = vN()->back()){ //이름이 같지 않을 때
    //         vN.push_back(new Pass(name));
    //         for(int i = 0; i < Pass::getCnum(); i++){
    //             vN[i]->getName();
    //         }
    //     }
    //     else if(){  //이름이 같을 때
    //         break;
    //     }
    // }
    // cout << Pass::stop() ;



//실습3

 int num;
    string name;
    string flavor;
    string shape;
    Snack::getCnt();
    vector<Snack*> v;

    while(1){
        cout << "과자 바구니에 추가할 간식을 고르시오 (1: 사탕 2: 초콜릿 0: 종료) :" << endl;
        cin >> num;
        if(num == 0){
            break;
        }
        else if(num == 1){
            cout << "맛을 입력해주세요: ";
            cin >> flavor;
            v.push_back(new Candy(flavor, name));
        }
         else if(num == 2){
            cout << "모양을 입력해주세요: ";
            cin >> shape;
            v.push_back(new Choco(shape, name));
        }
        else cout << "0~2 사이의 숫자를 입력하세요!" << endl;
    }
    cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::getCnt() << "개 입니다" << endl;

    for(int i = 0; i < Snack::getCnt(); i++){
        v[i]->getInfo();
    }
}