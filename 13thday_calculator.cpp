#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//Operator 클래스로부터 상속받는 Add, Minus, Multiply, Divide 클래스와 업 캐스팅, 정적 멤버, 가상함수를 사용해서
//4칙연산을 하는 계산기 만들기. 숫자를 입력 받은 후 연산자를 입력 받고 마지막으로 연산할 숫자를 입력 받아야함.
//1회 연산이 끝난 후, 연산을 계속할 것인지 물어야하며 이때 Y: 도출된 결과를 이용한 후속 계산 AC: 이전 기록을 초기화 하겠다. EXIT: 계산을 종료하겠다.
//초회 계산 후 결과 값을 인덱스 0에 넣는다. 그 후 추가 되는 값을 인덱스 1에 넣고 다시 반복하는 형태로 구성한다.

class Operator{
protected:
    string text;
    bool next = false;
    double result = 0.0, result2 = 1.0;
    double num1 = 0.0, num2 = 0.0;

public:
    Operator(int num1, int num2){
        this -> num1 = (double)num1;
        this -> num2 = (double)num2;
    }   

    void Result(){
        cout << "----------------------------------------------------------------------------" << endl;
        cout << "결과값 : " << (double)result << endl;
        cout << "----------------------------------------------------------------------------" << endl;
    }

    virtual double calc(){ //가상 함수를 쓰면 다운캐스트를 하지 않아도 자식 클래스의 메소드 사용 가능하다(물론 원형이 같은 메소드에 해당).
        return (double)result;
    }
};

class Add : public Operator{
public:
    Add(double num1, double num2) : Operator(num1,num2){
    }
    double calc(){
        result = num1 + num2;
        return result;
    }
};

class Minus : public Operator{
public:
    Minus(double num1, double num2) : Operator(num1,num2){
    }
    double calc(){
        result =  num1 - num2;
        return result;
    }
};

class Multiply : public Operator{
public:
    Multiply(double num1, double num2) : Operator(num1,num2){
    }
    double calc(){
        result =  num1 * num2;
        return result;
    }
};

class Divide : public Operator{
public:
    Divide(double num1, double num2) : Operator(num1,num2){
    }
    double calc(){
        result =  (double)num1 / (double)num2;
        return (double)result;
    }
};

int main(){
    //while문을 만들어 숫자와 연산자를 입력 받고 결과 값을 출력하는 걸 만들 것이다.
    double num1 = 1.0, num2 = 2.0, result = 0.0, result2 = 1.0;
    int cnt = 0;
    string text;
    char operat;
    bool next = false;

    // Operator op = Operator(result, false);
    Operator* cal;

    cout << "----------------------------------------------------------------------------" << endl;
    cout << "척척 학사가 만든 척척 계산기" << endl;
    while(!next){
        cout << "----------------------------------------------------------------------------" << endl;
        //operat = cal->memo();

        if(result != result2){
            cout << "숫자를 입력해주세요 : ";
            cin >> num1;
            cout << endl;

            cout << "연산자를 입력해주세요 : ";
            cin >> operat; //text에 들어오는 연산자에 대응하는 클래스 소환할 것
            cout << endl;

            cout << "숫자를 입력해주세요 : ";
            cin >> num2;
            cout << endl;
        }
        else if(result == result2){
        //Add Minus Multiply Divide
        cout << "연산자를 입력해주세요 : ";
        cin >> operat; //text에 들어오는 연산자에 대응하는 클래스 소환할 것
        cout << endl;

        cout << "숫자를 입력해주세요 : ";
        cin >> num2;
        cout << endl;
        }

        if(operat == '+'){
            cal = new Add(num1, num2);
        }
        else if(operat == '-'){
            cal = new Minus(num1, num2);
        }
        else if(operat == '*'){
            cal = new Multiply(num1, num2);
        }
        else if(operat == '/'){
            cal = new Divide(num1, num2);
        }
        result = cal->calc();
        cnt++;
        cal->Result();
        result2 = result;
        // next = cal->Next();
        cout << "연산을 게속 하시겠습니까? (Y: 계속, AC: 초기화, EXIT: 종료) : ";;
        cin >> text;
        cout << endl;

        if(text == "Y" || text == "y"){
            result2 = result;
        }
        else if(text == "AC" || text == "ac"){
            int num1 = 0;
            int num2 = 0;
            result = 0;
            result2 = 1;
            cout << "값이 초기화 되었습니다" << endl;
        }
        else if(text == "EXIT" || text == "exit"){
            next = true;
            cout << "프로그램을 종료합니다" << endl;
        }
        num1 = result;
    }
    cout << "총 " << cnt << " 회 계산하셨습니다!" << endl;

    return 0;
}

 // cout << "숫자를 입력해주세요 : ";
        // cin >> num2;
        // cout << endl;
        // result = num1 text num2;
        // cout << "-----------------------------------------" << endl;
        // cout << "결과값 : " << result << endl;
        // cout << "연산을 게속 하시겠습니까? (Y: 계속, AC: 초기화, EXIT: 종료) : ";
        // cin >> text; //이때 대응되는 메소드는 Operator 클래스의 메소드 쓰면 될듯
        // cout << endl;