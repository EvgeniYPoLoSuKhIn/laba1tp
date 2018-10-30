#pragma once
#ifndef STUDENT_H
#define STUDENT_H

class student:public base{
    protected:
    char group[20];
    int kurs;
    double avgball;
    public:
    student(int k, char *f, char *g, double a);
    void sets(int k, char *f, char *g, double a);
    void show();
    void writes();
    ~student();
};
#endif
