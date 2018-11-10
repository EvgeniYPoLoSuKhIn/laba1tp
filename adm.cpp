#include "head.h"
#include "adm.h"
   adm::adm(char *f, char *d, char *t,char *o){
          //  cout<<"вызов конструктора административный работник ";
            strcpy(tel,t);
            strcpy(fio,f);
            strcpy(dolz,d);
            strcpy(otv,o);
        }
    void adm::seta(char *f, char *d, char *t,char *o){
            strcpy(tel,t);
            strcpy(fio,f);
            strcpy(dolz,d);
            strcpy(otv,o);
        }
      void   adm::show(){
       cout<<"\nФИО: "<<fio;
       cout<<"\nДолжность: "<<dolz;
       cout<<"\nТелефон: "<<tel;
       cout<<"\nОтветсвенность: "<<otv;
       cout<<"\n";
       }
        void adm::writea(){
        ofstream ofs("text.txt", ios::app | ios::binary);
        ofs.write(reinterpret_cast<char*>(&fio), sizeof(fio));
        ofs.write(reinterpret_cast<char*>(&dolz), sizeof(dolz));
        ofs.write(reinterpret_cast<char*>(&tel), sizeof(tel));
        ofs.write(reinterpret_cast<char*>(&otv), sizeof(otv));
        ofs.close();
        }

        adm::~adm(){
       //cout<<"административный работник ";
       }

