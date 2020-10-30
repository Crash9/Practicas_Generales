#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout << "Ingrese un numero entero" << endl;
    cin >> num1;
    cout << "Ingrese otro numero entero" << endl;
    cin >> num2;
    if (num1==num2)
        cout << "Los valores ingresados son iguales" << endl;
    else if (num1>num2)
        cout << "El numero " << num1 << " es mayor que " << num2 << endl;
    else
        cout << "El numero " << num2 << " es mayor que " << num1 << endl;
    return 0;
}
