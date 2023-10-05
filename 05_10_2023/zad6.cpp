#include <iostream>

using namespace std;

int main()
{   
    int x;
    cout << "Podaj swój wiek " << endl;
    cin >> x;
    
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
        cout << "W tym roku w lutym jest 29 dni " << endl;
    else
        cout << "W tym roku w lutym jest 28 dni " << endl;
    
    return 0;
}


