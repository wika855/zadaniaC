#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    char cn;

    cout << "Podaj pierwsz¹ litere od ktorej rozpoczyna sie nazwa s¹siada Polski" << endl;

    cin >> cn;

    cn = tolower(cn);

    switch (cn)
    {
    case 'n':
        cout << "Niemcy" << endl;
        break;
    case 'c':
        cout << "Czechy" << endl;
        break;
    case 's':
        cout << "S³owacja" << endl;
        break;
    case 'u':
        cout << "Ukraina" << endl;
        break;
    case 'b':
        cout << "Bia³oruœ" << endl;
        break;
    case 'l':
        cout << "Litwa" << endl;
        break;
    case 'r':
        cout << "Rosja" << endl;
        break;
    default:
        cout << "Ten kraj nie ma granicy z Polsk¹!" << endl;
    }
}
