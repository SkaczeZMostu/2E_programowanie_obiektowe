#include <iostream>

using namespace std;

int main()
{   
    int x;
    cout << "Podaj liczbe: " << endl;
    cin >> x;
    
    if(x >= 100 && x < 150)
        cout << "Liczba miesci sie w przedziale od 100 do 150" << endl;
    else
        cout << "Liczba nie jest w przedziale od 100 do 150"  << endl;
    
    
    return 0;
}


