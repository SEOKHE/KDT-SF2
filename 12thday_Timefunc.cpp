#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

//맥에서는 clock()가 정상 동작하지 않는 경우가 있으니 time()를 사용할 것
int main(void){
    time_t startTime = time(NULL);
    int num;

    for(int i = 0; i < 3; i++){
        cout << "숫자를 입력해주세요" << endl;
        cin >> num;

    }
    //시간동안 동작할 코드

    time_t endTime = time(NULL);
    cout << "소요 시간: " << (endTime - startTime) << endl; //타임 함수를 사용할 경우, 1000을 나누지 않아도 됨, clock 함수를 써야 mm로 나오기 때문이다.
    
    return 0;
}