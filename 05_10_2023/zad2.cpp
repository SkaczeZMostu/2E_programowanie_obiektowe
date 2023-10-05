#include <iostream>

using namespace std;

int main()
{   
    int x, y;
    cout << "Podaj pierwsza liczbe " << endl;
    cin >> x;
    cout << "Podaj druga liczbe " << endl;
    cin >> y;
    
    if(x%y == 0)
        cout << "Wynik jest podzielna bez reszty " << endl;
    else
        cout << "Wynik ma reszte " << endl;
    
    
    return 0;
}


