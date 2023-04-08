#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Character{

    string name;
    int item_num;
    int item_num2;
    int hp = 100;

    public:
    Character(string name){
        this->name = name;
        item_num = 0;
    }
    string getName(){
        return name;
    }

    string getNamechange(){
        return name;
    }

    void setName(string name){
        this->name = name;
    }

    void setNamechange(string name){
        this->name = name;
        cout <<"이름이 변경 되었습니다 \n";
        cout << "현재 이름은 " << name << " 입니다.";
        cout << endl;
    }

    void getWeapon(){
        cout << "무기를 획득했습니다. " << endl;
        cout << "현재 소유 중인 무기의 개수는 " << item_num << " 입니다." << endl;
    }

    void setItem_numA(){
        item_num++;
        cout <<"소유 중인 아이템 개수가 변경 되었습니다! \n";
        cout << "현재 소유 중인 무기의 개수는 " << item_num << " 입니다.";
        cout << endl;
    }
    void setItem_numD(){
        if(item_num > 0){
            item_num--;
            cout <<"소유 중인 무기 개수가 변경 되었습니다! \n";
            cout << "현재 소유 중인 무기 개수는 " << item_num << " 입니다.";
            cout << endl;
        }
        else cout << "현재 소유 중인 무기가 없습니다! \n";
    }

    void status(){
        cout << "이름: " << name << endl;
        cout << "무기 개수: " << item_num << endl;
    }

};

class Weapon{
protected:
    int hp;
    int attack_stat, attack_num;

public:
    int attack(){
        int deal = hp - attack_stat * attack_num;
        return deal;
    }
};

class Knife : public Weapon{
    int attack_stat = 5;
    int attack_num = 3;
    int rnum = std::rand();
    int dnum= rnum %3 +1;
public:
    void attacking(){
        for(int i = 0; i < dnum; i++){
            if(dnum == 1){
                cout << "던지기" << endl;
                cout << "슈웅" << endl;
                cout << "콱..." << endl;
                cout << "제대로 꽂아넣은 듯하다..." << endl;
                cout << "hp -5" << endl;
            }
            else if(dnum == 2){
                cout << "던지기" << endl;
                cout << "슈웅" << endl;
                cout << "콱..." << endl;
                cout << "제대로 꽂아넣은 듯하다..." << endl;
                cout << "hp -5" << endl << endl;
                cout << "슈웅" << endl;
                cout << "퍼벅..." << endl;
                cout << "정확히 같은 자리에 2자루를 꽂아 넣었다..." << endl;
                cout << "hp -5" << endl;
            }
            else if(dnum == 3){
                cout << "던지기" << endl;
                cout << "슈웅" << endl;
                cout << "콱..." << endl;
                cout << "제대로 꽂아넣은 듯하다..." << endl;
                cout << "hp -5" << endl << endl;
                cout << "슈웅" << endl;
                cout << "퍼벅..." << endl;
                cout << "정확히 같은 자리에 2자루를 꽂아 넣었다..." << endl;
                cout << "hp -5" << endl << endl;
                cout << "아직 한 자루 남았다..." << endl;
                cout << "쒜애애액!" << endl;
                cout << "푹!" << endl;
                cout << "이것이 삼검류의 정수..." << endl;
                cout << "hp -5" << endl;
            }
        }
        
    }
};
class Gun : public Weapon{
    int attack_stat = 10;
    int attack_num = 1;
public:
    void attacking(){
        cout << "한 발이면 충분하지!!" << endl;
        cout << "장전 중" << endl;
        cout << "..." << endl;
        cout << "빠아앙!" << endl;
        cout << "탄환이 상대의 약한 부위를 꿰뚫었다...!!" << endl;
        cout << "hp -10" << endl;
    }
};

int main(){
    std::srand(time(NULL));
    string name;
    Character chara1(name); // 2번째 인물을 등장시키고 싶다면 클래스를 2개 선언하는 것이 아니라
                            // 여기서는 char2(name)을 작성해서 같은 클래스를 공유하는 객체를 2개로 만들것
                            // 개념이해 ex) 로스트아크(클래스) 버서커 유저, 기상술사 유저(각각이 객체)
    Character cpu(name);

    int num1;
    int num2;
    int num3;
    cout << "~~~~_____~~~~~_____~~~~~_____~~~~\n";
    cout << " ~~단기접전: 총으로 단검으로~~\n";
    cout << "캐릭터의 이름을 입력해주세요. \n";
    cin >> name;

    chara1.setName(name);
    cout << chara1.getName();
    cout <<"캐릭터가 생성되었습니다! \n";

    while(1){
        cout << "> 1: 이름 변경" << endl << "> 2: 무기 획득" << endl << "> 3: 무기 사용" << endl << "> 4: 스테이터스 창 열기" << endl;
        cout << " 어떤 동작을 실행하시겠습니까? (0: 종료) ";
        cin >> num1;

        if(num1 != 0){
            if(num1 == 1){
                cout << "변경할 이름을 입력해주세요. " << endl;
                cin >> name;
                chara1.setNamechange(name);
            }
            else if(num1 == 2){
                chara1.setItem_numA();
            }
            else if(num1 == 3){
                chara1.setItem_numD();
            }
            else if(num1 == 4){
               chara1.status();
            }
            else cout << "다시 입력해주세요. \n";
        }
        else break;
    }
}