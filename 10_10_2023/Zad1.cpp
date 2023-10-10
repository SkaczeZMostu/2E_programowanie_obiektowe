#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string haslo, login;
    cout << "Podaj login: " << endl;
    cin >> login;
    cout << "Podaj haslo: " << endl;
    cin >> haslo;
    if (haslo == "Super123" && login == "admin")
        cout << "Zalogowales sie na admina" << endl;
    else
        cout << "Bledne haslo" << endl;
}

