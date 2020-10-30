#include <iostream>

using namespace std;

void ingresar(int &v1)
{
    cout << "Ingrese una edad" << endl;
    cin >> v1;
}

int EdadAGrupoEtario (int edad)
{
    if (edad<=14) return 1;
    else if (edad>=15 && edad<=21) return 2;
    else if (edad>=22 && edad<=28) return 3;
    else if (edad>=29 && edad<=35) return 4;
    else if (edad>=36 && edad<=42) return 5;
    else if (edad>=43 && edad<=49) return 6;
    else if (edad>=50 && edad<=63) return 7;
    else if (edad>63) return 8;
}

void informe(int valor)
{
    cout << "El programa ha devuelto el siguiente valor: " << valor << endl;
}

int main()
{
    int a,b;
    ingresar (a);
    b=EdadAGrupoEtario(a);
    informe (b);
    return 0;
}
