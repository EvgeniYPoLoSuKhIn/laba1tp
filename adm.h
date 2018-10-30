#ifndef ADM_H
#define ADM_H

class adm:public base{
protected:
  char dolz[20];
  int tel;
  char otv[20];
public:
    adm(char *f, char *d, int t,char *o);
    void seta(char *f, char *d, int t,char *o);
        void show();
        void writea();
        ~adm();
};

#endif
