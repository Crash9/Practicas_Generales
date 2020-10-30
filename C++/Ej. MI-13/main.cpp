#include <iostream>

using namespace std;

int main()
{
    int num1,num2,prod,i,acum=0;
    cout << "Ingrese un numero natural" << endl;
    cin >> num1;
    cout << "Ingrese otro numero natural" << endl;
    cin >> num2;
    prod = num1*num2;
    if ((num1==0)||(num2==0))
    {
        cout << "No se puede hacer realizar ninguna operacion" << endl;
        return 0;
    }
    else
    {
        do
        {
            cout << acum << " + 1 = " << acum+1 << endl;
            acum = acum + 1;
        }while(acum<prod);
    }
    return 0;
}
