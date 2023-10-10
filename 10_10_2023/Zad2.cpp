#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string haslo, login;
    do {
        cout << "Podaj login: " << endl;
        cin >> login;
        cout << "Podaj haslo: " << endl;
        cin >> haslo;
        if (haslo == "Super123" && login == "admin") {
            cout << "Zalogowales sie na admina" << endl;
            break;
        }
        else if (haslo == "JestemTak" && login == "user") {
            cout << "Zalogowales sie na uzytkownika" << endl;
            break;
        }
        else if (haslo == "Swietnie" && login == "user1") {
            cout << "Zalogowales sie na uzytkownika" << endl;
            break;
        }
        else {
            cout << "Bledne haslo lub login" << endl;
            cout << "Sprubuje sieznowu zalogowac " << endl;
        }
    } while (true);
}

