#include <iostream>

using namespace std;

void ingresar(int &hora1,int &hora2)
{
    cout << "Ingrese la primer hora en formato (HHMMSS)" << endl;
    cin >> hora1;
    cout << "Ingrese la segunda hora en formato (HHMMSS)" << endl;
    cin >> hora2;
}
int nueva_hora (int hour1, int hour2, bool &dia)
{
    int hora11,min11,seg11;
    int hora22,min22,seg22;
    int newhora=0,newmin=0,newseg=0, hour3=0;
    hora11= hour1 / 10000; /*La primer hora separada*/
    min11 = (hour1-(hora11*10000))/100;
    seg11 = (hour1-(hora11*10000))-(min11*100);
    hora22= hour2 / 10000; /*La segunda hora separada*/
    min22 = (hour2-(hora22*10000))/100;
    seg22 = (hour2-(hora22*10000))-(min22*100);
    newseg = seg11+seg22;
    if (newseg>=60)
    {
        newmin++;
        newseg = newseg - 60;
    }
    newmin = min11 + min22;
    if (newmin>=60)
    {
        newhora++;
        newmin = newmin - 60;
    }
    newhora = hora11 + hora22;
    if (newhora>24)
    {
        newhora = newhora -24;
        dia = true;
    }
    hour3= (newhora*10000)+(newmin*100)+newseg;
    return hour3;
}
void informe (int horazo, bool dia)
{
    cout << "Sumando las dos horas, nos queda como resultado: " << horazo << endl;
    if (dia==true) cout << "Y hubo cambio de dia" << endl;
}
int main()
{
    int a,b,c;
    bool dia=false;
    ingresar(a,b);
    c=nueva_hora(a,b,dia);
    informe (c,dia);
    return 0;
}
