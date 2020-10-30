#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int i=0,contmay=0,contmen=0,random_number, acumay=0,acumen=0;
    srand(time(0));
    do
    {
        random_number = (rand () % 300 ) -100 ;
        if (random_number>100)
        {
            contmay++;
            acumay = acumay + random_number;
        }else if (random_number<-10){
            contmen++;
            acumen = acumen + random_number;
        }
        i++;
    }while(i<=50);
    cout << "El promedio de los numeros mayores a 100 es " << acumay/contmay << endl;
    cout << "El promedio de los numeros menores a -10 es " << acumen/contmen << endl;
    return 0;
}
