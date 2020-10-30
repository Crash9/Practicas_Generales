#include <iostream>
#include<stdio.h>
#include<conio.h>
#include <string>
using namespace std;

int main()
{
    string nomb,nombax,nombin;
    int fecha,cont=0,fechamax,fechamin;
    cout << "Ingrese nombre: " << endl;
    cin >> nomb;
    if ((nomb=="FIN") || (nomb=="fin"))
    {
        cout << "No se han ingresado datos" << endl;
        return 0;
    }
    cout << "Ingrese fecha de nacimiento (AAAAMMDD) " << endl;
    cin >> fecha;
    while((nomb!="FIN") || (nomb!="fin"))
    {
        if (cont ==0)
        {
            fechamax=fecha;
            fechamin=fecha;
            nombax=nomb;
            nombin=nomb;
            cont++;
        }else{
            cout << "Ingrese nombre: " << endl;
            cin >> nomb;
            if ((nomb=="FIN") || (nomb=="fin"))
                break;
            cout << "Ingrese fecha de nacimiento (AAAAMMDD) " << endl;
            cin >> fecha;
            if (fecha>fechamax)
            {
                fechamax=fecha;
                nombin=nomb;
            }
            else if (fecha<fechamin)
            {
                fechamin=fecha;
                nombax=nomb;
            }
        }
    }
        cout << "Persona mas joven: " << nombin <<endl;
        cout << "Persona mas vieja: " << nombax <<endl;
        return 0;
    }
