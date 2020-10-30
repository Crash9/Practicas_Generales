#include <iostream>
#include <math.h>
using namespace std;

void ingresar (int &v1,int &v2)
{
    cout << "Dada la fraccion P/Q, ambos numeros naturales\n Ingrese P" << endl;
    cin >> v1;
    cout << "Ingrese Q" << endl;
    cin >> v2;
}

void mfc (int &v1,int &v2)
{
    int i=2;
    float resto1,resto2;
    do
    {
        resto1 = fmod(v1,i);
        resto2 = fmod(v2,i);
        if (resto1==0 && resto2==0)
        {
            v1 = v1 / i;
            v2 = v2 / i;
        }else{
            i++;
        }
    }while(i<10);
}

void informe (int v1,int v2)
{
    cout << "El menor factor comun es: " << v1 << "/" << v2 << endl;
}

int main()
{
    int a,b;
    ingresar (a,b);
    mfc (a,b);
    informe (a,b);
    return 0;
}
