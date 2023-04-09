#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

//랜덤함수를 이용해서 숫자 6개를 뽑아서 배열에 저장
//사용자가 입력한 숫자 6개를 배열2에 저장
//for + if 문 사용 배열의 인덱스 0~5번까지 사용자가 입력한 수와 비교해서
//같은거 있으면 정수형 변수에 1씩 증가
//정수형 변수에 저장된 값과 결과 출력을 위한 값 비교해서 개수에 따라 다른 결과 출력

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(){
    std::srand(time(NULL));
    int count = 0;
    int num;
    int rnum;
    int j = 1;
    vector<int> v1;
    vector<int> v2;

    for(int i = 1; i < 7; i++){
        rnum = std::rand();
        v1.push_back(rnum%25 +1);
        for(j = 1; j < v1.size(); j++){ //중복 없애는 용도
            if(v1[i] == v1[j]){ 
                i--;
            }
        }
    }

    cout << endl << "1~25까지 중복 없는 숫자 6개를 입력하면 당첨 결과를 알려드립니다!" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    for(int i = 1; i < 7; i++){
        cout << "숫자를 입력해주세요: ";
        cin  >> num;
        cout << endl;
        if(num > 25 || num <= 0){
            cout << "1~25 까지 입력해줘요" << endl << endl;
            i--;
        }
        else v2.push_back(num);
    }
    cout << "-----------------------------------------------------------------" << endl;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(v1[i] == v2[j]){
                count++;
            }
        }
    }

    cout << "당첨 번호 공개!" << endl;
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

    if(count == 0){
        cout << "7등입니다." << endl;
        cout << " ... " << endl;
        cout << "뭐야 아직도 안껐어요? " << endl<< endl;
    }
    else if(count == 1){
        cout << "6등입니다." << endl;
        cout << "뭐 좀 낫네요" << endl << endl;
    }
    else if(count == 2){
        cout << "5등입니다." << endl ;
        cout << "할만큼 했잖아요 이제 좀 가요." << endl << endl;
    }
    else if(count == 3){
        cout << "4등입니다." << endl ;
        cout << "..." << endl << endl;
    }
    else if(count == 4){
        cout << "3등입니다." << endl ;
        cout << "..." << endl << endl;
    }
    else if(count == 5){
        cout << "2등입니다." << endl ;
        cout << "..." << endl << endl;
    }
    else if(count == 6){
        cout << "1등입니다. 축하합니다." << endl;
        cout << " ... " << endl;
        cout << " ... " << endl;
        cout << "뭐요. 프로젝트 코드에 뭘 바래요." << endl;
        cout << "뭐 맡겨놨어요? 집으로나 가요." << endl << endl;
    }
    return 0;
}