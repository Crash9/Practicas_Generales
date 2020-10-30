#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void ingresar(int &v1, int &v2)
{
    cout << "Ingrese el primer numero" << endl;
    cin >> v1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> v2;
}

float paso1(int v1, int v2)
{
    float division;
    division = fmod(v1,v2);
    return division;
}

int paso2(float RR, int b)
{
    if (RR==0)
    {
        cout << "El maximo comun divisor es: " << b << endl;
        return 0;
    }else{
        return 1;
    }
}

int paso3(int &v1, int &v2, float &RR)
{
    v1 = v2;
    v2 = RR;
}

int main()
{
    int a,b;
    float R;
    ingresar(a,b);
    do
    {   R = paso1(a,b);
        /*paso2(R,b);*/
        if (paso2(R,b)==0)
        {
        break;
        }else{
            paso3(a,b,R);
        }
    }while(paso2>0);
    return 0;
}
