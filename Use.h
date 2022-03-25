#ifndef USE_H
#define USE_H
#include <iostream>
#include <fstream>
#include <Base.h>
using namespace std;
void Use(string Data)
{
  /*  ifstream ifs("C:/proC/untitled13/test.txt"); // создаем объект для считывания данных с файла

    string S;
    getline(ifs, S); // считываем строку из файла
    cout << S << endl; // выводим результат на экран*/

        ifstream F;
        int num, otv, ball = 0;
        F.open(Data+"C:/proC/untitled13/test.txt");
        F >> num;
        F.close();
        Base Baze[num];
        for(int i=0; i<num; i++)
        {
        Base Baze[i];
        }

        for(int i=1; i<num; i++)
        {
            F.open(Data+"C:/proC/untitled13/test.txt");
            getline(F >>ws, Baze[i].str1);
            getline(F >>ws, Baze[i].str2);
            getline(F >>ws, Baze[i].str3);
            F >> Baze[i].int1;
            F.close();

        }

        for(int i=0; i<num; i++)
        {

    cout << "Questions " << i+1<< ":" << '\n';
    cout << Baze[i].str1 << '\n'<< '\n';
    cout << "Answer options:" << '\n';
    cout << Baze[i].str2 << '\n';
    cout << Baze[i].str3 << '\n'<< '\n';
    cout << "You answer? (1 or 2)" << '\n';
    cin  >> otv;
    if(otv == Baze[i].int1)
    {
    ball += 1;
    }
    else
    {}
    system("cls");
    }
                   cout << "You scored " << ball << " point from " << num << " points max" << '\n';
                       cout << '\n';

}




#endif // USE_H
