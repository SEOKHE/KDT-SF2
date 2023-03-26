#include <iostream>
#include <vector> // STL 안에 있음

    //std::vector -> 기본 자료형이 아니므로 std::이 필요하다. 
    //자동으로 메모리를 할당해주는 배열
    //배열은 기본적으로 한 번 크기가 정해지면 그 크기가 고정되어 바뀌지 않음
    //vector를 사용하면 포인터를 쓰지 않아도 크기를 추후에 지정할 수 있음, 중간에 배열의 크기를 바꿀 수도 있음

    // using std::cout;// cout만 접근을 풀어주겠다
    using namespace std; //std 네임 스페이스의 모든 명령어의 접근을 풀어주겠다.
    // using namespace test;
    // namespace test {
    //     int num=2;
    // }

    namespace wooriBank {
        int balance;

        double deposit(int money){
             double money_d = (double)money;
            return (double)money + 0.03 * money; 
        }
    }

    namespace hanaBank {
        int balance;

        double deposit(int money){
             double money_d = (double)money;
            return (double)money + 0.05 * money; 
        }
    }

    namespace seoul {
        int localno;
        std::string landmark;
    }

    namespace busan {
        int localno;
        std::string landmark;
    }
    using namespace busan;

int main(){
    // std::vector<int> v; // == int v[] : 정수형 배열 생성
    // std::vector<int> v = { 1, 2, 3, 4, 5}; // 크기가 5인 배열, 원소가 1, 2, 3, 4, 5로 초기화
    // std::cout << v;
    // std::vector<int> v(4);// int형 백터 생성 후 크기를 4로 할당, 모든 값 0으로 초기화
    // std::vector<int> v(5, 1); // 크기가 5이고 백터의 모든 값을 1로 초기화
    // //{1,1,1,1}     (크기, 초기화 값)

    // std::vector<int> v;
    // v.assign(5,2); // 크기가 5인 배열을 만들고 모든 값을 2로 초기화

    // std::vector<int> v(6);

    // v.size(); //벡터 v의 사이즈를 반환.
    // for(int i = 0; i < v.size(); i++){
    //     std::cout << v[i] << " ";
    //     std::cout << v.at(i) << std::endl;
    // }



    // std::vector<std::string> v; // == std::string v[] : 문자열 형태의 배열 생성
    // std::vector<std::string> v1(5, "aa");
    // v.assign(5,2); //크기가 5인 배열을 만들고 모든 값을 2로 초기화
    // v.size(); //벡터 v의 사이즈를 반환.
    // for(int i = 0; i < v.size(); i++){
    //     // std::cout << v[i] << " "; //
    //     std::cout << v.at(i) << std::endl; //인덱싱하는 함수 배열명.at()
    // }

    // for(int i = 0; i < 6; i++){
    //     std::cout << v[i] << " "; // out of range가 발생해도 오류를 제대로 전달해주지 않음
    //     std::cout << v.at(i) << std::endl; // 오류를 잘 잡아줌
    // }
    //{2,2,2,2,2}


    // v.push_back(6); // 배열명.push_back(원소) : 벡터의 제일 마지막에 원소를 추가(push)함 {2,2,2,2,2,6}
    // v.push_back(7);
    // //{2,2,2,2,2,6,7}
    // v.pop_back(); // 제일 마지막 원소를 꺼낸다. {2,2,2,2,2,6}
    // // v.insert(자리 , 숫자 ); //원하는 자리에 원하는 원소 입력
    // v.begin(); // vector의 시작 주소를 반환함 == index 0
    // v.insert( v.begin(), 5);
    // //{5,2,2,2,2,2,6}
    // v.erase(v.begin(), v.begin() + 3); // 삭제 범위 지정 가능
    // //{2,2,2,6}
    // for(int i = 0; i < v.size(); i++){
    //     // std::cout << v[i] << " "; // 인덱스 오류가 발생했을 때 발견하지 못할 위험이 발생함
    //     std::cout << v.at(i) << std::endl; // 
    // }
    // v.clear(); // 벡터를 초기화 하는 함수 -> { }
    // v.front(); //
    // v. back(); //


    // std::vector<std::vector<int> > v2 = {{1, 2}, {3, 4}}; //벡터를 활용한 2차원 동적배열
    // for(int i = 0; i < v2.size(); i++){
    //     for(int j = 0; j < v2.at(i).size();j++){
    //         std::cout << v2.at(i).at(j) << " ";
    //     }
    //     std::cout << std::endl;
    // }

//실습 1
    // int num1;
    // int num2;

    // while(1){
    //     std::cout << "x를 입력해주세요 : ";
    //     std::cin >> num1;
    //     std::cout << std::endl;

    //     if(num1 <= 0){
    //         std::cout << "x와 y 모두 양수를 입력해주세요.";
    //     }
    //     else if(num1 > 0){
    //     std::cout << "y를 입력해주세요 : ";
    //     std::cin >> num2;
    //     std::cout << std::endl;
    //     }
    //     else if(num2 <= 0){
    //         std::cout << "x와 y 모두 양수를 입력해주세요.";
    //     }
    //     else if(num1 > 0 && num2 > 0){
    //         break;
    //     }
    //     break;
    // }
    // int cro = 1;
    // std::vector<std::vector<int>> v1(num1, std::vector<int>(num2));

    // for(int i = 0; i < v1.size(); i++){
    //     for(int j = 0; j < v1.at(i).size();j++){
    //         v1.at(i).at(j) = cro;
    //         cro++;
    //     }
    //     std::cout << std::endl;
    // }

    // for(int i = 0; i < v1.size(); i++){
    //     for(int j = 0; j < v1.at(i).size();j++){
    //         std::cout << v1.at(i).at(j) << " ";
    //     }
    //     std::cout << std::endl;
    // }

//실습 2
    // int num;
    // int i = 0;
    // int result1 = 0;
    

    // while(1){
    //     cout << "숫자를 입력하세요 (0: exit) : ";
    //     cin >> num;

    //     if(num != 0){
    //         result1 = result1 + num;
    //         i++;
    //     }
    //    else if(num == 0){
    //         break;
    //     }
    // }
    // vector<int> v(2);
    // v.push_back(result1);
 
    // cout << "사용자가 입력한 수의 합은 : " << v.at(2);


    //식별자: 변수, 함수 이름
    //중복된 이름으로 인한 충돌을 피하기 위한 것
    // int num = 0;
    // cout << num << endl;

//namespace 실습 1 최상단의 namespace와 연계해서 생각할것
    // seoul::localno = 02;
    // seoul::landmark = "남산";
    // localno = 51;
    // landmark = "범어사";
    
    // cout << "서울의 지역번호 : ";
    // cout << seoul::localno;
    // cout << endl;
    // cout << "서울의 랜드마크 : ";
    // cout << seoul::landmark;
    // cout << endl;
    // cout << "부산의 지역번호 : ";
    // cout << localno;
    // cout << endl;
    // cout << "부산의 랜드마크 : ";
    // cout << landmark;
}