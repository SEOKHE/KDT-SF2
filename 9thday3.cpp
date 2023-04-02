// #include <iostream>

// using std::cin;
// using std::cout;
// using std::string;
// using std::endl;

// class Snack{
// protected:
//     int price;
//     string name;
//     string maker;
// public:
//     Snack(string name){
//         this->name = name;
//     }
//     void printName(){
//         cout << "상품 이름: " << name << endl;
//     }

//     string getName(){
//         cout << name;
//     }
// };

// class Candy : public Snack{
//     string flavor;
// public:
//     Candy(string name) : Snack(name){
//         this->flavor = "포도";
//     }
//     void printName(){
//         cout << flavor << "맛" << name << endl;
//     }
// };
// class Chocolate : public Snack{
//     string shape;
// public:
//     Chocolate(string name) : Snack(name){

//     }
// };
// int main(){
//     // Snack snackBasket[4] = {Candy("츄파"), Candy("알사탕"), Chocolate("가나"), Chocolate("페레로로쉐")};
//     Snack* snackBasket[4] = {new Candy("츄파"), new Candy("알사탕"), new Chocolate("가나"), new Chocolate("페레로로쉐")};
//     for(int i = 0; i <4; i++){
//         // snackBasket[i].printName();
//         snackBasket[i]->printName();
//     }

//     Candy*  candy = (Candy*) snackBasket[0];
//     candy->printName();
// }