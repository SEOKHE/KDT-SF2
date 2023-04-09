#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

//숫자를 무작위로 3개 생성한다.
//생성된 숫자의 중복을 제거한다.
//각각을 인덱스 0~2까지 순서대로 배열에 저장한다.
//사용자에게 숫자를 3개 입력 받는다.
//생성된 숫자와 입력받은 숫자의 인덱스 값과 각각의 값을 비교한다.
//인덱스 값과 숫자 값이 모두 같으면 변수 strike를 해당 개수만큼 표시한다.
//겹치는 숫자 값만 있는 경우 변수 ball을 해당 개수만큼 표시한다.
//입력 받은 숫자가 1~9를 벗어난 숫자면 종료해버린다.


//상수 선언법 1
//#define SIZE 3//컴파일 되기전에 읽겠다. #define 상수명(전부 대문자) 상수 값 /예시는 SIZE 3을 선언함


int main(){
    //const int numer = 3; //상수 선언법 2, 이 방법은 배열의 값으로도 사용 가능

    std::srand(time(NULL));
    int cnum, j;
    int referee[3];
    int batter[3];
    int strike = 0;
    int ball = 0;
    int count = 0;

    for(int i = 0; i < 3; i++){
        cnum = std::rand();
        referee[i] = cnum %9 +1;
        for(j = 0; j < 3; j++){
            if(referee[i] == referee[j] && i != j){
                i--;
            }
        }
    }
    //referee 벡터의 인덱스 0~2까지 중복 없는 랜덤 숫자 생성 완료

    cout << endl << "1~9까지의 숫자를 입력해서 즐기는 숫자 야구!" << endl;
    cout << "--------------------------------------------" << endl;
    while(1){
        cout <<endl << "1~9까지 숫자를 3개 입력해주세요. (그 외 숫자 입력시 종료)" << endl;
        cin >> batter[0] >> batter[1] >> batter[2]; //
        cout <<endl;
        if(batter[0] < 1 || batter[0] > 9 || batter[1] < 1 || batter[1] > 9 || batter[2] < 1 || batter[2] > 9){
            cout << "1~9 사이의 숫자만 입력해주세요" << endl;
            break;
        }
        
        for(int i = 0; i < 3; i++){
            if(referee[i] == batter[i]){
                    strike++;
                }
            for(j = 0; j < 3; j++){
                if(referee[i] != batter[i] && referee[i] == batter[j]){
                    ball++;
                }
            }
        }
        count++;
        cout << "strike:" << strike << " ball:" << ball << endl;
        if(strike == 3){
            cout << endl << "총 " << count << "회 만에 클리어하셨습니다. 축하드립니다!!" << endl;
            break;
        }
        strike = 0;
        ball = 0;
        }
    cout << "정답: ";
    for(int i = 0; i < 3; i++){
        cout << referee[i] << " ";
    }
    cout << endl;
}