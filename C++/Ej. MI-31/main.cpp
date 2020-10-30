#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int edad,i,N;
    char cont_integrantes[5];
    string domicilio,tipo_vivienda,sexo,indicador,nomb_apellido;
    do
    {
        cout << "Ingrese la cantidad de integrantes de la familia" << endl;
        getline(cin, cont_integrantes);
        if (cont_integrantes==0) break;
        cout << "Ingrese el domicilio de la familia" << endl;
        getline(cin, domicilio);
        cout << "Ingrese el tipo de vivienda, 'C' = casa, 'D' = departamento" << endl;
        getline(cin, tipo_vivienda);

        if (cont_integrantes>0)
        {
            for (i=0;i<integrantes;i++)
            {
                cout << "Ingrese Nombre y apellido" << endl;
                getline(cin, nomb_apellido);
                cout << "Ingrese la edad" << endl;
                cin >> edad;
                cout << "Ingrese el sexo" << endl;
                getline(cin, sexo);
            }
        }
    }while(cont_integrantes>0);
    cout << "Hello world!" << endl;
    return 0;
}
