#include <iostream>
#include<limits>
using namespace std;

int main()
{
    int i, num,numax,numin,cont;
    cout << "¿Cuantos numeros va a ingresar?"<< endl;
    cin >> cont;
    for(i=0;i<cont;i++)
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
        if (i==0)
            {
              numax = num;
              numin = num;
            }
        else if (num>numax)
            numax = num;
        else if (num<numin)
            numin = num;
    }
    cout << "El numero mayor fue el: " << numax <<endl;
    cout << "El numero menor fue el: " << numin <<endl;
    return 0;
}
