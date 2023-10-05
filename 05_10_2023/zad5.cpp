#include <iostream>

using namespace std;

int main()
{   
    int x;
    cout << "Podaj swój wiek " << endl;
    cin >> x;
    
    if(x>= 0 && x < 11)
        cout << "Jesteś dzieckiem " << endl;
    else if(x >= 11 && x<=17)
        cout << "Jesteś nastolatkie " << endl;
    else if(x>=18)
        cout << "Jesteś dorosły " << endl;
    else
        cout << "Nieprawidłowa liczba " << endl;
    
    
    return 0;
}


