#include <iostream>

using namespace std;
// using std::cout;
// using std::cin;
// using std::endl;
// using std::string;

// class Person{
// protected:
//     int age=1;
//     string name;

// public:
//     Person(int age, string name){
//         this->age = age;
//         this-> name = name;
//     }
//     // void sleep(){
//     //     cout << "잠자기" << endl;
//     // }

//     int override_test(int num){
//         return num;
//     }
//     int getAge(){
//         return age;
//     }

//     //메소드 오버 로딩 *** 매개 변수가 달라야 함 ***, 기본 문법, 함수의 이름이 같고 원형이 다른 함수가 여러개 있는 것
//     void test(){
//         cout << "테스트 함수";
//     }
//     int test(int a){
//         return a;
//     }
//     int test(int a, int b){
//         return a;
//     }
// };

// class Student : public Person {
//     string stu_id;
//     string school;
//     int age;
//     string name;
// public:
//     Student(int age, string name, string stu_id) : Person(age, name){
//         this->stu_id = stu_id;
//     }
//     //메소드 오버라이딩 X -> 그냥 Student의 메소드임
//     // void study(){
//     //     cout << "공부하기" <<endl;
//     // }

//     //메소드 오버라이딩이 일어남. -> 부모 클래스의 함수를 복붙하고 내용만 바꾼 형태
//     // void sleep(){
//     //     cout << "10시에 잠자기" <<endl;
//     // }
//     //함수(메소드)의 원형이 같아야 오버라이딩이 발생한다. 함수 이름, 매개변수 종류, 개수까지 다 같음

//     int override_test(int num){
//         return num + getAge(); //getter 만들거나 접근제어자를 protected로 만들것
//     }
// };

class Student{
protected: 
    string name;
    string school;
    int age;
    string stu_id;
public:
    Student(string name, string school, int age, string stu_id){
        this->name = name;
        this->school = school;
        this->age = age;
        this->stu_id = stu_id;
    }


};

class Name : public Student{
    string name;
public:
    Name(string name) : Student(name, school, age, stu_id){
        this->name = name;
    } 
    string getName(string name){
        return name;
    }

};

class School : public Student{
    string school;
public:
    School(string school) : Student(name, school, age, stu_id){
        this->school = school;
    } 
    string getSchool(string school){
        return school;
    }

};

class Age : public Student{
public:
    Age(int age) : Student(name, school, age, stu_id){
        this->age = age;
    } 
    int getAge(int age){
        return age;
    }

};

class Stu_id : public Student{
    string stu_id;
public:
    Stu_id(string stu_id) : Student(name, school, age, stu_id){// Student 클래스에서 초기화 되지 않은 값을 사용하려고 하기 때문에 오류 발생
        this->stu_id = stu_id;
    } 
    string getStu_id(string stu_id){
        return stu_id;
    }

};

int main(){
    // Student s = Student(22, "나우두", "11111");
    // // s.sleep();
    // cout << s.override_test(3) << endl;

    // Name n = Name("name");
    // cout << "이름은 : " << n.getName("박대기") << endl;
    // School s = School("School");
    // cout << "학교는 : " << s.getSchool("이대") << endl;
    // Age a = Age(0);
    // cout << "나이는 : " << a.getAge(22) << endl;
    // Stu_id stu = Stu_id("stu_id");
    // cout << "학번은 : " << stu.getStu_id("2311111") << endl;

    
}