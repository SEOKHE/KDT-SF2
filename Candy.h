#pragma once

#ifndef __CANDY_H__
#define __CANDY_H__
#include "Snack.h"

class Candy : public Snack{
    string flavor;
    string name;
public:
    Candy(string flavor, string name);
    void setInfo();
    void getInfo();
};

#endif
