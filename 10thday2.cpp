// #include <iostream>
// #include <vector>

// using std::cin;
// using std::cout;
// using std::string;
// using std::endl;
// using std::vector;

// //실습1
// class Snack{
// protected:
//     int price = 300;
//     string name;
//     string co_name = "롯데제과";
    
// public:
//     static int cnt;
//     Snack(string name){
//         this->name = name;
//         getCnt();
//     }
    
//     virtual void getInfo(){
//         cout << name << price << "원 " << co_name << " 제품 입니다" << endl;
//     }

//     static int getCnt(){
//         return cnt;
//     }
//     void plusCnt(){
//         cnt++;
//     }
// };

// class Candy : public Snack{
//     string taste;
//     string name;
// public:
//     Candy(string taste, string name) : Snack(name){
//         this->taste = taste;
//         this->name = name;
//         plusCnt();
//     }

//     void getInfo(){
//         cout << taste  << " " << name << " 입니다" << endl;
//     }

   
// };

// class Chocolate : public Snack{
//     string shape;
//     string name;
// public:
//     Chocolate(string shape, string name) : Snack(name){
//         this->shape = shape;
//         this->name = name;
//         plusCnt();
//     }

//     void getInfo(){
//         cout << shape << " " << name << " 입니다" << endl;
//     }
// };

// int Snack::cnt = 0;

// int main(){
//     // Candy c1 = Candy("초코맛", "츄파츕스");
//     // Candy c2 = Candy("딸기맛", "별사탕");
//     // Chocolate cho1 = Chocolate("막대 모양", "가나 초콜릿");
//     // Chocolate cho2 = Chocolate("동전 모양", "동전 초콜릿");

//     // Snack* snackBasket[4] = {&c1, &c2, &cho1, &cho2}; 

//     int i = 0;
//     int num;
//     string name;
//     string taste;
//     string shape;
//     vector<string> snackBasket[];

//     while(1){
//         cout << "과자 바구니에 추가할 간식을 고르시오 (1: 사탕 2: 초콜릿 0: 종료) :" << endl;
//         cin >> num;
//         if(num ==0){
//             break;
//         }
//         else if(num ==1){
//             cin >> taste;
//             Candy cand = Candy(taste , "맛 사탕");
//         }
//          else if(num ==2){
//             cin >> shape;
//             Chocolate choco = Chocolate(shape , "모양 초콜릿");
//         }
//         else cout << "0~2 사이의 숫자를 입력하세요!" << endl;
//     }
//     cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::getCnt() << "개 입니다" << endl;

//     for(int i = 0; i < snackBasket.size(); i++){
//         snackBasket(i).getInfo();
//     } 
// }