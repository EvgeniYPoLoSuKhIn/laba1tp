#include "head.h"
#include "keper.h"

    void keper::creates(){
         //std::cin.exceptions(std::istream::badbit | std::istream::failbit);
        cout<<"������� ��� ��������: ";
        cin>>vvod1;
        cout<<"������� ������ ��������: ";
        cin>>vvod2;
	    cout<<"������� ���� ��������: ";
	    z:
	    if (!(cin >> vvodin)){
        cin.clear();
        cin.ignore();
        cout << "error ����������� ����, ������� ���������� ���� ��������: ";
        goto z;
        }
        cout<<"������� ������� ���� ��������: ";
        x:
	    if (!(cin >> vvoddb)){
        cin.clear();
        cin.ignore();
        cout << "error ����������� ����, ������� ���������� ������� ���� ��������: ";
        fl=1;
        goto x;
        }
        s[s1]=new student(vvodin,vvod1,vvod2,vvoddb);
        s1++;
    }

    void keper::createp(){
        cout<<"������� ��� �������������: ";
        cin>>vvod1;
        cout<<"������� �����, ������� �� �����: ";
        cin>>vvod2;
        cout<<"������� ��������, ������� �� �����: ";
        cin>>vvod3;
        p[p1] =new prepod(vvod1, vvod2,vvod3);
        p1++;
    }

    void keper::createa(){
        cout<<"������� ��� ���. ���������: ";
        cin>>vvod1;
        cout<<"������� ���������: ";
        cin>>vvod2;
        cout<<"������� �������: ";
        cin>>vvod4;
        cout<<"������� �� ��� �� �������������: ";
        cin>>vvod3;
        a[a1] =new adm(vvod1,vvod2,vvod4,vvod3);
        a1++;
    }

    void keper::showp(){
        cout<<"\n\n�������������:";
        for(int i=0;i<p1;i++)
        p[i]->show();
    }

      void keper::shows(){
        cout<<"\n\n��������:";
        for(int i=0;i<s1;i++)
        s[i]->show();
    }

      void keper::showa(){
        cout<<"\n\n���������������� ���������:";
      for(int i=0;i<a1;i++)
        a[i]->show();
    }


    void keper::showall(){
       showp();
       shows();
       showa();
  }

  void keper::red(int t){
  if(t==1){
    showp();
    cout<<"����� �� ����� ������ �� ������ �� ���������������?(������ ������ - 0 �� �����)";
    cin>>o;
    cout<<"������� ��� �������������: ";
    cin>>vvod1;
    cout<<"������� �����, ������� �� �����: ";
    cin>>vvod2;
    cout<<"������� ��������, ������� �� �����: ";
    cin>>vvod3;
    p[o]->setp(vvod1, vvod2,vvod3);
  }
    if(t==2){
     shows();
     cout<<"����� �� ����� ������ �� ������ �� ���������������?(������ ������ - 0 �� �����)";
     cin>>o;
     cout<<"������� ��� ��������: ";
     cin>>vvod1;
     cout<<"������� ������ ��������: ";
     cin>>vvod2;
     cout<<"������� ���� ��������: ";
     cin>>vvodin;
     cout<<"������� ������� ���� ��������: ";
     cin>>vvoddb;
     s[o]->sets(vvodin,vvod1,vvod2,vvoddb);
    }
    if(t==3){
        showa();
        cout<<"����� �� ����� ������ �� ������ �� ���������������?(������ ������ - 0 �� �����)";
        cin>>o;
        cout<<"������� ��� ���. ���������: ";
        cin>>vvod1;
        cout<<"������� ���������: ";
        cin>>vvod2;
        cout<<"������� �������: ";
        cin>>vvod3;
        cout<<"������� �� ��� �� �������������: ";
        cin>>vvod4;
        a[o]->seta(vvod1,vvod2,vvod4,vvod3);
    }
  }


    void keper::fenix(){
    ofstream e("text.txt",ios::binary);
    e.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    e.write(reinterpret_cast<char*>(&p1), sizeof(p1));
    e.write(reinterpret_cast<char*>(&a1), sizeof(a1));
    e.close();
    if(s1!=0){
    for(int i=0;i<s1;i++)
    s[i]->writes();}
    if(p1!=0){
    for(int i=0;i<p1;i++)
    p[i]->writep();}
    if(a1!=0){
    for(int i=0;i<a1;i++)
    a[i]->writea();}
    e.close();
    }


    void keper::reincornate(){
 try
        {
            ifstream ifs("text.txt", ios::binary);
            if (!ifs)
            {
                throw 404;
            }
            else
            {
                ifs.read(reinterpret_cast<char*>(&s1), sizeof(s1));
     ifs.read(reinterpret_cast<char*>(&p1), sizeof(p1));
     ifs.read(reinterpret_cast<char*>(&a1), sizeof(a1));

    if(s1!=0)
     for(int i=0;i<s1;i++){
     ifs.read(reinterpret_cast<char*>(&vvod1), sizeof(vvod1));
     ifs.read(reinterpret_cast<char*>(&vvod2), sizeof(vvod2));
     ifs.read(reinterpret_cast<char*>(&vvoddb), sizeof(vvoddb));
     ifs.read(reinterpret_cast<char*>(&vvodin), sizeof(vvodin));
     s[i]=new student(vvodin,vvod1,vvod2,vvoddb);
     }
    if(p1!=0)
     for(int i=0;i<p1;i++){
     ifs.read(reinterpret_cast<char*>(&vvod1), sizeof(vvod1));
     ifs.read(reinterpret_cast<char*>(&vvod2), sizeof(vvod2));
     ifs.read(reinterpret_cast<char*>(&vvod3), sizeof(vvod3));
     p[i]=new prepod(vvod1,vvod2,vvod3);
     }
     if(a1!=0)
     for(int i=0;i<a1;i++){
     ifs.read(reinterpret_cast<char*>(&vvod1), sizeof(vvod1));
     ifs.read(reinterpret_cast<char*>(&vvod2), sizeof(vvod2));
     ifs.read(reinterpret_cast<char*>(&vvodin), sizeof(vvod4));
     ifs.read(reinterpret_cast<char*>(&vvod3), sizeof(vvod3));
     a[i]=new adm(vvod1,vvod2,vvod4,vvod3);
     }
     ifs.close();
            }
        }
        catch(int i)
        {
            cout<<"error "<<i<< " - ���� �����������!"<<endl;
            ofstream outfile("text.txt", ios::app);
            outfile.close();
        }
     }
