#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float ano,mes,dia;
    int fecha;
    cout << "Ingrese la fecha de la forma (AAAAMMDD)" << endl;
    cin >> fecha;
    ano = fecha / 10000.00;
    mes = (ano - trunc(ano)) *100.00 ;
    dia = (fecha/100.00 - trunc(fecha/100.00)) *100.00 ;
    cout << "Ano: " << trunc(ano) << " mes: " << trunc(mes) << " dia: " << trunc(dia) << endl;
    return 0;
}
