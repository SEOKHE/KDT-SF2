#include <iostream>

int main(){
    // std::cout << "Hello world!\n";

    // //자료형 변수명 =값;
    // //int a = "a";
    // //int b = 1;

    // // bool, char, int, float;

    // bool bool123 = true;
    // bool123 = false; 
    // //bool bool123 = "abc"; bool은 문자의 유무 역시도 참, 거짓으로 판명하기에 문자열을 입력하는 것은 가능하다.
    // char char123 = 'a'; //문자;
    
    // int int123 = 1; // 정수;

    // float float123 = 1.1; //소수;

    // int a = 9;
    // int b = 2;
    // std::cout << a - b;
    // std::cout << "\n";



    // float f = 3.2;
    // float g = 6.8;

    // std::cout << f + g;

    // bool c1 = true;
    // std::cout << c1;
    // std::cout <<"\n";

    // bool c2 = false;
    // std::cout << c2;
    // std::cout << "\n";

    // char d = 'a';
    // std::cout << d;
    // std::cout << "\n";

    // char e = 'b';
    // std::cout << e;
    // std::cout << "\n";

    // std::string str123 = "아무거나"; //string은 문자열 출력;
    // std::cout << str123;
    // std::cout << "\n";

    // std::string str234 = "아무개";
    // std::cout << str234;

    // std::string test = "1";
    // std::string test2 = "2";

    // std::cout << test + test2 +"\n";

    // std::string test3 = "포스코";
    // test3 = "코딩온";

    // std::cout << test3;

   // int p;
    //std::cout << "input num";
   // std::cin >> p;

   // std::cout << p;

    //int a;
   // std::string b;
  // std::cin >> a;
   //std::cin >> b;

  // std::cout << a << " " + b;

   // std::string a;
    //int b;
   // std::cout << "이름을 입력하세요.";
    //std::cin >> a;
   // std::cout << "나이를 입력하세요.";
   // std::cin >> b;
   // std::cout << "안녕하세요!" <<  " " + a << "님(" << b <<")세";

    // int a =3;
    // if (a>10) {
    //     std::cout << "a가 10보다 큽니다";
    // }
    // else if (a == 5) {
    //     std::cout << "a는 5입니다.";
    // }
    // else {
    //     std::cout << "a는 10보다 크지 않고 5가 아닙니다.";
    // }

    // int a = 5;
    // if (a > 5) {
    //     std::cout << "5보다 크다";
    // }
    // else {
    //     std::cout << "5보다 크지 않다";
    // }

    // a > 5?std::cout << "5보다 크다":std::cout << "5보다 크지 않다";

    int a;
    std::cout << "나이를 입력하세요. \n";
    std::cin >> a;
     if (a <= 7){
        std::cout << "유아 \n\n";
     }
     else if(8 <= a && a <= 13){
        std::cout << "초등학생 \n\n";
     }
     else if(14 <= a && a<= 16){
        std::cout << "중학생 \n\n";
     }
     else if (17 <= a && a<= 19){
        std::cout << "고등학생 \n\n";
     }
     else if (20 <= a && a < 200){
        std::cout << "성인 \n\n";
    }
        else if(200 <= a){
        std::cout << "나이가 너무 많습니다...! \n\n";
    }

    std::string name1;
    std::cout << "이름을 입력하세요. \n";
    std::cin >> name1;

    if(name1 == "홍길동"){
        std::cout << "남자 \n\n";
    }
    else if(name1 == "성춘향"){
        std::cout << "여자 \n\n";
    }
    else std::cout << "모르겠소이다. \n\n";

    int d;
    std::cin >> d;
    d%5 == 0? std::cout << d << "는 5의 배수 입니다. \n\n" : std::cout << d << "는 5의 배수가 아니네요 ㅜㅜ \n\n";

    int g;
    int k;
    char vv;

    std::cout << "연산할 정수 두 개를 입력해 주세요. \n";
    std::cin >> g;
    std::cin >> k;
    std::cout << "연산자를 입력해주세요. \n(+ - * /) \n";
    std::cin >> vv;

    if(vv == '+'){
        std::cout << "연산결과는 " << g + k;
    }
    else if(vv == '-'){
        std::cout << "연산결과는 " << g - k;
    }
    else if(vv == '*'){
        std::cout << "연산결과는 " << g * k;
    }
    else if(vv == '/'){
        std::cout << "연산결과 몫: " << g / k << " 나머지는 " << g%k;
    }
}  //std::cout는 c에서 printf를 대체한다.;
    //std::cin은 c의 scanf를 대체한다.;

