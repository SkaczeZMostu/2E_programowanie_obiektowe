#include <iostream>

using namespace std;

int main()
{   
    int x, y, z;
    cout << "Podaj 1 liczbe" << endl;
    cin >> x;
    cout << "Podaj 2 liczbe" << endl;
    cin >> y;
    cout << "Podaj 3 liczbe" << endl;
    cin >> z;
    
    if(x < y && x < z)
        cout << "Najmniejsza liczba to: " << x << endl;
    else if(y < x && y < z)
        cout << "Najmniejsza liczba to: " << y << endl;
    else
        cout << "Najmniejsza liczba to: " << z << endl;   
        
        
    return 0;
}


