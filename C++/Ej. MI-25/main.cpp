/*Dada una serie de M pares {color, número} que corresponden a los tiros de una
ruleta. Se pide informar:
a) cuántas veces salió el número cero y el número anterior a cada cero
b) cuántas veces seguidas llegó a repetirse el color negro
c) cuántas veces seguidas llegó a repetirse el mismo número y cuál fue
d) el mayor número de veces seguidas que salieron alternados el rojo y el negro
e) el mayor número de veces seguidas que se negó la segunda docenas*/
#include <iostream>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int tiradas,cont_ceros=0,cont_negros=0,cont=0,cont_alt=0,num_tirada, color_tirada,col_ant, num_ant=-1,i=0,j=0;
    int numant_ceros[50], numseg,contes=0,numseg2,contes2=0;
    srand(time(0));
    for (i=0;i<=50;i++)
    {
        numant_ceros[i] = -1;
    }
    i=0;
    cout << "Cuantas tiradas se van a realizar?" << endl;
    cin >> tiradas;
    if (tiradas<=0)
    {
        cout << "Hoy no se juega eh" << endl;
        return 0;
    }else{
        do
        {
            num_tirada = (rand() %37); /*Numero de la ruleta*/
           /* cout << "ingrese numero ruleta" << endl;
            cin >> num_tirada;*/
                if (num_tirada==num_ant)
                {
                    numseg = num_tirada;
                    contes++;
                }else{
                    numseg2 = numseg;
                    contes2 = contes;
                    contes=0;
                }
            if (num_tirada==0)
            {
                color_tirada = 2;      /*Color verde*/
                cont_ceros++;
                if (num_ant>=0)
                {
                    numant_ceros[i]=num_ant;
                    i++;
                }
            }
            else
            {
                color_tirada = (rand() %2);
                if (color_tirada == 0)   /*Color negro*/
                {
                    if (color_tirada==col_ant)
                    {
                        cont_negros++;
                    }else{
                        cont_alt++;
                    }
                }
                else                   /*Color rojo*/
                {
                    if (col_ant==0)
                    {
                        cont_alt++;
                    }
                }
            }
            num_ant = num_tirada; /*Agrega numero anterior*/
            col_ant = color_tirada; /*Agrega color anterior*/
            cont++;
        }while(cont<tiradas);
    cout << "Cantidad de veces que salio el numero cero: " << cont_ceros << endl;
    if (cont_ceros>0)
    {
        cout << i <<" fueron los numeros anteriores a ceros, y son: \n" << endl;
        for (j=0;j<i;j++)
        {
            cout << numant_ceros[j] << endl;
        }
    }else cout << "No hubo numeros anteriores a ceros" << endl;
    cout << "\nCantidad de veces seguidas que llego a repetirse el color negro: " << cont_negros << endl;
    cout << "\nCantidad de veces seguidas que salieron alternados el rojo y el negro: " << cont_alt << endl;
    if (contes2>contes)
    cout << "\nEl numero: " << numseg2 << ", llego a repetirse " << contes2 << " veces seguidas" << endl;
    else
    cout << "\nEl numero: " << numseg << ", llego a repetirse " << contes << " veces seguidas" << endl;
    }
    return 0;
}
