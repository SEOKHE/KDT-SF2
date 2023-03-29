#include <iostream>

int main(){
    // int num = 1; //변수의 선언과 초기화가 동시에 발생
    // int num1; //변수의 선언
    // num1 = 0; //변수의 초기화, 할당
    // //          변수명[변수 크기==갯수] = {변수 이름들}
    // std::string fruit[3] = {"apple", "banana", "mango"};
    // //배열은 선언시, 크기가 정해져야 함
    // // std::string fruit[] = {"apple", "banana", "mango"};
    // //선언과 초기화를 동시에 수행할 시에는 자동으로 초기화 값을 입력받기 때문에 크기를 안정해도 오류 X

    // std::cout << fruit; //fruit의 주소값이 출력됨
    // std::cout << fruit[0] << std::endl; //배열을 사용하게 되면 [] 안의 숫자는 크기가 아니라 인덱스 숫자가 된다.
    // std::cout << fruit[1] << std::endl; // std: st library의 명령어, endl: stl 안의 enter 키를 의미하는 명령어
    // std::cout << fruit[2] << std::endl;

    // //int num[3]; //12 byte
    // //sizeof(num) => 12


    // //int : 4 byte
    // //string : ex. 8 byte
    // //sizeof() : 변수, 자료형의 크기를 byte 단위로 반환해준다.
    // //배열과 for문은 짝을 이뤄 쓰기 용이하므로 많이 쓰면서 익숙해지는 것이 좋다.
    // for(int i = 0; i < sizeof(fruit)/sizeof(std::string); i++){
    //     std::cout << fruit[i] << std::endl;

    // }

    // for(int i = 0; i < sizeof(fruit)/sizeof(fruit[0]); i++){
    //     std::cout << fruit[i] << std::endl;

    // }

    // int size = sizeof(fruit)/sizeof(fruit[0]);
    // for(int i = 0; i < size; i++){
    //     std::cout << fruit[i] << std::endl;

    // }

    // // for(int i = 0; i < 3; i++){
    // //     std::cin >> fruit[i] << std::endl;

    // // }

    // std::string fruit2[3]; //배열의 선언
    // fruit2[0] = "apple"; //모든 프로그램에서 index는 0 부터 시작한다.
    // fruit2[1] = "banana";
    // fruit2[2] = "mango";

    //2 2 2 
    //1 2 3
    // 행의 갯수, 열의 갯수
    // int num[2][3] ={{2, 2, 2},{1, 2, 3}};

    // //"a", "b", "c", "d"
    // //"e", "f", "g", "h"
    // std::string abc[2][4] = {{"a", "b", "c", "d"},{"e", "f", "g", "h"}};
    // // std::cout << abc[1][1];

    // //num의 모든 원소가 행렬 
    // // for(int j = 0; j < 2; j++){
    // //     for(int k = 0; k < 3; k++){
    // //         std::cout << num[j][k] << " ";
    // //     }
    // //     std::cout << "\n"; // == std::cout << std::endl;
    // // }

    // int num2[3] = {1, 2, 3};
    // for(int i = 0; i < 3; i++){
    //     std::cout << num2[i] << " ";
    // } 
    // std::cout << std::endl;

    //for each 문법 for(자료형 변수이름 : 배열){}
    // n = 1
    // n = 2
    // n = 3
    // for(int n : num2){
    //     std::cout << n << " ";
    // }
    // std::cout << std::endl;

    // for(auto n : num2){
    //     std::cout << n << " ";
    // }
    // std::cout << std::endl;

    // for(auto &n : num2){
    //     std::cin >> n;
    // }
    // std::cout << std::endl;

    // for(auto &arr : abc){
    //     for(auto a : arr){
    //         std::cout << a << " ";
    //     }
    //     std::cout << std::endl;
    // }

    //실습1
    std::string city[5] = {"USA", "GBK", "SPAIN", "ITALY", "FRENCH"};
    for(int arr = 0; arr < 5; arr++){
        std::cout << city[arr] << " ";
    }

    //실습2
    // std::string city2[5];
    // for(int name = 0; name < 5; name ++){
    //     std::cin >> city2[name];
    // }
    // for (auto &arr : city2){
    //     std::cout << arr << " ";
    // }

    //실습3
    // int grade[5];
    // for(int grd = 0; grd < 5; grd++){
    //     std::cout << grd + 1 << "번 학생의 성적을 입력하세요: ";
    //     std::cin >> grade[grd];
    //     std::cout << std::endl;
    // }
    // int summ = 0;
    // for(int sum = 0; sum < 5; sum++){
    //     summ = summ + grade[sum];
    // }
    // int avg = summ / 5;
    // std::cout << "성적 평균은 " << avg <<" 입니다";

    //실습4
    // int grade[3][2];
    // int c;
    // for(int f = 0; f < 3 ; f++){
        
    //         std::cout << f +1 << "번 학생의 국어 성적을 입력해 주세요: ";
    //         std::cin >> grade[f][c];
    //         c++;
    //         std::cout << f +1 << "번 학생의 수학 성적을 입력해 주세요: ";
    //         std::cin >> grade[f][c];
    //         c = 0;
        
    // }
    // int gsum = 0;
    // for(int sum = 0; sum < 3; sum++){
    //     gsum = gsum + grade[sum][0];
    // }
    // int gavg = gsum / 3;
    // std::cout << "국어 성적의 평균은 " << gavg << "입니다" << std::endl;

    //  int msum = 0;
    // for(int sum = 0; sum < 3; sum++){
    //     msum = msum + grade[sum][1];
    // }
    // int mavg = msum / 3;
    // std::cout << "수학 성적의 평균은 " << mavg << "입니다" << std::endl;

    //실습5(추가 실습2) 미완성!!!!
    // int correct[3] = { 1, 8, 5 };
    // int user[3];

    // for(int num = 0; num < 3; num++){
    //     std::cout << "숫자를 3개 입력해 주세요: ";
    //     std::cin >> user[num];
    // }
    // int sum = 0;
    // for(int compare = 0; compare < 3; compare++){
    //     int cnum = 0;
    //     if(user[0]==correct[cnum]){
    //         sum++;
    //         cnum++;
    //     }
    //     else if(user[1]==correct[cnum]){
    //         sum++;
    //         cnum++;
    //     }else if(user[2]==correct[cnum]){
    //         sum++;
    //         cnum++;
    //     }
    // }
    // std::cout << sum << "개 맞춤!";

    //동적 배열과 포인터
    // int num[3];

    // // //사용자한테 입력받은 수로 배열의 크기를 지정할 때
    // int size;
    // std::cin >> size;
    // int num1[size];
    //동적 배열: 배열의 크기를 나중에 정하고 싶을 때 사용하는 배열
    //포인터: 메모리의 주소를 가진 변수, 포인터 변수는 *을 이용하여 선언
   
    // int n = 3;
    // int *p = &n; // == int* p, 포인터 변수
    // p = &n; //p에 n의 주소값을 넣는다.
    // std::cout << p << std::endl;
    // //그냥 변수 이름으로 접근하면 주소값을 출력한다. n의 주소값
    // std::cout << *p;
    // //p가 가리키고 있는 주소에 들어간 실제 값을 출력
    // *p = 5; //p는 같은 주소 값을 갖지만 *p로 인해 n의 값이 바뀌었으므로 5가 출력된다.


    // std::string str = "aaa";
    // std::string *str_p = &str;

    // std::cout << str_p << std::endl;
    // std::cout << *str_p << std::endl;

    // int &num = n; // 참조변수: 선언할때 &가 붙으면 뒤에 오는 변수의 별명을 붙인다, 존재하는 것에 별명을 붙이는 것
    // // n이라는 변수가 있는데, n이라는 변수에 num이라는 별명을 붙인 상황이다.
    // std::cout << n << std::endl;
    // std::cout << &n << std::endl;
    // std::cout << num << std::endl;
    // // std::cout << *num << std::endl;
    // std::cout << &num << std::endl;

    //포인터: 메모리 주소를 저장하는 변수
    //포인터를 이용하면, 동적 메모리를 생성할 수 있다.
    //포인터가 나오기 전에 배운 변수, 배열 -> 정적 메모리 ex) int n;, int arr[3];
    //힙 영역: 동적 메모리가 저장됨, 할당과 해제를 직접 관리해줘야 함 -> 필요 없어진 것은 직접 삭제 해줘야 한다는 뜻
    //스택 영역: 정적 메모리가 저장됨, 빌드할 때 크기가 지정 되어 있어야함

    // int n = 3;
    // int *p = &n; // *p가 가리키는 것이 결국 정적 메모리 n이므로 이것은 정적 메모리를 사용하는 포인터
    //             // 즉, 포인터를 이용하면 동적 메모리를 생성할 수 있다는 것이지, 포인터를 이용한 모든 변수가 동적 메모리는 아님!!
    // int *p = new int; // 힙 영역에 위치한 new로 동적 메모리에 할당

    // delete p; //p가 필요없어진 순간에 delete를 사용해서 없애줘야 함, 힙 영역에서 사용한 코드를 전부 반납한 후 코드가 끝나야 좋은 코드임

    //동적 배열
    // int num;
    // std::cout << "크기를 입력하세요";
    // std::cin >> num; // 5
    // // // int arr[num];
    // int *arr = new int[num]; //new를 사용해 동적 배열 생성

    // for(int i = 0; i < num; i++){
    //     arr[i] = i + 1;
    // }
    // //arr = {1, 2, 3, 4, 5}

    // for(int i = 0; i < num; i++){
    //     std::cout << arr[i] << " ";
    // }


    // delete[] arr; //배열을 해제하는 방법은 delete 뒤에 []를 붙인다

    // std::string *str = new std::string[num];
    // for(int i = 0; i < num; i++){
    //     str[i] = 65 + i;
    // }




// //    //num * num 행렬
// //    //int *arr1 = new int[num]; //일차원 동적 배열
//    int **arr2 = new int*[num]; //2차원 동적 배열//
// //    //{{},{},{}} 큰 배열안에 들어가는 배열마저도 동적이므로 포인터로 선언한다.

//    for(int i = 0; i < num; i++){
//     arr2[i] = new int[num];
//     //{{ , , },{},{}}
//     //i가 0일 때, i기 1일 때, i가 2일 때
//    }

//    for(int i = 0; i < num; i++){
//     for(int j = 0; j < num; j++){
//         arr2[i][j] = 1;
//     }
//    }
//    for(int i = 0; i < num; i++){
//     for(int j = 0; j < num; j++){
//         std::cout << arr2[i][j] << " ";
//     }
//     std::cout << std::endl;
//    }

//     for(int i = 0; i < num; i++){
//         delete[] arr2[i];
//         //{ , , , }
//     }
//     delete[] arr2;
//     //{ }

//동적배열 실습1
    // int x;
    // int y;
    // while(1){
    //  std::cout << "x를 입력하세요: ";
    //  std::cin >> x;
    //  std::cout << std::endl;
    //  if(x <= 0){
    //     std::cout << "x와 y 모두 양수를 입력해주세요\n";
    //  }
    //  else{
    //     std::cout << "y를 입력하세요: ";
    //     std::cin >> y;
    //     std::cout << std::endl;
    //     if(y <= 0){
    //         std::cout << "x와 y 모두 양수를 입력해주세요\n";
    //     }
    //     else{
    //         break;
    //     }
    //  }

    // }
    // int **arr = new int*[x];
    // int obj = 1;
    // for(int i = 0; i < x; i++){
    //     arr[i] = new int [x];
    // }
    
    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++){
    //         arr[i][j] = obj;
    //         obj++;
    //     }
    // }

    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++){
    //         std::cout << arr[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // for(int i = 0; i < x; i++){
    //     delete[] arr[i];
    // }

    // delete[] arr;

//동적배열 실습2
    int num1;
    std::cout << "성적 평균을 구할 학생의 수를 입력해주세요: ";
    std::cin >> num1;
    std::cout << std::endl;
    int num2;
    int num3 = 0;
    int *arr = new int[num1];
    for(int i = 0; i < num1; i++){
        std::cout << i + 1 << "번 학생의 성적을 입력하세요: ";
        std::cin >> num2;
        arr[i] = num2;
        num3 = num3 + num2;
    }
    std::cout << "성적평균 : " << num3/num1;
    std::cout << std::endl;

    delete[] arr;
}