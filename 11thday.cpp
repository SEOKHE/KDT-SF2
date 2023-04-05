#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;



int main(){
    std::srand(time(NULL));
    
    int num1, num2;
    std::vector<int> lotto;

    for(int i = 1; i < 7; i++){
        int num = std::rand();
        int tmp = num % 45 + 1;
        lotto.push_back(tmp);
        for(int j = 0; j < lotto.size(); j++){
            if(lotto[i] == lotto[j]){ // lotto 벡터 안의 원소와 새로운 num이 중복이 아니라면
                i--;
            }
        }
    }

    cout << "로또 당첨 번호" << endl;

    for(int k = 0; k < 6; k++){
        cout << lotto[k] << " ";
    }
    cout << endl;

}