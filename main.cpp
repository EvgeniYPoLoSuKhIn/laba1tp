#include "base.h"
#include "keper.cpp"
#include "student.cpp"
#include "prepod.cpp"
#include "adm.cpp"
int main()
{
    setlocale(LC_ALL, "Russian");
    keper k;
    k.reincornate();
bool running = true;
int mode,s;
while (running) {
cout << "\n0 - �����" << endl;
cout << "1 - �������� ���� ������" << endl;
cout << "2 - ���������� ����� ������� ������ �������������" << endl;
cout << "3 - ���������� ����� ������� ������ ��������" << endl;
cout << "4 - ���������� ����� ������� ������ ����������������� ���������" << endl;
cout << "5 - ������������� �������" << endl;
cout << endl;
cin >> mode;
switch (mode) {
case 0:
running = false;
k.fenix();
break;

case 1:
cout << "����� ������ �� �� ������ �������? "<< endl;
cout << "1 - ���" << endl;
cout << "2 - ������ ��������" << endl;
cout << "3 - ������ �������������" << endl;
cout << "4 - ������ ���. ���������" << endl;
cin>>s;
if(s==1)
k.showall();
if(s==2)
k.shows();
if(s==3)
k.showp();
if(s==4)
k.showa();
break;

case 2:
k.createp();
break;

case 3:
k.creates();
break;

case 4:
k.createa();
break;

case 5:
cout << "����� ������ ������ �� ������ �� �������������? "<< endl;
cout << "1 - ������ ��������������" << endl;
cout << "2 - ������ ���������" << endl;
cout << "3 - ������ ���. ����������" << endl;
cin>>s;
k.red(s);
break;}}}



