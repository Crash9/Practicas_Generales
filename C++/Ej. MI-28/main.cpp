/*Ej. MI-28: Dada una serie de caracteres que conforman una oración, donde cada palabra está
separada de la siguiente por un carácter blanco y la oración finaliza con un punto. Se pide
informar:
a) cantidad de veces que apareció cada vocal
b) cantidad de palabras que contiene la oración
c) cantidad de letras que posee la palabra más larga.*/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;


int main()
{
    int i,cont_a=0,cont_e=0,cont_i=0,cont_o=0,cont_u=0,cont_palabras=0, cont_paroleant=0,cont_parole=0;
    char oracion[100];
    cout << "Ingrese la oracion, finalizando con un punto" << endl;
    cin.getline(oracion,100);
    for (i=0;i<100;i++)
    {
        if (oracion[i]==' ') cont_palabras++;
        if (oracion[i]=='a') cont_a++;
        if (oracion[i]=='e') cont_e++;
        if (oracion[i]=='i') cont_i++;
        if (oracion[i]=='o') cont_o++;
        if (oracion[i]=='u') cont_u++;
        if (oracion[i]!=' ' || oracion[i]!='.')
            {
                cont_parole++;
            }else{
                if (cont_parole>cont_paroleant)
                {
                cont_paroleant=cont_parole;
                cont_parole=0;
                }else{
                cont_paroleant=0;
                }
            }
        if (oracion[i]=='.')
        {
            cont_palabras++;
            break;
        }
    }
    cout << "La vocal 'a' aparecio " << cont_a << " veces" << endl;
    cout << "La vocal 'e' aparecio " << cont_e << " veces" << endl;
    cout << "La vocal 'i' aparecio " << cont_i << " veces" << endl;
    cout << "La vocal 'o' aparecio " << cont_o << " veces" << endl;
    cout << "La vocal 'u' aparecio " << cont_u << " veces" << endl;
    cout << "La oracion contiene "<< cont_palabras<<" palabras" << endl;
    cout << "La palabra mas larga posee " << cont_parole << " letras." << endl;
    return 0;
}
