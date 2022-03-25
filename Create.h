#ifndef CREATE_H
#define CREATE_H
#include <Question.h>
#include <iostream>
#include <fstream>
using namespace std;

void Create(string Data)
{


    ofstream fQuestion;
    string question, v1, v2;
    int n, correct;

    cout << "Number of questions?" << '\n';
    cin >> n;

    fQuestion.open("C:/proC/untitled13/test.txt");
    fQuestion << n;
    fQuestion.close();

    Question a[n];
    for(int i=0; i<n; i++)
    {
        Question a[i];
    }

     for(int i=0; i<n; i++)
     {

    cout << "Fill " << i + 1 << " Question";
    cout << endl;

    cout << "Your option" << '\n' << ">>> ";
    getline(cin >>ws, question);
    a[i].questioN = question;
    cout << endl;

    cout << "1 var" << '\n';
    getline(cin >>ws, v1);
    a[i].V1= v1;
    cout << endl;

    cout << "2 var" << '\n';
    getline(cin >>ws, v2);
    a[i].V2 = v2;
    cout << endl;

    cout << "True is 1 or 2" << '\n';
    cin >> correct;
    a[i].Good = correct;
    cout << endl;

    fQuestion.open(Data+"C:/proC/untitled13/test.txt");

    fQuestion << a[i].questioN+"\n";
    fQuestion << a[i].V1+"\n";
    fQuestion << a[i].V2+"\n";
    fQuestion << to_string(correct)+"\n";
    fQuestion.close();


    cout << "Test creation completed"<< '\n';

     }

};
#endif // CREATE_H
