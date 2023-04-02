/*#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
//멤버: 필드, 메소드를 통틀어서 일컫는 말

// class Person{ 
//     static int static_var; // static을 자료형 앞에 붙여서 static 필드 선언
//     string name;

// public:
//     void sleep(){
//         name = "aaa";
//         static_var = 5; // 일반 멤버가 사용가능할 때는 스태틱 멤버가 사용 가능한 시점이기 때문에 오류 발생 X
//     }
//     static void static_method(){
//         // this->name = name;
//         // name = "aaa"; // 스태틱(정적) 메소드 안에서는 일반 멤버에 접근할 수 없다.
//                       // 일반 멤버들은 객체가 생성될 때 메모리가 잡힌다. ->> 객체없이는 멤버에 접근이 불가능
//                       // 스태틱 멤버들은 소속 클래스가 읽히는 순간 메모리가 잡힌다. 
//         static_var = 10; // 스태틱 멤버들은 접근 가능
//         cout << "static method" << endl;
//     }
// };

// class Person{
//     static int cnt;
//     string name;
// public:
//     Person(string name){
//         this-> name = name;
//         plusCnt();
//     }
//     static int getCnt(){
//         return cnt;
//     }

//     void plusCnt(){
//         cnt++;
//     }
// };

// int Person::cnt = 0;
// int Person::static_var = 0; // static 멤버는 main 함수 전에 초기화를 한번 해줘야 함. 
//                             // 구조 : static 멤버의 자료형 소속 클래스명::멤버명 = 원하는 초기화 값;

int main(){
//     Person::static_var = 5; // 클래스명::스태틱멤버명 = 초기화값;
//     cout << Person::static_var << endl; //객체를 만들지 않아도 스태틱멤버에 접근할 수 있다.
//     Person::static_method();
//     cout << Person::static_var << endl;

    Person p("김소연");
    Person p2("채동현");

    cout << "인원 : " << Person::getCnt() << endl;

    // Person p;
    // p.name = "홍길동";
    // p.static_var = 2;
    // p.sleep();
    // p.static_method();
    // cout << p.static_var << endl;

    // Person p2;
    // p2.name = "성춘향";
    // p2.static_var = 5;

    // cout << p.name << " " << p2.name << endl;
    // cout << p.static_var << " " << p2.static_var << endl;
}*/