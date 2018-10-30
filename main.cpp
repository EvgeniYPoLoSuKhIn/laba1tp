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
cout << "\n0 - Выход" << endl;
cout << "1 - Просмотр базы данных" << endl;
cout << "2 - Добавление новой учетной записи Преподавателя" << endl;
cout << "3 - Добавление новой учетной записи студента" << endl;
cout << "4 - Добавление новой учетной записи административного работника" << endl;
cout << "5 - Редактировние записей" << endl;
cout << endl;
cin >> mode;
switch (mode) {
case 0:
running = false;
k.fenix();
break;

case 1:
cout << "Какие записи вы бы хотели увидеть? "<< endl;
cout << "1 - Все" << endl;
cout << "2 - Только студенты" << endl;
cout << "3 - Только преподаватели" << endl;
cout << "4 - Только адм. работники" << endl;
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
cout << "Какие учетые записи вы хотели бы редактировать? "<< endl;
cout << "1 - Записи преподавателей" << endl;
cout << "2 - Записи студентов" << endl;
cout << "3 - Записи адм. работников" << endl;
cin>>s;
k.red(s);
break;}}}



