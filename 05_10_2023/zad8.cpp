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
    
    if(x == y && x == z && y == z)
        cout << "Wszystkie liczby są rowne " << endl;
    else if(x == y || x == z || y == z)
        cout << "Dwie liczby są równe sobie" << endl;
    else
        cout << "Zadne liczby nie sa rowne" << endl;   
        
        
    return 0;
}


