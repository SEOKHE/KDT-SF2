#include <iostream>

using namespace std;

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
    
    string lunch(){
        return "점심은 학식 \n";
    }
};

class Kim : public Student{
public:
    string name;
    string school;
    int age;
    string stu_id;
public:
    Kim(string name, string school, int age, string stu_id) : Student(name, school, age,stu_id){
        this->name = name;
        this->school = school;
        this->age = age;
        this->stu_id = stu_id;
    }

    // string name(string name){
    //     return name;
    // }

    // string school(string school){
    //     return school;
    // }
    // int age(int age){
    //     return age;
    // }
    // string stu_id(string stu_id){
    //     return stu_id;
    // }

    void getName(){
        cout << "이름 : " << name << endl;
    }

    void getSchool(){
        cout << "학교 : " << school << endl;
    }
    void getAge(){
        cout << "나이 : " << age << endl;
    }
    void getStu_id(){
        cout << "학번 : " << stu_id<< endl;
    }

    string lunch(){
        return "점심은 김가네 김밥 \n";
    }



};

class Baek : public Student{

public:
    string name;
    string school;
    int age;
    string stu_id;
public:
    Baek(string name, string school, int age, string stu_id) : Student(name, school, age,stu_id){
        this->name = name;
        this->school = school;
        this->age = age;
        this->stu_id = stu_id;
    }

    // string name(string name){
    //     return name;
    // }

    // string school(string school){
    //     return school;
    // }
    // int age(int age){
    //     return age;
    // }
    // string stu_id(string stu_id){
    //     return stu_id;
    // }

    void getName(){
        cout << "이름 : " << name << endl;
    }
    void getSchool(){
        cout << "학교 : " << school << endl;
    }
    void getAge(){
        cout << "나이 : " << age << endl;
    }
    void getStu_id(){
        cout << "학번 : " << stu_id << endl;
    }

    string lunch(){
        return "점심은 백종원 피자 \n";
    }

};

int main(){
    Student s = Student("이름", "학교", 1, "111");
    cout << s.lunch() << endl;

    Kim k = Kim("백종원", "서강대", 21, "221111");
    k.getName();
    k.getSchool();
    k.getAge();
    k.getStu_id();
    cout << k.lunch() << endl;

    Baek b = Baek("김두치", "홍익대", 23, "1911112");
    b.getName();
    b.getSchool();
    b.getAge();
    b.getStu_id();
    cout << b.lunch() << endl;
}