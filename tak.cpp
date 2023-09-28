#include <iostream>

using namespace std;

int main(){
    int a, x, y;

    do{
        cout << "Wybierz co chcesz zrobic" << endl;
        cout << "Wpisz 1 jesli chcesz dodawac " << endl;
        cout << "Wpisz 2 jesli chcesz odejmowac " << endl;
        cout << "Wpisz 3 jesli chcesz monozyc " << endl;
        cout << "Wpisz 4 jesli chcesz dzielic " << endl;
        cout << "Lub zero jesli chcesz zakonczyc program " << endl;

           cout << "Wpisz co chcesz zrobic "<< endl;
        cin >> a;
        if(a == 0)
            exit;
        else if(a != 0){

        cout << "Wpisz 1 liczbe " << endl;
        cin >> x;
        cout << "Wpisz 2 liczbe " << endl;
        cin >> y;


        if(a == 1)
            cout << x + y << endl;
        else if(a == 2)
            cout << x - y << endl;
        else if(a == 3)
            cout << x*y << endl;
         else if(a == 4)
            cout << x/y << endl;
        }




    }while(a != 0);
}
