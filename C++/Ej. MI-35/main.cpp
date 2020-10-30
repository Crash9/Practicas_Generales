#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

void factorial (int &v1)
{
    int i,fact=0,succ=0;
    if (v1==0 || v1==1)
    {
        cout << "Su factorial es 1" << endl;
    }else{
        for (i=1;i<v1;i++)
        {
            if (i==1)
            {
                succ = (i *(i+1));
                fact = succ;
            }else{
                fact = fact *(i+1);
            }

        }
        cout << "Su factorial es " << fact << endl;
    }
}
int cantidad (int &cant)
{
    cout << "Cuantos numeros enteros va a ingresar? " << endl;
    cin >> cant;
    if (cant<=0) return 0;
        else return 1;
}
int multiplos_3(int v1, int &cont3)
{
    float resto;
    resto = fmod(v1,3);
    if (resto==0)
    {
        cont3++;
        return 0;
    }else{
        return 1;
    }
}
int multiplos_5(int v1, int &cont5)
{
    float resto;
    resto = fmod(v1,5);
    if (resto==0)
    {
        cont5++;
        return 0;
    }else{
        return 1;
    }
}
void multiplos_3y5(int x,int y,int &cont3y5)
{
    if (x==0 && y==0) cont3y5++;
}
void ingresar_nums (int &v1,int cant,int &cont1,int &cont2,int &cont3) /*Donde se juntan los colores*/
{
    int i;
    int x,y;
    for (i=0;i<cant;i++)
    {
        cout << "Ingrese un numero entero" << endl;
        cin >> v1;
        if (v1<=0) /*solo rechaza numeros negativos*/
        {
          do
            {
            cout << "Error, solo se admiten numeros enteros, vuelva a ingresar" << endl;
            cin >> v1;
            }while(v1<=0);
        }
        factorial (v1);
        x=multiplos_3(v1,cont1);
        y=multiplos_5(v1,cont2);
        multiplos_3y5(x,y,cont3);
    }
}
void informe (int &cont1,int &cont2,int &cont3)
{
    cout << "Cantidad numeros multiplos de 3: " << cont1 <<endl;
    cout << "Cantidad numeros multiplos de 5: " << cont2 <<endl;
    cout << "Cantidad numeros multiplos de 3 y 5: " << cont3 <<endl;
}
int main()
{
    int a,cant,cont3=0,cont5=0,cont3y5=0;
    if (cantidad (cant)==0)
    {
        cout <<"No se ingresaran numeros. Fin del programa" << endl;
        return 0;
    }
    else{
        ingresar_nums (a,cant,cont3,cont5,cont3y5);
        informe(cont3,cont5,cont3y5);
        }
    return 0;
}
