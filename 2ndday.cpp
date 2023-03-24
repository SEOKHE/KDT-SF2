#include <iostream>

// int add(int num1, int num2){
//     int result = num1 + num2;
//     return result;
// }

// int minus(int num1, int num2){
//     //인수의 순서에 상관없이 큰 수에서 작은수를 뺀 값 리턴
//     int result;

//     if(num1 > num2){
//         result = num1 - num2;
//     }
//     else{
//         result =  num2 - num1;
//     }
//     return result;
// }
// int multiple(int num1, int num2){
//    int result = num1 * num2;
//    return result;
// }

// float divide(int num1, int num2){
//     float result = (float)num1/(float)num2;
//     return result;
// }
// void cosi(int num){
//     std::cout << "입력한 수는 " << num;
//     int result = num%2;
//     if(result == 0){
//         std::cout << "\n짝수";
//     }
//     else{
//         std::cout << "\n홀수";
//     }
// }

int main(){
    // std::cout << add(1, 2) << "\n";
    // std::cout << minus(4, 2) << "\n";
    // std::cout << multiple(2, 3) << "\n";
    // std::cout << divide(8, 3) << "\n";
    // cosi(3);
    //for문 << 반복 횟수가 정해져있을 때 사용
    // std::cout << "\n";
    // //for(초기값; 조건문; 증감문)
    // for (int i = 0; i < 3; i++) {
    //     std::cout << "안녕하세요 \n";
    // }

    // std::cout << "\n";

    // for(int c = 9; c > 6; c = c -2) {
    //     std::cout << "어디계세요? \n";
    // }

    //while문 << 반복 횟수가 정해져 있지 않을 경우 사용, 작성시 항상 조건문에 유의
    // int c = 9;
    // while (c > 6) {
    //     std::cout << "어디계세요?";
    //     c = c - 2;
    // }

    // int order;
    // // 1 : true, 0 : false, c++에서는 참, 거짓 입력시 , 1 또는 0 으로 입력을 선호
    // while(1) {
    //     std::cout << "\n아메리카노(1) 라떼(2) 주문 종료(3)" << std::endl;
    //     std::cin >> order;

    //     if(order ==1){
    //         std::cout << "아메리카노 주문이 완료되었습니다\n";
    //     }
    //     else if (order ==2) {
    //         std::cout << "라떼 주문이 완료되었습니다\n";
    //     }
    //     else if(order ==3){
    //         break; //반복문을 탈출할 때 사용, 반복문 안에만 존재해야 함, 뒷 문장과 상관없이 등장과 동시에 반복문 종료
    //     }
    //     else {
    //         std::cout << "1~3 까지만 입력 바랍니다 문의는 DM으로 부탁드려요\n";
    //     }
    // }
    // std::cout << "주문이 모두 완료되었습니다\n";

    //do while문 조건문이 참인 경우 반복되는 명령문, 1번은 무조건 실행
    // int j = 0;
    // do{
    //     std::cout << "안녕하세여";
    //     j++;
    // } while(j < 3);

//실습1-1 
    // int n = 1;
    // std::cout << "5단 출력\n";
    // for(int g = 1; g < 10; g++){
    //     std::cout << "5 *" << n << "=" << 5 * n << "\n";
    //     n ++;
    // }

//실습1-2
      int n = 1;
      int v = 1;
    std::cout << "구구단 출력\n";
    for(int g = 1; g < 10; g++){
        std::cout << "\n" << v << "단 출력 \n";

        for(int m =1; m < 10; m++){
            std::cout << v << "*" << n << "=" << v * n << "\n";
            n ++;
        }
        n = 1;
        v ++;
    }

// //실습 2
//     int n;
//     int b = 0;
//     std::cout << "1부터 n까지의 합은 :\n";
//     std::cout << "숫자(양의 정수)를 입력하세요 :";
//     std::cin >> n;
//     std::cout << n << "\n";
    
//     for(int k = 1; k <= n; k ++){
//         b = b + k;
//     }
//     std::cout << "1부터"<< n << "까지의 합 구하기\n";
//     std::cout << b;

// //실습 3-1
//     int g = 1;
//     int n = 1;
//     std::cout << "5단 출력" << std::endl;
//     while(g < 10){
//         std::cout << "5 * " << n << " = " << 5 * n << "\n";
//         n++;
//         g++;
//     }
//     int gg = 1;
//     int mm =1;
//     int k = 1;
//     int v = 1;

//     std::cout << "\n구구단 출력\n";

//     while(gg < 10){
//         std::cout << "\n" << v << "단 출력 \n";
        
//         while(mm < 9){
//          std::cout << v << " * " << k << " = " << v * k << "\n";
//          k ++;
//          mm = mm +1;
//         } 
//         mm = 0;
//         k = 1;
//         v ++;
//         gg ++;
//     }

// //실습 4
//     int num;
//     std::cout << "사용자가 입력한 숫자 더하기\n";
//      int result1 = 0;
//     while(1){
//         std::cin >> num;
//         if(num != 0){
//          std::cout << "\n숫자를 입력하세요 (0: exit) :\n";
//          result1 = result1 + num;
//         }
//         else if(num == 0){
//             break;
//         }
        
//     }
//    std::cout << "사용자가 입력한 수의 합은 : " << result1 << "\n";
}
    //함수의 이름은 기능에 대한 내용을 내포하고 있어야 한다.

//  int test() {
//     int a = 2;
//     std::string b = "b";

//     return a;
//  }
//    //함수는 매개변수 여부, 반환값의 여부로 총 4가지 종류가 있다.   
//    //1. 매개변수 X, return X
// void test_1(){

//    }

//    //2. 매개변수 O, return X
// void test_2(int num, std::string str){
//     std::cout << "2. 매개변수 O, return X";
//    }

//    //3. 매개변수 O, return O << 그에 맞는 리턴값이 있어야함
// std::string test_3(int num, std::string str){

//     // 함수의 본문

//     return "test";
//    }

//    //4. 매개변수 X, return O
// int test_4(){

//    // 함수의 본문
//     std::cout << "test_4: 4. 매개변수 X, return O";
//     std::cout << "안녕";

//     return 4;
//    }

// // int multiple(int num1, int num2){
// //    int  x = num1 * num2;
// //    return x;
// // }

// void multiple(int num1, int num2){
//     std::cout << num1 * num2;
// }
// //매개변수는 함수의 외부에서 사용되는 값을 함수의 내부에서 사용하고 싶을 때
// //return(반환값) 함수의 내부에서 얻은 값을 함수의 외부에서 필요할 때

// void test_5();//기본적으로 모든 함수는 main 함수 위에 작성해야하나 특수한 경우 해당 함수의 원형만 위에 선언할 수 있다.
// std::string test_6(int num, std::string str);

// int main(){
//     multiple(5, 2);
//     // test_1();

//     // //인자 함수 밖에서 호출하는 값들 ex) 5, "str"
//     // test_2(5, "str");

//     // int num = 5;
//     // std::string str = "str";
//     // test_3(num, str);

//     // test_4();
//     // //std::cout << "test_4: 4. 매개변수 X, return O";
//     // //std::cout << "안녕"; 함수 본문을 실행하고 5가 된다.

//     test_5();
//     std::string test_6(int num, std::string str);
// }

// void test_5(){
//     std::cout << "test 함수입니다";
// }

// std::string test_6(int num, std::string str){

//     // 함수의 본문

//     return "test";
//    }