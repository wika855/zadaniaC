#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
    system("chcp 1250");
    system("clear");

    int liczba;

    cout<<"B�de sprawdza� czy liczba nalezy do przedzia�u <-5, 6)"<<endl;
    cout<<"Podaj liczbe do sprawdzenia: ";
    cin >> liczba;
    cout<<endl;

    if (liczba >= -5 && liczba < 6)
    {
        cout<<"Liczba nalezy do przedzia�u "<<endl;
    }
    else
    {
        cout<<"Liczba nie nalezy do przedzialu"<<endl;
    }



}
