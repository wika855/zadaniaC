#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstring>


using namespace std;

int main(int argc, char *argv[])
{

    system("chcp 1250");
    system("clear");

    int bok;

        for (;;)
        {
            cout << "Podaj bok kwadratu w centymetrach ";
            cin >> bok;
            cout << endl;

            if (bok <= 0)
            {
                cout << "B³¹d! Podan liczba powinna byæ wiêksza od 0" << endl;
            }

            int pole = bok * bok;

            cout << "Pole kwadratu =" << pole << "cm^2" << endl;

            cout << "Jeœli powtrzyæ program wcisnij t(tak) w przciwnym razie wcisnij dowolny klawisz literowy " << endl;

            char stop;

            cin >> stop;

            stop = tolower(stop);


            if (stop != 't')
            {
                exit(0);
            }
            system("clear");
        }

}

