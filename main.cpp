#include <iostream>
#include <Base.h>
#include <Create.h>
#include <Question.h>
#include <Use.h>
using namespace std;


const string Data = "C:/proC/untitled13/";

    int main()
    {


        int n;
        cout<<"Choose what you want"<<'\n';
        cout << "1.Create" << '\n' << "2. Use being test" << '\n';
        cin >> n;
        system("cls");

        if (n == 1)
        {
            Create(Data);
        }
        else if (n == 2)
        {
            Use(Data);
        }
     }

