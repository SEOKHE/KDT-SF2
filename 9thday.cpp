// 상속 실습 1번

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// class Shape {
// protected:
// 	int line_num; // 변의 개수
// 	int length; // 밑변의 길이
	
// public:
// 	Shape(int line_num, int length) {
// 		this->line_num = line_num;
// 		this->length = length;
// 	}

// 	void printInfo() {
// 		cout << "변의 개수는 : " << line_num << endl;
// 		cout << "밑변의 길이는 : " << length << endl;
// 	}
// };

// class Rectangle : public Shape {
// 	int heigth; // 세로 길이
// public:
// 	// 방법 1
// 	//Rectangle(int length, int heigth) : Shape(){
// 	//	this->line_num = 4;
// 	//	this->length = length;
// 	//	this->heigth = heigth;
// 	//}

// 	//방법 2
// 	Rectangle(int length, int heigth) : Shape(4, length) {
// 		this->heigth = heigth;
// 	}
// 	void area() {
// 		cout << "넓이는: " << heigth * length << endl;
// 	}
// };

// class Triangle : public Shape {
// 	int heigth; // 높이
// public:
// 	Triangle(int length, int heigth) : Shape(3, length) {
// 		this->heigth = heigth;
// 	}

// 	void area() {
// 		cout << "넓이는: " << (double)heigth * length / (double)2 << endl; // (double) : 소수점 이하 자리 출력을 위한 강제형 변환
// 	}
// };

//오버라이딩 실습1

class Student{
protected:
    string name;
    string school;
    int age;
    string stu_id;
public:
    void lunch(){
        cout << "점심은 학식" << endl;
    }
};
class Kim : public Student{
public:
    Kim(string name, string school, int age, string stu_id){
        this->name = name;
        this->school = school;
        this->age = age;
        this->stu_id = stu_id;
    }
    void lunch(){
        cout << "점심은 김가네 김밥" << endl;
    }

};


class Baek : public Student{
public: 
    Baek(string name, string school, int age, string stu_id){
        this->name = name;
        this->school = school;
        this->age = age;
        this->stu_id = stu_id;
    }
    void lunch(){
        cout << "점심은 백종원 피자" << endl;
    }
};

int main() {
	// Rectangle r = Rectangle(5, 3);
	// r.printInfo();
	// r.area();

	// Triangle t = Triangle(3, 3);
	// t.printInfo();
	// t.area();
    Kim k = Kim("김", "서울대", 20, "231111");
    k.lunch();

    Baek b = Baek("백", "연세대", 21, "221111");
    b.lunch();
    
	return 0;
}