#pragma once

#ifndef __PERSON_H__ //_PERSON_H__가 정의 되어 있지 않다면
#define __PERSON_H__ //이하 내용이 전부 _PERSON_H__에 저장
#include <iostream>

using std::string;

class Person{
    static int cnt;
    string name;
public:
    Person(string name);
    static int getCnt();
    void plusCnt(); //선언부만 모음
};

#endif //if문이 끝난다.