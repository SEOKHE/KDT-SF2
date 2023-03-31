#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;
    //private 자기 자신(해당 클래스 내)에서만 접근 가능
    //protected 라는 자료형 : 자기 자신과, 자식 클래스에서 접근 가능
    //public : 모든 곳에서 접근 가능
// class Person{ //클래스는 기본적으로 정보 은닉의 속성을 가진다. Student의 부모 클래스, 슈퍼 클래스, 상위 클래스
//     //멤버 = 필드, 메소드, 생성자
//     //생성자도 메소드의 일종, 리턴 타입이 없는 이유는 리턴 타입을 int, string 등으로 지정할 수 없기 때문이다. 그럼에도 return은 일어나고 있다.
// protected: // 부모 클래스에서 사용한다. 일반적으로 필드에서 변수 선언시에는 public을 사용하지 않음
//     string name;
// // private:
//     int age;
//     // ^^^^ 이 위는 private 상태임
// public: //public, private, protected
//     // Person(){} //기본 생성자 클래스명(){return ???}의 형태를 갖는다.
//     Person(string name, int age){//하나라도 생성자를 만들게 되면 그 뒤에 기본 생성자를 만들어 주지 않는다. 이후로는 정의된 생성자만 남는다.
//         this->name = name;
//         this->age = age;
//     }
   
//     // //Person p = Person("허준석");
//     // // ^위 아래 두 생성자는 이름은 같지만 매개변수 유무로 다른 생성자가 됨v
//     // Person(){}
//     // //Person p = Person(); 
//     void sleep(){ cout << "잠자기"; }

// };

// class Student : public Person { //선언하고 싶은 클래스 이름 : 접근 제어자 사용할 클래스 이름
//             //부모 클래스에서 상속받은 멤버들의 접근제어자의 한계를 지정함 -> 이곳에 사용하는 접근제어자에 따라 상속받은 멤버들이 protected의 형태가 될지, public의 형태가 될지, private의 형태가 될 지 정해진다.
//                                 // Person의 자식 클래스, 서브 클래스, 하위 클래스 
//                                 //클래스간 명칭은 두 클래스간 비교에만 사용가능 각각을 따로 부를 때 부모와 자식이라고 할 수 없음

//     // string name;
//     // int age;

//     // public: //public, private, protected
//     // void sleep(){ cout << "잠자기" }
//     // 본인(Student) 생성자에서 부모의 생성자를 호출함.
//     //Student 생성자를 작성하지 않았다는 건,
//     //Student 기본 생성자를 호출하고 부모의 기본 생성자를 호출하게 됨
//     string stu_id;

//     public:
//     //Student 생성자를 작성하지 않았을 경우
//     Student(string name, int age) : Person(name, age){ //선언하고 싶은 생성자 이름 : 부모 클래스의 생성자 이름(매개변수){}
//         this->name = name; //protected:가 정상적으로 동작했음
//         this->age = age; //private:가 동작했음
//         //자식 클래스의 제일 위에 위치한 명령문에 부모 클래스의 생성자를 선택함.
//         //~~~
//         this->stu_id = "1111111"; //= stu_id;
//         //return 값;
//     }

//     void study(){ 
//          sleep();
//          cout << "공부하기";
//     }

// };

class Shape{

protected:
    int length_num;
    int length;

public:
    Shape(int length_num, int length){
        this->length_num = length_num;
        this->length = length;
    }
    void printInfo(){
        cout << "변의 개수: " << length_num << " "  << "밑변의 길이: "<< length << endl;
    }

};

class Rectangle : public Shape{

protected:
    int width;
    int area1;

public:
    Rectangle(int length_num, int length, int width) : Shape(length_num, length){
        this->width = width;
        this->length_num = length_num;
        this->length = length;
    }

    void area(){
        area1 = width * length;
        cout << "사각형의 넓이는 : " << area1 << " 입니다. \n";
        cout << endl;
    }
};

class Triangle : public Shape{

protected:
    int height;
    float area1;

public:

    Triangle(int length_num, int length, int height) : Shape(length_num, length){
        this->height = height;
        this->length_num = length_num;
        this->length = length;
    }

    void area(){
        area1 = height * length / 2.;
        cout << "삼각형의 넓이는 : " << area1 << " 입니다. \n";
        cout << endl;
    }
};

int main(){
    // Person p = Person("허준석"); //객체를 생성하는 순간 사실상 생성자가 호출된다. 객체를 생성할때 클래스의 멤버들을 잘 저장해주는 무언가가 리턴된다.

    // Person p = Person();
    
    // Person p = Person(1, 3);
    

    // Student s = Student("허준석", 97);
    // s.sleep(); // 자식 클래스는 부모 클래스에서 상속받은 것을 사용가능하다.

    int num1=0;
    int num2;
    int num3;
    int area;
    cout << "사각형의 밑변 길이와 세로 길이를 입력해주세요 : ";
    cin >> num2;
    cin >> num3;
    cout << endl;

    Rectangle r1 = Rectangle(num1, num2, num3);
    r1.area();

    cout << "삼각형의 밑변 길이와 높이의 길이를 입력해주세요 : ";
    cin >> num2;
    cin >> num3;
    cout << endl;

    Triangle t1 = Triangle(num1, num2, num3);
    t1.area();

    // Rectangle r1 = Rectangle(num1, num2);
    // r1.area(num1, num2);

    // Triangle t1 = Triangle(num1, num2);
    // t1.area(num1, num2);

}