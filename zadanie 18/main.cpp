#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");


    int a, b;

    cout << "Program wykonuj�cy dzielenie" << endl;
    cout << "Podaj pierwsz� liczb�: ";
    cin >> a;
    cout<<endl;

    cout << "Podaj druga liczb�: ";
    cin >> b;
    cout<<endl;

    if (a == 0)
    {
        cout<<"B��d! Dzielenie przez 0."<<endl;
    }
    else if (b==0)
    {
        cout<<"B��dd! Dzielenie przez 0."<<endl;
    }
    
    else
    {
        cout<<a/b<<endl;
    }
}
