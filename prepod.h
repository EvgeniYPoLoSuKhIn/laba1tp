#ifndef PREPOD_H
#define PREPOD_H

class prepod:public base{
protected:
    char pgroup[20];
    char predm[20];
public:
    prepod(char *f, char *g,char *p);
     void setp(char *f, char *g,char *p);
        void show();
       void writep();
       ~prepod();
};
#endif
