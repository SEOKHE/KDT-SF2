#include <iostream>

using namespace std;

// class Cats{
//     string name;
//     int age;

//     public:
//     Cats(string name, int age){ //생성자는 클래스와 같은 이름으로 만들어야함, 매개변수를 선언해서 사용할 수 있다
//         this->name = name; //this->name : 필드에 선언된 변수, = name : 매개변수 name
//         this->age = age;
        
//         cout << name <<"고양이가 태어났습니다! \n";
//     }
2
//     string getName(){
//         return name;
//     }

//     void setName(string name){
//         this->name = name;
//     }

//     void mew(){
//         cout << "냐옹이다옹\n";
//     }
// };

//실습1, 2
// class Rectangle{ 
    
//     int width;
//     int height;
//     int result;

//     public:
//     // 접근 제어자. private의 경우는 클래스 안에서만 접근이 가능하다. 필드는 private로 하고 메소드는 퍼블릭으로 하는 경우가 일반적이다. 
//     // Rectangle(int width, int height){
//     //     this->width = width;
//     //     this->height = height;
//     // }
//     // Rectangle(){}

//     int getWidth(){
//         return width;
//     }
//     int getHeight(){
//         return height;
//     }


//     void setWidth(int width){
//         this->width = width;
//     }
//     void setHeight(int height){
//         this->height = height;
//     }
   

//     int area(int width, int height){
//         result = width * height;
//         cout << "넓이는 : " << result << endl;

//         return 0;
//     }

    //int area(){   더 간단한 방법
    //     return width * height;
    // }
// };

//실습3(번외) 클래스

// class Character{

//     string name;
//     int level;
//     int level_num;
//     int item_num;
//     int item_num2;

//     public:
//     Character(string name){
//         this->name = name;
//         level = 0;
//         item_num = 0;
//     }
//     string getName(){
//         return name;
//     }

//     string getNamechange(){
//         return name;
//     }

//     // int getLevelchange(){
//     //     return level;
//     // }

//     void setName(string name){
//         this->name = name;
//     }

//     void setNamechange(string name){
//         this->name = name;
//         cout <<"이름이 변경 되었습니다 \n";
//         cout << "현재 이름은 " << name << " 입니다.";
//         cout << endl;
//     }

//     void setLevel(){
//         level++;
//         cout <<"레벨이 변경 되었습니다! \n";
//         cout << "현재 레벨은 " << level << " 입니다.";
//         cout << endl;
//     }

//     void setItem_num(){
//         cout << "현재 소유 중인 아이템 개수는 " << item_num << " 입니다.";
//         cout << endl;
//     }

//     void setItem_numA(){
//         item_num++;
//         cout <<"소유 중인 아이템 개수가 변경 되었습니다! \n";
//         cout << "현재 소유 중인 아이템 개수는 " << item_num << " 입니다.";
//         cout << endl;
//     }
//     void setItem_numD(){
//         if(item_num > 0){
//             item_num--;
//             cout <<"소유 중인 아이템 개수가 변경 되었습니다! \n";
//             cout << "현재 소유 중인 아이템 개수는 " << item_num << " 입니다.";
//             cout << endl;
//         }
//         else cout << "현재 소유 중인 아이템이 없습니다! \n";
//     }

//     void status(){
//         cout << "이름: " << name << endl;
//         cout << "레벨: " << level << endl;
//         cout << "아이템 개수: " << item_num << endl;
//     }

// };


//실습4(번외) 클래스
class Character{

    string name;
    int level;
    int level_num;
    int item_num;
    int item_num2;

    public:
    Character(string name){
        this->name = name;
        level = 0;
        item_num = 0;
    }
    string getName(){
        return name;
    }

    string getNamechange(){
        return name;
    }

    // int getLevelchange(){
    //     return level;
    // }

    void setName(string name){
        this->name = name;
    }

    void setNamechange(string name){
        this->name = name;
        cout <<"이름이 변경 되었습니다 \n";
        cout << "현재 이름은 " << name << " 입니다.";
        cout << endl;
    }

    void setLevel(){
        level++;
        cout <<"레벨이 변경 되었습니다! \n";
        cout << "현재 레벨은 " << level << " 입니다.";
        cout << endl;
    }

    void setItem_num(){
        cout << "현재 소유 중인 아이템 개수는 " << item_num << " 입니다.";
        cout << endl;
    }

