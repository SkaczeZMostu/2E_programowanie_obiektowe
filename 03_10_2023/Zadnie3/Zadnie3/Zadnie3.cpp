#include <iostream>

using namespace std;

int main()
{   
    int a, b, c;
    cout << "Podaj 1 bok" << endl;
    cin >> a;
    cout << "Podaj 2 bok" << endl;
    cin >> b;
    cout << "Podaj 3 bok" << endl;
    cin >> c;

    if (a == 0 || b == 0 || c == 0)
        cout << "Nie mozna wpisac 0" << endl;
    else if (a + b > c && a + c > b && b + c > a)
        cout << "Da sie zrobic taki trojkat" << endl;
    else
        cout << "Nie da sie zrobic takiego trojkata" << endl;
}

