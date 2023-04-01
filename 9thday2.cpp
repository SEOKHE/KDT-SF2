#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Person{
public:
    void test(){
        cout << "test" << endl;
    }
};

class Student : public Person{
public:
    void test_stu(){
        cout << "test student" << endl;
    }

};

int main(){
    Person p = Student();

    Student s;// 클래스 Student의 객체 s
    Person* p2 = &s; // << 동적 메모리 X, 업캐스팅 O
    p2->test(); //포인터에 나오는 개념 p2.test()와 같은 동작을 함
    // p2->test_Stu(); 불가능

    Person* p3 = new Student(); // << 동적 메모리 O, 업캐스팅 O
   
    //업캐스팅: 포인터로 자식 클래스의 인스턴스(객체)를 가리키는 것
    //다운캐스팅: 업캐스팅 된 것을 다시 원상태로 되돌리는 것

    Student* stu = (Student*)p3;
                  //다운 캐스팅 구현부
    stu->test();
    stu->test_stu();

    // Person p = Student(); //C++업캐스팅에서는 권장하지 않는 방식이다.
    // Student st = (Student)p; // 오류! 위의 문장이 C++에서는 업캐스팅이라고 
                            // 볼 수 없기 때문에 옆의 문장도 다운캐스팅이라고 볼 수 없다.

     delete p3;
}