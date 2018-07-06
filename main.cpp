#include <iostream>
#include <string.h>
#include "konwerterarabski.hpp"
#include "konwerterrzymski.hpp"


using namespace std;

int main()
{
    cout << "Podaj liczbę arabską: ";
    int liczba;
    cin >> liczba;
    
    Konwerterarabski K(liczba);
    string str2 = K.result();
    cout << "Oto liczba rzymska liczby : " << str2 << endl;

    Konwerterrzymski J(str2);

    J.konwertowanie();
    cout << "Zamiana z powrotem na liczbę arabską " << J.wynik<<endl;	
    return 0;
}
