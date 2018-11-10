#ifndef ADM_H
#define ADM_H

class adm:public base{
protected:
  char dolz[20];
  char tel[20];
  char otv[20];
public:
    adm(char *f, char *d, char *t,char *o);
    void seta(char *f, char *d, char *t,char *o);
        void show();
        void writea();
        ~adm();
};

#endif
