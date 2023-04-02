// #include<> // .h가 붙어있지 않고 내가 만들지 않은 파일
// #include "" //내가 만든 파일
#include "Person.h"

using std::string;

int Person::cnt = 0;


Person::Person(string name) {
	this->name = name;
	plusCnt();
}

int Person::getCnt() {
	return cnt;
}

void Person::plusCnt() {
	cnt++;
}