// #include <iostream>

// using std::cout;
// using std::cin;
// using std::endl;
// using std::string;

// // class Person{ //추상 클래스: 순수 가상 함수가 1개이상 있는 클래스
// // public:
// //     //virtual 함수원형 = 0; //구현부 없음
// //     virtual void eat() = 0; //순수 가상 함수, 부모 클래스에서 인스턴스를 생성하지 않고
// //     virtual void sleep() = 0; // 자식 클래스에서 강제로 구현하게 하고 싶은 함수가 있을 때 사용
// // };

// // //추상 클래스를 상속받는 자식 클래스는 추상 메소드를 모두 "구현" 해야함
// // class Student : public Person{
// // public:
// //     void test(){ // 추상 클래스의 순수 가상 함수를 오버라이드해서 구현함
// //         //함수의 구현부 {} 내부
// //         cout << "test 함수 입니다." << endl;
// //     }

// //     void eat(){
// //         cout << "식사 중 입니다." << endl;
// //     }

// //     void sleep(){
// //         cout << "취침 중 입니다." << endl;
// //     }
// // };

// //실습1
// // class Shape{
// // protected:
// //     virtual void draw() = 0;
// // };

// // class Circle : Shape{
// // public:
// //     void draw(){
// //         cout << "도형의 이름은 원입니다" << endl;
// //     }
// // };
// // class Rect : Shape{
// // public:
// //     void draw(){
// //         cout << "도형의 이름은 사각형입니다" << endl;
// //     }
// // };
// // class Tria : Shape{
// // public:
// //     void draw(){
// //         cout << "도형의 이름은 삼각형입니다" << endl;
// //     }
// // };

// //컨트롤 클래스
// // class RemoteControl {
// // public:
// //     virtual void turnOn() = 0;
// //     virtual void turnOff() = 0;
// // };

// // class TV : public RemoteControl {
// // public:
// //     void turnOn(){
// //         cout << "tv 켬" << endl;
// //     };
// //     void turnOff(){
// //         cout << "tv 끔" << endl;
// //     }
// // };

// //다형성: 오버라이드, 
// // class Shape{
// //     int line_num;
// // public:
// //     Shape(int line_num){
// //         this->line_num = line_num;
// //     }
// //     int getLineNum(){
// //         return line_num;
// //     }
// // };

// // class Rect : public Shape{
// //     int height;
// // public:
// //     Rect(int heihgt) : Shape(4){
// //         this->height = height;
// //     }
// //     int getHeiht(){
// //         return height;
// //     }
// // };

// // class Tria : public Shape{
// // public:
// //     Tria() : Shape(3){
// //     }
// // };

// //다형성 실습1 && 업, 다운 캐스팅 실습1
// class Snack{
// protected:
//     int price = 300;
//     string name;
//     string co_name = "롯데제과";
// public:
//     Snack(string name){
//         this->name = name;
//     }
//     void getName(){
//         cout << name << " 입니다" << endl;
//     }
//     void getInfo(){
//         cout << name << price << "원 " << co_name << " 제품 입니다" << endl;
//     }
// };

// class Candy : public Snack{
//     string taste;
//     string name;
// public:
//     Candy(string taste, string name) : Snack(name){
//         this->taste = taste;
//         this->name = name;
//     }
//     void getName(){
//         cout << name << " 입니다" << endl;
//     }
//     void getInfo(){
//         cout << taste << name << " 입니다" << endl;
//     }
// };

// class Chocolate : public Snack{
//     string shape;
//     string name;
// public:
//     Chocolate(string shape, string name) : Snack(name){
//         this->shape = shape;
//         this->name = name;
//     }
//     void getName(){
//         cout << name << " 입니다" << endl;
//     }
//     void getInfo(){
//         cout << shape << name << " 입니다" << endl;
//     }
// };

// int main(){
//     //Person p = Person(); 
//     //Person이 추상 클래스이기 때문에 오류가 발생함
//     // Student s = Student(); 
//     //구현하지 않으면 자식 클래스로도 인스턴스 생성이 불가능하다.

//     // Student s = Student();
//     // s.test();
//     // s.eat();
//     // s.sleep();

// //실습1
//     // Circle c = Circle();
//     // c.draw();

//     // Rect r;
//     // r.draw();

//     // Tria t = Tria();
//     // t.draw();

//     // Shape shape = Rect(4);
//     // cout << shape.getLineNum() << endl;
//     // //Shape에 있는 public 멤버에만 접근 가능함
//     // //Rect에 있는 멤버에는 접근 불가능

//     // Shape shapes[2] = {Rect(5), Tria()};
//     // cout << shapes[0].getLineNum() << endl;
//     // cout << shapes[1].getLineNum() << endl;
//     // // Rect rect = Shape(); //큰범위에서 작은 범위를 담아낼 수 있다는 거지 작은 범위에서 큰 범위를 담을 순 없음
    
//     // Snack snackBasket[2] = {Candy("콜라맛", "아무거나"), Chocolate("한라봉 모양", "랜덤")};

//     Candy c1 = Candy("초코맛", "츄파츕스");
//     Candy c2 = Candy("딸기맛", "별사탕");
//     Chocolate cho1 = Chocolate("막대 모양", "가나 초콜릿");
//     Chocolate cho2 = Chocolate("동전 모양", "동전 초콜릿");

//     // Snack snackBasket[4] = {c1, c2, cho1, cho2}; 
//     Snack* snackBasket[4] = {&c1, &c2, &cho1, &cho2}; 

//     cout << "업 캐스팅" << endl << endl;

//     for(int i = 0; i < 4; i++){
//         snackBasket[i]->getInfo();
//     }

//     cout << endl << "다운 캐스팅" << endl << endl;

//     // Candy cand = Candy("초코맛", "츄파츕스");
//     Candy* cand = (Candy*)snackBasket[0];
//     cand->getInfo();
    
//     // Chocolate choco = Chocolate("막대 모양", "가나 초콜릿");
//     Chocolate* choco = (Chocolate*)snackBasket[2];
//     choco->getInfo();

//     // Candy* c1 = (Candy*)snackBasket;
//     // c1.getName();
//     // Candy* c2 = (Candy*)snackBasket;
//     // c2.getName();
//     // Chocolate* cho1 = (Chocolate*)snackBasket;
//     // cho1.getName();
//     // Chocolate* cho2 = (Chocolate*)snackBasket;
//     // cho2.getName();
// }