#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    int a, b, c, d, suma, ciezar, szalkap, szalkal, szczytanie;
    char charact;

    do
    {

        cout << "Podaj wag� pierwszego ci�arka: ";
        cin >> a;
        cout << "Podaj wag� drugiego ci�arka: ";
        cin >> b;
        cout << "Podaj wag� trzeciego ci�arka: ";
        cin >> c;
        cout << "Podaj wag� czwartego ci�arka: ";
        cin >> d;

        suma = a + b + c + d;
        if (suma != 40)
        {
            cout << "Suma ciearkow nie jest rowna 40!" << endl;
        }

    } while (suma != 40);

    cout << "Dane" << endl;
    cout << endl;
    cout << "1: " << a << endl;
    cout << "2: " << b << endl;
    cout << "3: " << c << endl;
    cout << "4: " << d << endl;

    cout << endl;

    do
    {
        cout << "Ciezar jaki chcemy zwazyc to: ";
        cin >> ciezar;

        if (ciezar > 40)
        {
            cout << "Za duzy ciezar!" << endl;
        }

    } while (ciezar > 40);

    cout << endl;

    cout << "UWAGA" << endl;
    cout << "Towar wazymy na szalce prawej " << endl;

    cout << endl;

    szalkal = 0;
    szalkap = 0;
    szalkap = szalkap + ciezar;

    do
    {
        cout << endl;
        cout << "Prawa szalka " << szalkap;
        cout << "         ";
        cout << "Lewa szalka " << szalkal << endl;

        cout << endl;
        cout << endl;

        cout << "Do ktorej szalki chcesz doda� 'p'(prawa) 'l'(lewa)" << endl;
        cin >> charact;

        charact = tolower(charact);

        cout << "Podaj numer ciezarka ktory chcesz dodac do szalki: ";
        cin >> szczytanie;

        switch (charact)
        {

        case 'l':

            switch (szczytanie)
            {
            case 1:
                szalkal = szalkal + a;
                if (a == 0)
                {
                    cout << "Nie mozna dodac ciezarkow ponownie" << endl;
                }
                a = a - a;
                break;
            case 2:
                szalkal = szalkal + b;
                if (b == 0)
                {
                    cout << "Nie mozna dodac ciezarkow ponownie" << endl;
                }
                b = b - b;
                break;
            case 3:
                szalkal = szalkal + c;
                if (c == 0)
                {
                    cout << "Nie mozna dodac ciezarkow ponownie" << endl;
                }
                c = c - c;
                break;
            case 4:
                szalkal = szalkal + d;
                if (d == 0)
                {
                    cout << "Nie mozna dodac ciezarkow ponownie" << endl;
                }
                break;
                d=d-d;
            }
            break;

        case 'p':
            switch (szczytanie)
            {
            case 1:
                szalkap = szalkap + a;
                if (a == 0)
                {
                    cout << "Nie mozna dodac ciezarkow ponownie" << endl;
                }
                a = a - a;
                break;
            case 2:
                szalkap = szalkap + b;
                if (b == 0)
                {
                    cout << "Nie mozna dodac ciezarkow ponownie" << endl;
                }
                b = b - b;
                break;
            case 3:
                szalkap = szalkap + c;
                if (c == 0)
                {
                    cout << "Nie mozna dodac ciezarkow ponownie" << endl;
                }
                c = c - c;
                break;
            case 4:
                szalkap = szalkap + d;
                if (d == 0)
                {
                    cout << "Nie mozna dodac ciezarkow ponownie" << endl;
                }
                d = d - d;
                break;
            }

        default:
            break;
        }
     
        if (szalkal == szalkap)
        {
            cout << endl;
            cout << "Brawo - udana proba wazenia" << endl;
        }
    } while (szalkal != szalkap);
}
