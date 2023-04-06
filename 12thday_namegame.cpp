#include <iostream>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main(void){
    time_t startTime = time(NULL);
    string word_o = "airplane";
    string word_n;
    
    
    int cnt;
    vector<string> ng;
    time_t endTime = time(NULL);
    
    
    ng.push_back(word_o);
    cout << "끝말 잇기~ 끝말 잇기~" << endl;
    cout << word_o << endl;
    while(1){
        cout << "다음 단어를 입력해주세요: ";
        cin >> word_n;
        int n = word_o.size();
        // int word_num = word_n.size();

        if(word_o[n-1] != word_n[0]){
            cout << "잘못된 단어 입니다. 다시 입력해주세요!" << endl;
            // cout << word_o << " " << word_n << endl; //word_o와 word_n의 값 확인을 위한 코드
        }
        else if(word_o[n-1] == word_n[0]){
            cnt++;
            ng.push_back(word_n);
            word_o = word_n;
            // cout << word_o << " " << word_n << endl; //word_o와 word_n의 값 확인을 위한 코드
            cout << endl;

            for(int i = 0; i < ng.size(); i ++){
            if(i != 0){
                cout << "-> ";
            }
            cout << ng[i] << " ";
            // cout << ng[i+1] << " ";
            }
            cout << endl;
        }
         //결과 값 나열을 분리해주기 위한 줄

        
        time_t endTime = time(NULL);
        
        if(endTime - startTime > 30){
            cout << "시간초과!! 펑!!!!";
            break;
        }
        
    }
    
    return 0;
}

//맨 앞 글자 출력
// string word = "hello";
// cout << word[0];

//맨 뒷 글자 출력
// int n = word.size();
// cout << word[n-1];