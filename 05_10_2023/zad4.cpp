#include <iostream>

using namespace std;

int main()
{   
    int x;
    cout << "Podaj liczbe " << endl;
    cin >> x;
    
    if(x == 0)
        cout << "liczba jest rowna 0" << endl;
    else if(x > 0)
        cout << "liczba jest wieksza od 0" << endl;
    else
        cout << "Liczba jest mniejsza od 0" << endl;
    
    
    return 0;
}


