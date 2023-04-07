#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;


// -1/ -2 / -3/ -4  -> 2로 나눈 몫을 빼준 위치에 1을 놓으면 중앙에 1 위치 가능 
//3 = 2/ 5 = 3/ 7 = 4/ 9 = 5 

int main(){
    int num;
    int count = 0, x = 0, y = num/2;
    

    while(1){
        cout << "홀수를 입력해주세요 : ";
        cin >> num;
        if(num %2 == 0){
            cout << "잘못된 수 입니다! 홀수를 입력해주세요!!" << endl;
        }
        else {
            break;
        }
    }

    int** arr = new int* [num];
    for(int i = 0; i < num; i++){
        arr[i] = new int [num];
    }
    
    while(1){
        for(int i = 0; i < num * num; i++){
            count++;
            if(x < 0){ //1행에서 마지막 행으로 이동
                x += num;
            }
            if(y > num){ // 마지막 열에서 1열로 이동
                y -= num;
            }
            arr[x][y] = count; //배열의 해당 주소에 값 입력
            if(count%num == 0){ // 값이 입력받은 홀수의 배수 일 경우 한칸 아래의 행으로 이동
                x++;
                continue;
            }
            x--;
            y++;
        }
        //출력부
        for(int i = 0; i < num; i++){
            for(int j = 0; j < num; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        break; //while문 탈출
    }
    
    for(int i = 0; i < num; i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}