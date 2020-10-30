#include <iostream>

using namespace std;

int main()
{
    int sueldo,cont1=0,cont2=0,cont3=0,cont4=0;
    do
    {
        cout << "Ingrese el sueldo de un empleado" << endl;
        cin >> sueldo;
        if (sueldo<1520)
            cont1++;
        else if (sueldo>=1520 && sueldo <2780)
            cont2++;
        else if (sueldo >=2780 && sueldo<5999)
            cont3++;
        else if (sueldo>=5999)
            cont4;
    }while(sueldo!=0);
    cout << "Empleados con sueldo menor a $1520: " << cont1 << endl;
    cout << "Empleados con sueldo entre $1520 y menores a $2780: " << cont2 << endl;
    cout << "Empleados con sueldo entre $2780 y menores a $5999: " << cont3 << endl;
    cout << "Empleados con sueldo mayor o iguales a $5999: " << cont4 << endl;
    return 0;
}
