#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("clear");

    char cn;

    cout << "Podaj pierwsz� litere od ktorej rozpoczyna sie nazwa s�siada Polski" << endl;

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
        cout << "S�owacja" << endl;
        break;
    case 'u':
        cout << "Ukraina" << endl;
        break;
    case 'b':
        cout << "Bia�oru�" << endl;
        break;
    case 'l':
        cout << "Litwa" << endl;
        break;
    case 'r':
        cout << "Rosja" << endl;
        break;
    default:
        cout << "Ten kraj nie ma granicy z Polsk�!" << endl;
    }
}
