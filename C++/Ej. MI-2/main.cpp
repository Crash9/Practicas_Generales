#include <iostream>

using namespace std;

int main()
{
    int ano, mes,dia, terna;
    cout << "Ingrese el año" << endl;
    cin >> ano;
    cout << "Ingrese el mes" << endl;
    cin >> mes;
    cout << "Ingrese el dia" << endl;
    cin >> dia;
    ano = ano * 10000;
    mes = mes * 100;
    terna = ano+mes+dia;
    cout << "La terna da: " << terna << endl;
    return 0;
}
