#include <iostream>
#include "Person.h"
#include "Student.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
	Person p("김소연");
	Person p2("채동현");

	cout << "인원 : " << Person::getCnt() << endl;

	Student c("홍길동");
	cout << "인원 : " << Student::getCnt() << endl;
	return 0;
}