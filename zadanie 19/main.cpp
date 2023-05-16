#include <iostream>


using namespace std;

int main(int argc, char *argv[]) 
{
    system ("chcp 1250");
    system("clear");

     int n;

     cout<<"Podaj liczbê ca³kowit¹: ";
     cin>>n;
     cout<<endl;

     if(n==0)
     {
          cout<<"Liczba rowna zero"<<endl;
     }
     else if(n>0)
     {
        cout<<"Liczba wiêksza od zero"<<endl;
     }
     else if(n<0) 
      {
          cout<<"Liczba mniejsza od zero"<<endl;
     }

}
