#include <iostream>

using namespace std;

int main()
{
    int mes,ano;
    cout << "Ingrese el mes (1-12)" << endl;
    cin >> mes;
    cout << "Ingrese el año" << endl;
    cin >> ano;
    if ((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))
        cout << "El mes tiene 31 dias" << endl;
    else if ((mes==4)||(mes==6)||(mes==9))
        cout << "El mes tiene 30 dias" << endl;
    else if ((mes==2) && (ano%4==0))
        cout << "El mes tiene 29 dias" << endl;
    else cout << "El mes tiene 28 dias" << endl;
    return 0;
}
