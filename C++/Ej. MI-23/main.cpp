/*a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores .*/
#include <iostream>

using namespace std;

int main()
{
    int contotal=0;
    float num,prom,acum=0,numax_neg,numin_pos,numin_rango;
    bool cont=false;
    do
    {
        cout << "Ingrese un numero" << endl;
        cin >> num;
        if (num!=0)
        {
            if (cont==false) /*La primera vez que entra*/
        {
            if (num<0.00)
                numax_neg=num;
            else
                numin_pos=num;
            if (num>=-17.30 && num<=26.90)
                numin_rango=num;
            cont=true;
        }
            if (num<0 && num<numax_neg)
                numax_neg = num;
            else if (num>0.00 && num<numin_pos)
                numin_pos = num;
            if (num>=-17.30 && num<=26.90 && num<numin_rango)
                numin_rango = num;
            contotal++;
            acum = acum + num;
        }
    }while(num!=0.00);
    if (cont==true)
    {
        cout << "El valor maximo negativo: " << numax_neg << endl;
        cout << "El valor minimo positivo: " << numin_pos<< endl;
        cout << "El valor minimo dentro del rango -17.3 y 26.9: " << numin_rango<<endl;
        prom = acum / contotal;
        cout << "El promedio de todos los valores: " << prom <<endl;
    }else{
        cout << "Error, no se han ingresado datos" << endl;
    }
    return 0;
}
