#pragma once
#ifndef BASE_H
#define BASE_H
#include "head.h"
class base{
protected:
char fio[20];
public:
    base(){cout<<"����� ������������ base";};
   virtual void show()=0;
   ~base(){cout<<"����� ����������� base";};
};
#endif
