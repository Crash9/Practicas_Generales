#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "Ingrese el primer valor" << endl;
    cin >> num1;
    cout << "Ingrese el segundo valor" << endl;
    cin >> num2;
    cout << "Ingrese el tercer valor" << endl;
    cin >> num3;
    if ((num1==num2) && (num1==num3))
        cout << "Forman triangulo" << endl;
    else cout << "No forman triangulo" << endl;
    return 0;
}
