#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    char a, b;


    cout << "Podaj pierwsz� liter� kodu: \n";
    cin >> a;
    cout << "Podaj drug� liter� kodu: \n";
    cin >> b;


    cout<<"Podany kod to "<<a<<b<<endl;

    a = tolower(a);
    b = tolower(b);
    
    if (a == 's' && b == 'b')
    {
        cout<<"Dzien dobry"<<endl;
    }
    else
    {
        cout<<"�egnaj"<<endl;
    }
    
    return 0;
}
