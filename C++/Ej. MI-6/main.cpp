#include <iostream>

using namespace std;

int main()
{
    int fecha1,fecha2;
    cout << "Ingrese la primer fecha de acuerdo al siguiente formato: AAAAMMDD" << endl;
    cin >> fecha1;
    cout << "Ingrese la segunda fecha de acuerdo al siguiente formato: AAAAMMDD" << endl;
    cin >> fecha2;
if (fecha1==fecha2)
        cout << "Las fechas ingresados son iguales" << endl;
    else if (fecha1>fecha2)
        cout << "La fecha " << fecha1 << " es mas reciente que  " << fecha2 << endl;
    else
        cout << "La fecha " << fecha2 << " es mas reciente que  " << fecha1 << endl;
    return 0;
}
