#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *[])
{
    system("chcp 1250");
    system("clear");

    int liczba;

    for(;;)
    {
        do
        {

            cout << "DZIE� DOBRY" << endl;
            cout << "B�de powtarzal program, az do wczytania liczb z przedzia�u <-3, 2)" << endl;
            cout << "Podaj liczb� x: ";
            cin >> liczba;
            cout << endl;

        } while (liczba < -3 || liczba > 2);

        cout<<"Jezeli chcesz powtorzyc prgram wcisnij klawisz t w przeciwnym wypadku wcisnij dowolny klawisz literowy"<<endl;

        getchar();

        if (getchar() != 't')
        {
            exit(0);
        }
        system("clear");
        
    }
}

