#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdio>
#include<cstring>
#include<stdlib.h>


using namespace std;
struct Equipo
{
    char Nombre[20];
    char Confederacion[10];
    long NumBol;
};

int main()
{
    FILE *mundial;
    Equipo equipox;
    mundial = fopen("bolillos.mundial","wb");

    Equipo equipos[32];
    {
      strcpy(equipos[0].Nombre ,"Rusia");
      strcpy(equipos[0].Confederacion ,"UEFA");
      equipos[0].NumBol=1;
      strcpy(equipos[1].Nombre ,"Alemania");
      strcpy(equipos[1].Confederacion, "UEFA");
      equipos[1].NumBol=1;
      strcpy(equipos[2].Nombre ,"Brasil");
      strcpy(equipos[2].Confederacion, "Conmebol");
      equipos[2].NumBol=1;
      strcpy(equipos[3].Nombre ,"Portugal");
      strcpy(equipos[3].Confederacion, "UEFA");
      equipos[3].NumBol=1;
      strcpy(equipos[4].Nombre ,"Argentina");
      strcpy(equipos[4].Confederacion, "Conmebol");
      equipos[4].NumBol=1;
      strcpy(equipos[5].Nombre ,"Belgica");
      strcpy(equipos[5].Confederacion, "UEFA");
      equipos[5].NumBol=1;
      strcpy(equipos[6].Nombre ,"Polonia");
      strcpy(equipos[6].Confederacion, "UEFA");
      equipos[6].NumBol=1;
      strcpy(equipos[7].Nombre ,"Francia");
      strcpy(equipos[7].Confederacion, "UEFA");
      equipos[7].NumBol=1;
      strcpy(equipos[8].Nombre ,"España");
      strcpy(equipos[8].Confederacion ,"UEFA");
      equipos[8].NumBol=2;
      strcpy(equipos[9].Nombre ,"Peru");
      strcpy(equipos[9].Confederacion, "Conmebol");
      equipos[9].NumBol=2;
      strcpy(equipos[10].Nombre ,"Suiza");
      strcpy(equipos[10].Confederacion, "UEFA");
      equipos[10].NumBol=2;
      strcpy(equipos[11].Nombre ,"Inglaterra");
      strcpy(equipos[11].Confederacion, "UEFA");
      equipos[11].NumBol=2;
      strcpy(equipos[12].Nombre ,"Colombia");
      strcpy(equipos[12].Confederacion, "Conmebol");
      equipos[12].NumBol=2;
      strcpy(equipos[13].Nombre ,"Mexico");
      strcpy(equipos[13].Confederacion, "Concacaf");
      equipos[13].NumBol=2;
      strcpy(equipos[14].Nombre ,"Uruguay");
      strcpy(equipos[14].Confederacion, "Conmebol");
      equipos[14].NumBol=2;
      strcpy(equipos[15].Nombre ,"Croacia");
      strcpy(equipos[15].Confederacion, "UEFA");
      equipos[15].NumBol=2;
      strcpy(equipos[16].Nombre ,"Dinamarca");
      strcpy(equipos[16].Confederacion ,"UEFA");
      equipos[16].NumBol=3;
      strcpy(equipos[17].Nombre ,"Islandia");
      strcpy(equipos[17].Confederacion, "UEFA");
      equipos[17].NumBol=3;
      strcpy(equipos[18].Nombre ,"Costa Rica");
      strcpy(equipos[18].Confederacion, "Concacaf");
      equipos[18].NumBol=3;
      strcpy(equipos[19].Nombre ,"Suecia");
      strcpy(equipos[19].Confederacion, "UEFA");
      equipos[19].NumBol=3;
      strcpy(equipos[20].Nombre ,"Tunez");
      strcpy(equipos[20].Confederacion, "CAF");
      equipos[20].NumBol=3;
      strcpy(equipos[21].Nombre ,"Egipto");
      strcpy(equipos[21].Confederacion, "CAF");
      equipos[21].NumBol=3;
      strcpy(equipos[22].Nombre ,"Senegal");
      strcpy(equipos[22].Confederacion, "CAF");
      equipos[22].NumBol=3;
      strcpy(equipos[23].Nombre ,"Iran");
      strcpy(equipos[23].Confederacion, "AFC");
      equipos[23].NumBol=3;
      strcpy(equipos[24].Nombre ,"Serbia");
      strcpy(equipos[24].Confederacion ,"UEFA");
      equipos[24].NumBol=4;
      strcpy(equipos[25].Nombre ,"Nigeria");
      strcpy(equipos[25].Confederacion, "CAF");
      equipos[25].NumBol=4;
      strcpy(equipos[26].Nombre ,"Australia");
      strcpy(equipos[26].Confederacion, "AFC");
      equipos[26].NumBol=4;
      strcpy(equipos[27].Nombre ,"Japon");
      strcpy(equipos[27].Confederacion, "AFC");
      equipos[27].NumBol=4;
      strcpy(equipos[28].Nombre ,"Marruecos");
      strcpy(equipos[28].Confederacion, "CAF");
      equipos[28].NumBol=4;
      strcpy(equipos[29].Nombre ,"Panama");
      strcpy(equipos[29].Confederacion, "Concacaf");
      equipos[29].NumBol=4;
      strcpy(equipos[30].Nombre ,"Corea Del Sur");
      strcpy(equipos[30].Confederacion, "AFC");
      equipos[30].NumBol=4;
      strcpy(equipos[31].Nombre ,"Arabia Saudita");
      strcpy(equipos[31].Confederacion, "AFC");
      equipos[31].NumBol=4;
    }
    fwrite(equipos,sizeof(Equipo),32,mundial);

    fclose(mundial);

    /*corroboramos */
    mundial= fopen("bolillos.mundial","rb");
    cout<< "    EQUIPO " <<"    |  "<<"CONFEDERACION  "<<" | "<<"BOLILLERO"<<endl;
    cout<<"-------------------------------------------------"<<endl;

    while (fread(&equipox,sizeof(Equipo),1,mundial))
    {
        printf("\n\%14s\%15s\%10d", equipox.Nombre , equipox.Confederacion ,equipox.NumBol );

    }



    return 0;
}
