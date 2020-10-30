/*Ej. MI-30: Dado un conjunto de valores enteros, calcular e informar
a) cuántos valores cero hubo,
b) promedio de valores positivos,
c) sumatoria de valores negativos.
Resolver el ejercicio para los siguientes lotes de datos:
1) 167 valores enteros
2) N valores, donde el valor de N debe ser leído previamente
3) El conjunto de valores termina con un valor igual al anterior
4) Se dan N valores, pero el proceso deberá finalizar si se procesan todos los valores o si
la cantidad de ceros supera a cuatro
5) Se dan N valores, pero el proceso deberá finalizar si se cumple alguna de las
condiciones de 4) o si el promedio de positivos resulta mayor que seis.*/
#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

int main()
{
    int opcion,num,cont=0,cont_positivos=0,acum=0,acum_negativos=0, cont_ceros=0,limite=0,numant;
    float prom=0;
    srand(time(0));
    cout << "Elija una de las siguientes opciones: \n" << endl;
    cout << "1_167 valores enteros aleatorios" << endl;
    cout << "2_N valores, donde el valor de N debe ser leído previamente" << endl;
    cout << "3_El conjunto de valores termina con un valor igual al anterior" << endl;
    cout << "4_Se dan N valores, pero el proceso deberá finalizar si se procesan todos los valores o si la cantidad de ceros supera a cuatro" << endl;
    cout << "5_Se dan N valores, pero el proceso deberá finalizar si se cumple alguna de las condiciones de 4) o si el promedio de positivos resulta mayor que seis" << endl;
    cout << "6_Salir\n" << endl;
    cin >> opcion;
    switch (opcion)
    {
        case 1: do
                {
                    num = (rand () % 200 ) -40 ;
                    if (num==0) cont_ceros++;
                    else if (num>0)
                        {
                            acum = acum + num;
                            cont_positivos++;
                        }else{
                            acum_negativos = acum_negativos + num;
                        }
                    cont++;
                }while(cont<167);
                prom = acum / cont_positivos;
                cout << "Cantidad valores cero: " << cont_ceros << endl;
                cout << "Promedio valores positivos: " << prom << endl;
                cout << "Sumatoria de valores negativos: " << acum_negativos << endl;
        break;

        case 2: cout << "Ingrese la cantidad de numeros a analizar: " << endl;
                cin >> limite;
                do
                {
                    num = (rand () % 200 ) -40 ;
                    if (num==0) cont_ceros++;
                    else if (num>0)
                        {
                            acum = acum + num;
                            cont_positivos++;
                        }else{
                            acum_negativos = acum_negativos + num;
                        }
                    cont++;
                }while(cont<limite);
                prom = acum / cont_positivos;
                cout << "Cantidad valores cero: " << cont_ceros << endl;
                cout << "Promedio valores positivos: " << prom << endl;
                cout << "Sumatoria de valores negativos: " << acum_negativos << endl;
        break;

        case 3: cout << "Ingrese la cantidad de numeros a analizar: " << endl;
                cin >> limite;
                do
                {
                    num = (rand () % 2000 ) -400 ;
                    if (num==0) cont_ceros++;
                    else if (num>0)
                        {
                            acum = acum + num;
                            cont_positivos++;
                        }else{
                            acum_negativos = acum_negativos + num;
                        }
                    if (cont==0) numant = num;
                    else if (numant==num) cont= limite;
                    cont++;
                }while((cont<limite));
                prom = acum / cont_positivos;
                cout << "Cantidad valores cero: " << cont_ceros << endl;
                cout << "Promedio valores positivos: " << prom << endl;
                cout << "Sumatoria de valores negativos: " << acum_negativos << endl;
        break;

        case 4: cout << "Ingrese la cantidad de numeros a analizar: " << endl;
                cin >> limite;
                do
                {
                    num = (rand () % 2000 ) -400 ;
                    cin >> num;
                    if (num==0) cont_ceros++;
                    else if (num>0)
                        {
                            acum = acum + num;
                            cont_positivos++;
                        }else{
                            acum_negativos = acum_negativos + num;
                        }
                    if (cont_ceros==4) cont = limite;
                    cont++;
                }while(cont<limite);
                prom = acum / cont_positivos;
                cout << "Cantidad valores cero: " << cont_ceros << endl;
                cout << "Promedio valores positivos: " << prom << endl;
                cout << "Sumatoria de valores negativos: " << acum_negativos << endl;
        break;

        case 5: cout << "Ingrese la cantidad de numeros a analizar: " << endl;
                cin >> limite;
                do
                {
                    num = (rand () % 2000 ) -400 ;
                    if (num==0) cont_ceros++;
                    else if (num>0)
                        {
                            acum = acum + num;
                            cont_positivos++;
                            prom = acum / cont_positivos;
                            if (prom>6) cont = limite;
                        }else{
                            acum_negativos = acum_negativos + num;
                        }
                    if (cont_ceros==4) cont = limite;
                    cont++;
                }while(cont<limite);
                prom = acum / cont_positivos;
                cout << "Cantidad valores cero: " << cont_ceros << endl;
                cout << "Promedio valores positivos: " << prom << endl;
                cout << "Sumatoria de valores negativos: " << acum_negativos << endl;
        break;
    }
    return 0;
}
