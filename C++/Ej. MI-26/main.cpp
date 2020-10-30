#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int iden, peso, puerto, peso_total=0, puerto1=0,puerto2=0,puerto3=0,i,idenmax,pesomax;
    srand(time(0));
    for (i=0;i<100;i++)
    {
        iden = i;                      /*Identificacion del contenedor*/
        peso = (rand() %10000) + 1000; /*Peso de un contenedor en kg*/
        puerto = (rand() % 3) + 1;     /*Puerto de arribo*/
        peso_total = peso_total + peso;
        if (i==0)
        {
            idenmax=iden;
            pesomax=peso;
        }else{
            if (peso>pesomax)
            {
                idenmax=iden;
                pesomax=peso;
            }
        }
        if (puerto==1) puerto1++;
        else if (puerto==2) puerto2++;
        else puerto3++;
    }
    cout << "El buque debera transportar un total de " << peso_total << " kilogramos." << endl;
    cout << "El contenedor Nro. " << idenmax << " es el mas pesado de todos con un total de " << pesomax << " kilogramos" << endl;
    cout << "Puerto 1 transporta " << puerto1 << " contenedores" << endl;
    cout << "Puerto 2 transporta " << puerto2 << " contenedores" << endl;
    cout << "Puerto 3 transporta " << puerto3 << " contenedores" << endl;
    return 0;
}
