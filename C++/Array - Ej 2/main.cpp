/*Dado un vector 15 valores, hacer un programa que pueda obtener, y sacar
por pantalla:
− el mayor de los valores
− el menor de los valores
− el más próximo al promedio*/

#include <iostream>

using namespace std;

int main()
{
    int i, valores[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}
    int numax,numin,numprom,acum=0;
    float prom;
    for (i=0;i<15;i++)
    {
       if (i==0)
       {
           numax = valores[0];
           numin = valores[0];
       }else{
            if (valores[i]>numax)
                numax = valores[i];
            if (valores[i]<numin)
                numin = valores [i]
       }
       acum = acum + valores[i];
    }
    prom = acum / 15;
    cout << "El mayor fue: " << numax << endl;
    cout << "El menor fue: " << numin << endl;
    cout << "El mas proximo al promedio: " << prom << endl;
    return 0;
}
