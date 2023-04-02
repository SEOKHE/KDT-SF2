#pragma once

#ifndef __SNACK_H__ 
#define __SNACK_H__ 
#include <iostream>

using std::string;

class Snack{
    static int cnt;

protected:
    int price; 
    string name;
    string co_name;
    string flavor;
    string shape;

public:
    Snack(string name);
    void setInfo();
    void getInfo();
    static int getCnt();
    void makeCnt();
};

#endif
