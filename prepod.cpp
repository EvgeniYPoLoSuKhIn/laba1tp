#include "prepod.h"
#include "head.h"

    prepod::prepod(char *f, char *g,char *p){
         //   cout<<"����� ������������ ������������� ";
            strcpy(fio,f);
            strcpy(pgroup,g);
            strcpy(predm,p);
        }
     void prepod::setp(char *f, char *g,char *p){
            strcpy(fio,f);
            strcpy(pgroup,g);
            strcpy(predm,p);
     }
        void prepod::show(){
       cout<<"\n���: "<<fio;
       cout<<"\n��������� � �����: "<<pgroup;
       cout<<"\n��������� ��������: "<<predm;
       cout<<"\n";
       }

       void prepod::writep(){
        ofstream ofs("text.txt", ios::app | ios::binary);
        ofs.write(reinterpret_cast<char*>(&fio), sizeof(fio));
        ofs.write(reinterpret_cast<char*>(&pgroup), sizeof(pgroup));
        ofs.write(reinterpret_cast<char*>(&predm), sizeof(predm));
        ofs.close();
        }

       prepod::~prepod(){
     //  cout<<"����� ����������� �������������";
       }
