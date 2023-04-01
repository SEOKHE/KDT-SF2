#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

//실습2
class Snack{
protected:
    int price = 300;
    string name;
    string co_name = "롯데제과";
public:
    Snack(string name){
        this->name = name;
    }
    
    virtual void getInfo(){
        cout << name << price << "원 " << co_name << " 제품 입니다" << endl;
    }
};

class Candy : public Snack{
    string taste;
    string name;
public:
    Candy(string taste, string name) : Snack(name){
        this->taste = taste;
        this->name = name;
    }

    void getInfo(){
        cout << taste  << " " << name << " 입니다" << endl;
    }
};

class Chocolate : public Snack{
    string shape;
    string name;
public:
    Chocolate(string shape, string name) : Snack(name){
        this->shape = shape;
        this->name = name;
    }

    void getInfo(){
        cout << shape << " " << name << " 입니다" << endl;
    }
};

int main(){
    Candy c1 = Candy("초코맛", "츄파츕스");
    Candy c2 = Candy("딸기맛", "별사탕");
    Chocolate cho1 = Chocolate("막대 모양", "가나 초콜릿");
    Chocolate cho2 = Chocolate("동전 모양", "동전 초콜릿");

    // Snack snackBasket[4] = {c1, c2, cho1, cho2}; 
    Snack* snackBasket[4] = {&c1, &c2, &cho1, &cho2}; 

    // cout << "업 캐스팅" << endl << endl;

    for(int i = 0; i < 4; i++){
        snackBasket[i]->getInfo();
    }

    // cout << endl << "다운 캐스팅" << endl << endl;

    // // Candy cand = Candy("초코맛", "츄파츕스");
    // Candy* cand = (Candy*)snackBasket[0];
    // cand->getInfo();
    
    // // Chocolate choco = Chocolate("막대 모양", "가나 초콜릿");
    // Chocolate* choco = (Chocolate*)snackBasket[2];
    // choco->getInfo();

}