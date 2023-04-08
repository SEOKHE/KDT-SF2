#include <iostream>

using namespace std;

double calculator(int a, int b, char op);

int main(){
    int a, b;
    double c;
    char op;
    cout << "두 정수와 +, -, *, / 중 하나의 연산자를 입력하세요 -> ";
    cin >> a >> op >> b;
    c = calculator(a, b, op); 
    cout << c << endl;
    
    return 0;
} 

double calculator(int a, int b, char op){
    double res = 0;
    if(op == '+'){
        res = a + b;
    }
    else if(op == '-'){
        res = a - b;
    }
    else if(op == '*'){
        res = a * b;
    }
    else if(op == '/'){
        if(b !=0 ){
            res = (double)a / (double)b;
        }
        else{
            cout << "계산 불가" << endl;
        }
        
    }
    cout << "계산 결과는 : ";
    return res;
}


// -1/ -2 / -3/ -4  -> 2로 나눈 몫을 빼준 위치에 1을 놓으면 중앙에 1 위치 가능 
//3 = 2/ 5 = 3/ 7 = 4/ 9 = 5 

// int main(){
//     int num1, num2, result;
//     cin >> num1;
//     cin >> num2;

//     result = num1*3 num2;
//     cout << result << endl; 
// }