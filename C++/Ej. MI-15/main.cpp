#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int i=0,infra,multa, GravL=0,GravM=0,GravG=0, cont=0;
    int gravedad;
    srand(time(0));
    do
    {
        infra = (rand () % 4 ) +1; /*Tipo de infraccion 1,2,3 o 4*/
        multa = (rand () % 900 ) +100; /*Valor de la multa 100 ~ 1000*/
        gravedad = (rand() % 3)+1; /*tipo de gravedad*/
        if (gravedad==1) /*L*/
            GravL = GravL + multa;
        else if (gravedad==2) /*M*/
            GravM = GravM + multa;
        else if (gravedad==3) /*G*/
            GravG = GravG + multa;
        if ((gravedad==3 && infra==3) || (gravedad==3 && infra==4))
            cont++;
        i++;
    }while(i<=20);
    cout << "Total a pagar por tipo de gravedad L: $" << GravL << endl;
    cout << "Total a pagar por tipo de gravedad M: $" << GravM << endl;
    cout << "Total a pagar por tipo de gravedad G: $" << GravG << endl;
    if (cont>3)
    cout << "Clausurar fabrica" << endl;
    return 0;
}
