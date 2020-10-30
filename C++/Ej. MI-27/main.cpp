/*Ej. MI-27: En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de
todos contra todos. Por cada partido disputado por un equipo se dispone de la siguiente
información:
a) Nro. de equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
Desarrollar el programa que imprima:
Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si
empata).*/
/*Como extra le agregue que muestre el ganador del torneo*/
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int total,i,j,codigo,ganador,numax;
    int* equipos;
    srand(time(0));
    cout << "Cuantos equipos participaran en el torneo?" << endl;
    cin >> total;
    equipos = new int[total];
    for (i=0;i<total;i++)
    {
        equipos[i] =0;
    }
    for (i=0;i<total;i++)
    {
        for (j=0;j<total-1;j++)
        {
            codigo = (rand() %3)+1;
            if (codigo==1) /*Gano*/
                equipos[i] = equipos[i]+3;
            else if (codigo==2) /*Empato*/
                equipos[i] = equipos[i]+1;
        }
        if (i==0)
        {
            ganador = i;
            numax = equipos [i];
        }
        else{
            if (equipos[i]>numax)
            {
                ganador = i;
                numax = equipos [i];
            }
        }
    }
    cout << "Los resultados del torneo fueron los siguientes: \n" << endl;
    for (i=0;i<total;i++)
    {
        cout << "Equipo Nro. " << i << ", puntuacion: " << equipos[i] << endl;
    }
    cout << "\nEl ganador del torneo fue el equipo Nro. " << ganador << ", con un total de " << numax << " puntos." << endl;
    delete[] equipos;
    return 0;
}
