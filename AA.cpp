#include <iostream>

int main(){
    std::cout << "Hello world!\n";

    //자료형 변수명 =값;
    //int a = "a";
    //int b = 1;

    // bool, char, int, float;

    bool bool123 = true;
    bool123 = false; 
    //bool bool123 = "abc"; bool은 문자의 유무 역시도 참, 거짓으로 판명하기에 문자열을 입력하는 것은 가능하다.
    char char123 = 'a'; //문자;
    
    int int123 = 1; // 정수;

    float float123 = 1.1; //소수;

    int a = 9;
    int b = 2;
    std::cout << a - b;
    std::cout << "\n";



    float f = 3.2;
    float g = 6.8;

    std::cout << f + g;

    bool c1 = true;
    std::cout << c1;
    std::cout <<"\n";

    bool c2 = false;
    std::cout << c2;
    std::cout << "\n";

    char d = 'a';
    std::cout << d;
    std::cout << "\n";

    char e = 'b';
    std::cout << e;
    std::cout << "\n";

    std::string str123 = "아무거나"; //string은 문자열 출력;
    std::cout << str123;
    std::cout << "\n";

    std::string str234 = "아무개";
    std::cout << str234;

}  //std::cout는 c에서 printf를 대체한다.;
    //std::cin은 c의 scanf를 대체한다.;

