#include <iostream>
#include <vector>

using namespace std;

void test_5();

int main(){

    int i = 0;
    do{cout << "success" << endl;
    i++;
    } while(i < 0);

    //3일차 실습 5 별찍기
    int star;
    int j;
    std::cout << "층 수 입력" << std::endl;
    std::cin >> star;

    for(int i = 1; i <= star; i++){
        for(j = 0; j < i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
        j = 0;
    }
    test_5();
}

void test_5(){
    std::cout << "test 함수입니다";
}


