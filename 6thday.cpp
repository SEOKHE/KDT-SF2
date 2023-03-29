#include <iostream> //input output stream
#include <fstream> //file stream 파일의 입출력을 관장
#include <string> // get line이 포함됨
#include <vector>
//메소드 -> 클래스 안에 설정된 함수
using namespace std;

struct Position { //구조체는 main 함수 밖에 선언해야 함, 여러가지 변수를 하나로 묶어서 사용하기 위해 구조체를 사용함

    int x = 0;
    int y = 0;
};

struct Rectangle {
    int width = 0;
    int height = 0;
};


int main(){
    // ifstream file; //std::ifstream
    // file.open("hello.txt");
    
    // //string world1, world2;
    // string line;

    // if(file.is_open()){
    // //     // for(int i = 0; i < 3; i++){ //for 활용한 파일 읽기
    // //     //     // file >> world1 >> world2;
    // //     //     // cout << world1 << " " << world2 << endl;
    // //     //     getline(file, line);
    // //     //     cout << line << endl;
    // //     // }
    // //         //getline(file, line);
    // //             //파일의 내용, 저장할 변수
    //     while(getline(file, line)){//file이 끝날 때 false 반환
    //         cout << line << endl; //while을 활용한 파일 읽기, 파일 안의 내용이 얼마나 긴지 몰라도 사용 가능
    //     }
    // }
    // else cout << "fail\n";

    // file.close();

//get line 사용법
    // string line;
    // // cin >> line; //cin을 쓰면 띄어쓰기 전까지만 받음
    // getline(cin, line);
    // cout << line;

    // ofstream file2("bye.txt"); // C++이 알아서 파일을 생성해줌

    // if(!file2.fail()){
    //     file2 << "Bye world!\n" << "Bye Bye\n"; // 파일에 해당 내용 작성
    // }
    // else cout << "fail to open file\n";

    // file2.close();

        // ofstream file2("output.txt"); // C++이 알아서 파일을 생성해줌

    // if(!file2.fail()){
    //     file2 << "Bye world!\n" << "Bye Bye\n"; // 파일에 해당 내용 작성
    // }
    // else cout << "fail to open file\n";

    // file2.close();


// 실습 0번

    // ifstream file;
    // file.open("hello.txt");

    // string line2;
    
    // vector<string> v;

    // if(file.is_open()){
    //     while(getline(file, line2)){
    //         v.push_back(line2);
    //     }
    // }
    // else cout << "fail\n";

    // file.close();
    
    // ofstream file2("output.txt");
 
    // if(!file2.fail()){
    //     for(int i = v.size()-1; i>=0 ; i--){
    //     file2 << v[i] << endl;
    //     }
    // }
    // else cout << "fail to open file\n";
    
    // file2.close();

//실습 0 정답
    // ifstream infile("hello.txt");
    // ofstream outfile("output.txt");
    // string line;
    // vector<string> v1;
    // if(infile.is_open() && outfile.is_open()){
    
    // while(getline(infile, line)){
    //     v1.push_back(line);
    // }

    // for(int i = v1.size() - 1; i >= 0; i--){
    //     outfile << v1[i] << endl;
    // }

    // infile.close();
    // outfile.close();
    // }



//실습1 

    // string line3;
    // vector<string> v2;
    // ofstream file3("member.txt");

    // for(int i = 0; i < 3; i++){
    //     getline(cin, line3);
    //     v2.push_back(line3);
    // }

    // for(int i = 0; i < 3; i++){
    //     file3 << v2[i] << endl;
    // }
    // file3.close();

    // ifstream file3("member.txt");
    // cout << "회원 명부 파일 읽기";
    // file3 << endl;
    // file3.close();


//실습1 정답

    ofstream member_o("member.txt");
	
	cout << "3명의 회원에 대한 이름, 비밀번호를 순차적으로 입력하세요.\n";

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 회원 : ";

		string people;
		getline(cin, people);

		if (member_o.is_open()){
            cout << people << endl;
            member_o << people << endl;
        } 
	}
	member_o.close();

	ifstream member_r("member.txt");
	string line;

    cout << endl << "회원 명부 파일 읽기" << endl;

	if (member_r.is_open()) {
		while (getline(member_r, line)){
            cout << line << endl;
		}
	}

	member_r.close();

    // ofstream test("test.txt");
    // string str;
    // cin >> str;
    // if (test.is_open()) test << str << endl;
    // test.close();


//실습2 정답

    ifstream member("member.txt");
	string name, pw, name_in, pw_in;

	cout << endl << "이름을 입력하세요: ";
	cin >> name_in;

	cout << "비밀번호를 입력하세요: ";
	cin >> pw_in;

	bool is_login = false;

	// if (member.is_open()) {
	// 	while (member >> name >> pw) {
	// 		if (name_in == name && pw_in == pw) {
	// 			is_login = true;
	// 			break;
	// 		}
	// 	}

	// 	if (is_login) cout << "로그인 성공\n";
	// 	else cout << "로그인 실패\n";
	// }
	// else cout << "파일을 읽지 못하였습니다.\n";

	// member.close();
	
//실습 3
            //ofstream file("파일명.txt, ios::app") -> 내용 초기화 없이 이어 쓰기 가능
    ofstream member_tel("member_tel.txt, ios::app");
    string member_tele;
    
    if (member.is_open()) {
	    while (member >> name >> pw) {
		 if (name_in == name && pw_in == pw) {
			is_login = true;
			break;
		 }
		}
     if (is_login) {
        cout << "로그인 성공\n";
        cout << "전화번호를 입력하세요 : \n";
        getline(cin, member_tele);
        member_tel << name_in << member_tele << endl;

     }
	 else cout << "로그인 실패\n";
	}
	else cout << "파일을 읽지 못하였습니다.\n";

    member.close();
 


//구조체 
// Position p;
// p.x = 3;
// p.y = 5;

// cout << "x좌표 : " << p.x << " y좌표 : " << p.y << endl;

//구조체 실습1

    // int box;
    // Rectangle r;
    // cout << "가로 길이를 입력하세요 : ";
    // cin >> r.width;
    // cout << endl;

    // cout << "세로 길이를 입력하세요 : ";
    // cin >> r.height;
    // cout << endl;

    // cout << "넓이는 : " << r.width * r.height;
    // cout << endl;





}