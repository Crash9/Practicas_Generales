#include <iostream>

using namespace std;

void ingresar(int &v1, int &v2)
{
    cout << "Ingrese el primer numero" << endl;
    cin >> v1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> v2;
}

string Tendencia (int A,int B)
{
    float X = (2*A)/100;
    float Y = (5*A)/100;
    if(B-A<0) return "Decreciente";
    else if (B-A<X) return "Estable";
    else if (B-A<Y) return "Leve ascenso";
    else return "En ascenso";
}

int main()
{
    int a,b;
    ingresar(a,b);
    cout << Tendencia(a,b) << endl;
    return 0;
}