    void setItem_numA(){
        item_num++;
        cout <<"소유 중인 아이템 개수가 변경 되었습니다! \n";
        cout << "현재 소유 중인 아이템 개수는 " << item_num << " 입니다.";
        cout << endl;
    }
    void setItem_numD(){
        if(item_num > 0){
            item_num--;
            cout <<"소유 중인 아이템 개수가 변경 되었습니다! \n";
            cout << "현재 소유 중인 아이템 개수는 " << item_num << " 입니다.";
            cout << endl;
        }
        else cout << "현재 소유 중인 아이템이 없습니다! \n";
    }

    void status(){
        cout << "이름: " << name << endl;
        cout << "레벨: " << level << endl;
        cout << "아이템 개수: " << item_num << endl;
    }

};


int main(){
    // Cats cat1("나비", 10);
    // cat1.mew(); //메소드에 의해 출력
    // cout << cat1.getName();
    // cout << endl;
    // cat1.setName("도라에몽");
    // cout << cat1.getName();

//실습 1, 2
    // int num1;
    // int num2;
    // int num3;

    // cout << "사각형의 가로와 세로 길이를 입력해주세요. \n" << "가로 : ";
    // cin >> num1; 
    // cout << "세로 : ";
    // cin >> num2;

    // Rectangle ret1;//생성자가 없을 경우 클래스 변수명에 ()는 빼고 선언할 것

    // ret1.setWidth(num1);
    // ret1.getWidth();

    // ret1.setHeight(num2);
    // ret1.getHeight();

    // ret1.area(num1, num2);
    // //cout << rect1.area(); 더 간단한 방법을 적용시키기 위한 요소

//실습 3(번외)

    // string name;
    // Character chara1(name);
    // int num1;
    // int num2;
    // int num3;

    // cout << "캐릭터의 이름을 입력해주세요. \n";
    // cin >> name;

    // chara1.setName(name);
    // cout << chara1.getName();
    // cout <<"캐릭터가 생성되었습니다! \n";
    // cout << chara1.getLevel() << endl;
    // cout << chara1.getItem_num() << endl;

    // while(1){
    //     cout << "1:이름 변경, 2:레벨업, 3:아이템 획득, 4:아이템 사용, 5:스테이터스 창 열기";
    //     cout << " 어떤 동작을 실행하시겠습니까? (0: 종료) ";
    //     cin >> num1;

    //     if(num1 != 0){
    //         if(num1 == 1){
    //             cout << "변경할 이름을 입력해주세요. " << endl;
    //             cin >> name;
    //             chara1.setNamechange(name);
    //         }
    //         else if(num1 == 2){
    //             chara1.setLevel();
    //         }
    //         else if(num1 == 3){
    //             chara1.setItem_numA();
    //         }
    //         else if(num1 == 4){
    //             chara1.setItem_numD();
    //         }
    //         else if(num1 == 5){
    //            chara1.status();
    //         }
    //         else cout << "다시 입력해주세요. \n";
    //     }
    //     else break;
    // }

//실습4(번외)

    string name;
    Character chara1(name); // 2번째 인물을 등장시키고 싶다면 클래스를 2개 선언하는 것이 아니라
                            // 여기서는 char2(name)을 작성해서 같은 클래스를 공유하는 객체를 2개로 만들것
                            // 개념이해 ex) 로스트아크(클래스) 버서커 유저, 기상술사 유저(각각이 객체)
    int num1;
    int num2;
    int num3;

    cout << "캐릭터의 이름을 입력해주세요. \n";
    cin >> name;

    chara1.setName(name);
    cout << chara1.getName();
    cout <<"캐릭터가 생성되었습니다! \n";
    // cout << chara1.getLevel() << endl;
    // cout << chara1.getItem_num() << endl;

    while(1){
        cout << "1:이름 변경, 2:레벨업, 3:아이템 획득, 4:아이템 사용, 5:스테이터스 창 열기";
        cout << " 어떤 동작을 실행하시겠습니까? (0: 종료) ";
        cin >> num1;

        if(num1 != 0){
            if(num1 == 1){
                cout << "변경할 이름을 입력해주세요. " << endl;
                cin >> name;
                chara1.setNamechange(name);
            }
            else if(num1 == 2){
                chara1.setLevel();
            }
            else if(num1 == 3){
                chara1.setItem_numA();
            }
            else if(num1 == 4){
                chara1.setItem_numD();
            }
            else if(num1 == 5){
               chara1.status();
            }
            else cout << "다시 입력해주세요. \n";
        }
        else break;
    }
}


