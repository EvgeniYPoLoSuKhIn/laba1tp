#include "head.h"
#include "student.h"
        student::student(int k, char *f, char *g, double a){
          //  cout<<"вызов конструктора студент ";
            kurs=k;
            strcpy(fio,f);
            strcpy(group,g);
            avgball=a;
        }

        student::student(const student & arg){
            kurs=arg.kurs;
            strcpy(fio,arg.fio);
            strcpy(group,arg.group);
            avgball=arg.avgball;
        }

        void student::sets(int k, char *f, char *g, double a){
            kurs=k;
            strcpy(fio,f);
            strcpy(group,g);
            avgball=a;
        }
       void student::show(){
       cout<<"\nФИО: "<<fio;
       cout<<"\nГруппа: "<<group;
       cout<<"\nКурс: "<<kurs;
       cout<<"\nСредний балл: "<<avgball;
       cout<<"\n";
       }

        void student::writes(){
        ofstream ofs("text.txt", ios::binary|ios::app);
        ofs.write(reinterpret_cast<char*>(&fio), sizeof(fio));
        ofs.write(reinterpret_cast<char*>(&group), sizeof(group));
        ofs.write(reinterpret_cast<char*>(&avgball), sizeof(avgball));
        ofs.write(reinterpret_cast<char*>(&kurs), sizeof(kurs));
        ofs.close();
        }

       student::~student(){
       cout<<"вызов деструктора студент";
       }
