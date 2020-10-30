/**/

#include <iostream>
#include <string.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main()
{
    int vuelos=0,nro_vuelo,asientos, pasajeros,nro_pasaporte,importe, recaudado=0,i,destinos;
    char opcion;
    string destino;
    string destino2[] = {"Miami","Barcelona","Nueva York","Madrid","Lisboa","Rio de Janeiro","Quito","Medellin","Valparaiso",
                         "La Paz","Sodoma del Estero","Londres","Tokio","Moscu","Berlin","Paris","Salta","Estambul","Roma"}
    srand(time(0));
    cout << "Se desea empezar el programa de forma manual o automatica?" << endl;
    cout << "a_Automatico\nb_Manual\nc_Salir" << endl;
    do
    {
        opcion = getch();
    }while (opcion!=27 && !(opcion>='A' && opcion<='C') && !(opcion>='a' && opcion<='c'));
    switch (opcion)
    {
        case 'a':
        case 'A':
                cout << "Cuantos vuelos se han realizado al exterior?" << endl;
                cin >> vuelos;
                if (vuelos<=0)
                {
                    cout << "\nHasta luego!" << endl;
                    break;
                }else{
                    do
                    {
                        nro_vuelo = (rand () % 9999 );
                        destinos = (rand() %19);
                        destino = destino2[destinos];
                        asientos = (rand() %200) +101;
                        pasajeros = (rand() %301);
                        if (pasajeros>0)
                        {
                           for (i=0;i<pasajeros;i++)
                        {
                            nro_pasaporte= (rand() %999999999)+1;
                            importe = (rand()% 999)+1;
                            recaudado = recaudado + importe; /*Ganancia del mes*/
                        }
                        }
                    vuelos++;
                    }while(nro_vuelo>0);
                    }
        break; /*Fin case A*/

        case 'b':
        case 'B':
                cout << "Cuantos vuelos se han realizado al exterior?" << endl;
                cin >> vuelos;
                if (vuelos<=0)
                {
                    cout << "\nHasta luego!" << endl;
                    break;
                }else{
                    do
                    {
                        cout << "Ingrese el numero de vuelo" << endl;
                        cin >> nro_vuelo;
                        cout << "Ingrese el destino del vuelo" << endl;
                        cin >> destino;
                        cout << "Cuantos asientos libres posee el vuelo?" << endl;
                        cin >> asientos;
                        cout << "Cuantos pasajeros abordaran el vuelo?" << endl;
                        cin >> pasajeros;
                        for (i=0;i<pasajeros;i++)
                        {
                            cout << "Ingrese el numero del pasaporte del pasajero nro. " << i << endl;
                            cin >> nro_pasaporte;
                            cout << "Cuanto pago el pasajero por el pasaporte?" << endl;
                            cin >> importe;
                            recaudado = recaudado + importe; /*Ganancia del mes*/
                        }

                    vuelos++;
                    }while(nro_vuelo>0);
                    }
                    cout << "En el mes se recaudo un total de $" << recaudado << endl;
        break; /*Fin case B*/

        case 'c':
        case 'C':
                return 0;
        break; /*Fin case C*/
    }/*Fin switch*/
return 0;
}
