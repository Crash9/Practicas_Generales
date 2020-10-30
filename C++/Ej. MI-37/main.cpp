#include <iostream>

using namespace std;

void ingresar(int &v1, int &v2)
{
    cout << "Ingrese el primer numero" << endl;
    cin >> v1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> v2;
}

float CalcularPorcentajeDiferencia (int A, int B)
{
    float calc;
    calc = (B-A)*100 / (A+B);
    return calc;
}

void informe (float lal, int A, int B)
{
    cout << "El calculo:\n           ("<<B<<"-"<<A<<") * 100 / ("<<A<<"+"<<B<<")"<<endl;
    cout << "\nDa como resultado :" << lal << endl;
}

int main()
{
    int a,b;
    float calculo;
    ingresar (a,b);
    calculo = CalcularPorcentajeDiferencia(a,b);
    informe (calculo,a,b);
    return 0;
}
