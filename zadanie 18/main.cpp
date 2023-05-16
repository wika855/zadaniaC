#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");


    int a, b;

    cout << "Program wykonuj¹cy dzielenie" << endl;
    cout << "Podaj pierwsz¹ liczbê: ";
    cin >> a;
    cout<<endl;

    cout << "Podaj druga liczbê: ";
    cin >> b;
    cout<<endl;

    if (a == 0)
    {
        cout<<"B³¹d! Dzielenie przez 0."<<endl;
    }
    else if (b==0)
    {
        cout<<"B³¹dd! Dzielenie przez 0."<<endl;
    }
    
    else
    {
        cout<<a/b<<endl;
    }
}
