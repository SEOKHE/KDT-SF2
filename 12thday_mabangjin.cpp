#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    int num;    
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

    int k, nmg, x = 0, y = num/2;

    for(k = 1; k < num * num; k++){
        arr[x][y] = k;
        nmg = k % num;
        if(nmg == 0){ //값이 입력받은 홀수의 배수 일 경우 한칸 아래의 행으로 이동
            x ++;
        }
        else if(--x < 0){ //1행에서 마지막 행으로 이동
            x = num - 1; 
        } if(++y == num){ // 마지막 열에서 1열로 이동
            y = 0;
        }
    }
    //출력부
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < num; i++){
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}