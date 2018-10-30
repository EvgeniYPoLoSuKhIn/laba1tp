#ifndef KEPER_H
#define KEPER_H
#include "student.h"
#include "prepod.h"
#include "adm.h"
class keper{
private:
    student *s[10];
    prepod *p[10];
    adm *a[10];
    double vvoddb;
    int s1=0, p1=0,a1=0, vvodin,o;
    char vvod1[20], vvod2[20],vvod3[20],vvod4[20];
    public:
    void creates();
    void createp();
    void createa();
    void showp();
      void shows();
      void showa();
    void showall();
    void red(int t);
    void finish();
    void fenix();
    void reincornate();
     };
#endif
