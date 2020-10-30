#include <iostream>
#include<limits>
using namespace std;

int num,cont=0;

int main()
{
    do
    {
        cout << "Ingrese un numero"<< endl;
        cin >> num;
        while (!cin)
        {
            cin.clear();
            cin.ignore( std::numeric_limits <streamsize> ::max(), '\n');
            cout << "Error, vuelva a ingresar el numero" << endl;
            cin >> num;
        }
        if (num>=0)
        {
            cout << "Numero ingresado " << num << endl;
            cont++;
        }
        else if (num <0)
            break;
    }while(num>=0);
    cout << "Cantidad numeros ingresados: " <<cont <<endl;
    return 0;
}
