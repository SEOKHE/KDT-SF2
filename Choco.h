#pragma once

#ifndef __CHOCO_H__
#define __CHOCO_H__
#include "Snack.h"

class Choco :public Snack{
    string shape;
    string name;
public:
    Choco(string shape, string name);
    void setInfo();
    void getInfo();
};

#endif
