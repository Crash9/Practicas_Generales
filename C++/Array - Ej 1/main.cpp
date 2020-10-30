/*Leer una lista de 10 valores enteros listarlos por pantalla en sentido inverso al que ingresaron.*/
#include <iostream>

using namespace std;

int main()
{
    int num,i,valores[10];
    for (i=0;i<10;i++)
    {
        cout << "Ingrese un valor" << endl;
        cin >> valores[i];
    }
    cout << " " << endl;
    for (i=9;i>=0;i--)
    {
        cout << valores[i] << endl;
    }
    return 0;
}
