/**Ej. MI-24: Se dispone de un lote de valores enteros positivos que finaliza con un número
negativo.
El lote está dividido en sublotes por medio de valores cero. Desarrollar un programa que
determine e informe:
a) por cada sublote el promedio de valores
b) el total de sublotes procesados
c) el valor máximo del conjunto, indicando en que sublote se encontró y la posición
relativa del mismo dentro del sublote
d) valor mínimo de cada sublote
Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los
sublotes vacíos (ceros consecutivos)**/
#include <iostream>

using namespace std;

int main()
{
    int num,cont=0, cont_sublotes=0,numax,numin,acum=0,contotal=1, pos_sublote=0,pos_rel=0;
    bool vacio = false;
    float prom;
    do
    {
        cout << "Ingrese un numero" << endl;
        cin >> num;
        if (num>0)   /*Numero valido*/
        {
            if (cont==0)    /*La primera vez que entra*/
            {
                numax = num;
                numin = num;
                cont_sublotes++;
                acum = acum + num;
                pos_sublote = contotal;
                pos_rel = cont_sublotes;
            }
            else         /*Entrada normal sublote*/
            {
                if (num>numax)
                {
                    numax = num;
                    pos_sublote = contotal;
                    pos_rel = cont_sublotes;
                }
                if (numin==0)
                    numin=num;
                else if (num<numin)
                    numin = num;
                cont_sublotes++;
                acum = acum + num;
            }
        }else if (num==0)    /*Fin de un sublote*/
        {
            if (cont_sublotes==0)
                cout << "Sublote vacio" << endl;
            else
            {
                prom = acum / cont_sublotes;
                cout << "El promedio del sublote Nro. " << contotal << " fue de: " << prom << endl;
                cout << "El numero menor fue el: " << numin << endl;
                contotal++;
                acum = 0;
                cont_sublotes = 0;
                numin = 0;
            }
        }else{      /*Fin del lote*/
        if (cont==0)
        vacio = true;
        }
        cont++;
    }while(num>=0);
    if (vacio==true)
    cout << "Lote vacio" << endl;
    else
    {
        cout << "Cantidad de sublotes procesados: " << contotal << endl;
        cout << "El numero mayor de todo el lote fue el: " << numax << ", sublote nro. " << pos_sublote << ", ubicacion " << pos_rel << endl;
    }
    return 0;
}
