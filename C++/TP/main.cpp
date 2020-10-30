#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdio>
#include<cstring>
#include<stdlib.h>
#include<time.h> //para usar la funcion srand.
#define CANT_EQUIPOS 32
#define CANT_GRUPOS 8
#define NOMBREARCHIVO "bolillos.mundial"


using namespace std;
struct Equipo
{
    char Nombre[20];
    char Confederacion[10];
    long NumBol;
    long NumGrupo;
    char LetraGrupo;
};
struct grupos
{
    Equipo NumBol[4];

};
struct bolillos
{
   Equipo num[8] ;
};
void MostrarMenu()
{
    cout<<" Seleccione una opcion "<<endl;
    cout<<" 1.- Cargar datos de equipos "<<endl;
    cout<<" 2.- Mostrar archivo "<<endl;
    cout<<" 3.- Sortear fase de grupos "<<endl;
    cout<<" 4.- Ordenamiento por Numero de grupo "<<endl;
    cout<<" 5.- Ordenamiento por Nombre de Equipo "<<endl;
    cout<<" 6.- Ordenamiento por Confederacion "<<endl;
    cout<<" 7.- Ordenamiento por Numero de Grupo y Confederacion "<<endl;
    cout<<" 8.- Ordenamiento por Numero de Grupo ,Confederacion y Nombre de Equipo "<<endl;
    cout<<" Esc. para salir. "<<endl;
}

// Cargamos los registros en el archivo desde el codigo.
void cargarEquipos()
{
    FILE *mundial;
    Equipo equipos[CANT_EQUIPOS];
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
      equipos[9].NumBol= 2;
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
    mundial = fopen(NOMBREARCHIVO,"wb");

    fwrite(equipos,sizeof(Equipo),CANT_EQUIPOS,mundial);

    fclose(mundial);
}
int MostrarArchivo(void)
{
    FILE *mundial;
    Equipo equipoaux0;
    if ( mundial= fopen(NOMBREARCHIVO,"rb"))
   {

    cout<< "  EQUIPO " <<"    |  "<<" CONFEDERACION  "<<" | "<<"  BOLILLERO "<<endl;
    cout<<"-------------------------------------------------"<<endl;

    while (fread(&equipoaux0,sizeof(Equipo),1,mundial))
    {
        //cout<< equipoaux0.Nombre <<"        "<<equipoaux0.Confederacion<<"           "<<equipoaux0.NumBol<<endl;
        printf("\n\%14s\%15s\%10l", equipoaux0.Nombre, equipoaux0.Confederacion ,equipoaux0.NumBol );

    }
    cout<<endl;
    fclose(mundial);
    } return 1;
 return 0;
}

  void MostrarFaseDeGrupos(grupos g[],int tam)
  {
      for(int i=0 ; i<tam ; i++)
      {
          cout<< "*****GRUPO "<< i+1 <<" *****"<<endl;
          for(int j=0 ; j<4 ; j++)
          {
          cout<<g[i].NumBol[j].Nombre<<"    "<<g[i].NumBol[j].Confederacion<<endl; //"  "<<g[i].NumBol[j].NumBol<<" "<<g[i].NumBol[j].NumGrupo<<endl;;

          }


      }
  }

  void CrearAchivoDeEquipos(char Grupoa[],char Grupob[], char Grupoc[],char Grupod[],char Grupoe[], char Grupof[],char Grupog[], char Grupoh[])
 {
     FILE *output,*a,*b,*c,*d,*e,*f,*g,*h;
     Equipo aux[4];
     a=fopen(Grupoa,"rb");
     b=fopen(Grupob,"rb");
     c=fopen(Grupoc,"rb");
     d=fopen(Grupod,"rb");
     e=fopen(Grupoe,"rb");
     f=fopen(Grupof,"rb");
     g=fopen(Grupog,"rb");
     h=fopen(Grupoh,"rb");
     output=fopen("EQUIPOSORTEADOS.DAT","wb");
         fread(aux,sizeof(Equipo),4,a);
         fwrite(aux,sizeof(Equipo),4,output);
         fread(aux,sizeof(Equipo),4,b);
         fwrite(aux,sizeof(Equipo),4,output);
         fread(aux,sizeof(Equipo),4,c);
         fwrite(aux,sizeof(Equipo),4,output);
         fread(aux,sizeof(Equipo),4,d);
         fwrite(aux,sizeof(Equipo),4,output);
         fread(aux,sizeof(Equipo),4,e);
         fwrite(aux,sizeof(Equipo),4,output);
         fread(aux,sizeof(Equipo),4,f);
         fwrite(aux,sizeof(Equipo),4,output);
         fread(aux,sizeof(Equipo),4,g);
         fwrite(aux,sizeof(Equipo),4,output);
         fread(aux,sizeof(Equipo),4,h);
         fwrite(aux,sizeof(Equipo),4,output);
         fclose(a);
         fclose(b);
         fclose(c);
         fclose(d);
         fclose(e);
         fclose(f);
         fclose(g);
         fclose(h);
         fclose(output);
     return;
 }
 int CargarArchivoAVector(char nombre[],Equipo v[], int tam ) //COPIA los registros de un arquivo a un vector.
 {
    FILE *f;
    if (f=fopen(nombre,"rb"))
    {
    fread(v,sizeof(Equipo),tam,f) ;
    fclose(f);
    return 1;
    }

    return 0;
 }
 bool VerificarConfederacion(char Nombre[],char OtroNombre[]) //verifica si dos  confederaciones son iguales
 {
     for (int i=0 ; i < 4; i++)
     {
         if (Nombre == OtroNombre)
            return true;
     }return false;
 }
 bool VerificarNumero(int v[],int num ,int tam)
 {
        for (int j=0;j<tam;j++)
        {
           if( num == v[j] )
            return false;       // devuelve false en caso de ser igual al numero de la funcion rand
        }

    return true;   //true si no encuentra coincidencia
 }
 void  SorteoGrupos(char archivo[])
 {
     FILE *mundial;
     FILE *GrupoA ;
     FILE *GrupoB ;
     FILE *GrupoC ;
     FILE *GrupoD ;
     FILE *GrupoE ;
     FILE *GrupoF ;
     FILE *GrupoG;
     FILE *GrupoH;
     bolillos bolilleros[4];
     grupos Grupo[8];
     //int ContadorAux[8] = {-1,-1,-1,-1,-1,-1,-1,-1}; //lo inicializo en -1 , guarda numeros no repetidos, para que no se repitan los equipos de un bolillero
     srand(time(NULL));
     int Aleatorio ;


     if (mundial = fopen(archivo,"rb"))
     {
            for (int i=0 ; i<4; i++)
            {
            fread(&bolilleros[i], sizeof(Equipo),8, mundial);
            }
            fclose(mundial);
     }


        for (int i=0 ; i<4 ; i++)
        {

              for (int j=0 ;j<8 ;j++)
              {
                Aleatorio = rand()%8;

               if(i==0 && j==0)
               {
               Grupo[j].NumBol[i] = bolilleros[i].num[j];
               Grupo[j].NumBol[i].NumGrupo = j+1;
               //ContadorAux[j] = j;
               }
               else
               {
                Grupo[j].NumBol[i] = bolilleros[i].num[Aleatorio];
                Grupo[j].NumBol[i].NumGrupo = j+1;
                //ContadorAux[j]=Aleatorio;


               }
              }

          }


            GrupoA = fopen("Grupo.A","wb");
            fwrite(&Grupo[0].NumBol,sizeof(Equipo),4,GrupoA);
            fclose(GrupoA);
            GrupoB = fopen("Grupo.B","wb");
            fwrite(&Grupo[1].NumBol,sizeof(Equipo),4,GrupoB);
            fclose(GrupoB);
            GrupoC = fopen("Grupo.C","wb");
            fwrite(&Grupo[2].NumBol,sizeof(Equipo),4,GrupoC);
            fclose(GrupoC);
            GrupoD = fopen("Grupo.D","wb");
            fwrite(&Grupo[3].NumBol,sizeof(Equipo),4,GrupoD);
            fclose(GrupoD);
            GrupoE = fopen("Grupo.E","wb");
            fwrite(&Grupo[4].NumBol,sizeof(Equipo),4,GrupoE);
            fclose(GrupoE);
            GrupoF = fopen("Grupo.F","wb");
            fwrite(&Grupo[5].NumBol,sizeof(Equipo),4,GrupoF);
            fclose(GrupoF);
            GrupoG = fopen("Grupo.G","wb");
            fwrite(&Grupo[6].NumBol,sizeof(Equipo),4,GrupoG);
            fclose(GrupoG);
            GrupoH = fopen("Grupo.H","wb");
            fwrite(&Grupo[7].NumBol,sizeof(Equipo),4,GrupoH);
            fclose(GrupoH);

             MostrarFaseDeGrupos(Grupo,8);
             CrearAchivoDeEquipos("Grupo.A","Grupo.B","Grupo.C","Grupo.D","Grupo.E","Grupo.F","Grupo.G","Grupo.H");


 }



 void OrdenamientoNumGrupo(Equipo v[], int tam)
 {  Equipo aux ;
    for (int i=0 ; i< tam - 1; i++)
    {
        for (int j=0 ;j<tam-i-1;j++)
        {
            if( v[j].NumGrupo > v[j+1].NumGrupo )
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
  return;
 }

 void OrdenamientoNombreEquipo(Equipo v[],int tam)
 {
   Equipo aux;
    for (int i=0 ; i< CANT_EQUIPOS - 1; i++)
    {
        for (int j=0 ;j<CANT_EQUIPOS-i-1;j++)
        {
            if( strcmp(v[j].Nombre ,v[j+1].Nombre )>0)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }return;
 }

 void OrdenamientoConfederacion(Equipo v[], int tam)
 { Equipo aux;
    for (int i=0 ; i< CANT_EQUIPOS - 1; i++)
    {
        for (int j=0 ;j<CANT_EQUIPOS-i-1;j++)
        {
            if( strcmp(v[j].Confederacion ,v[j+1].Confederacion)>0)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
  return;
 }

 void OrdenNumGrupoConfederacion(Equipo v[],int tam)
 { Equipo aux;
    for (int i=0 ; i< CANT_EQUIPOS - 1; i++)
    {
        for (int j=0 ;j<CANT_EQUIPOS-i-1;j++)
        {
            if( v[j].NumGrupo > v[j+1].NumGrupo || (v[j].NumGrupo == v[j+1].NumGrupo && ( strcmp(v[j].Confederacion ,v[j+1].Confederacion)>0)))
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }return;

 }

 void OrdenNumGrupoConfederacionNombre(Equipo v[], int tam)
 { Equipo aux;
    for (int i=0 ; i< CANT_EQUIPOS - 1; i++)
    {
        for (int j=0 ;j<CANT_EQUIPOS-i-1;j++)
        {
            if( v[j].NumGrupo > v[j+1].NumGrupo || (v[j].NumGrupo == v[j+1].NumGrupo && ( strcmp(v[j].Confederacion ,v[j+1].Confederacion)>0)) || (( strcmp(v[j].Confederacion ,v[j+1].Confederacion)==0) && (strcmp(v[j].Nombre ,v[j+1].Nombre )>0)))
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
   return;

 }
 void MostrarVector(Equipo v[], int tam) //procedimiento  que muestra por pantalla la lista de equipos
 {
      cout<< "    EQUIPO " <<"    |  "<<"CONFEDERACION  "<<" | "<<"GRUPO"<<endl;
      cout<<"-------------------------------------------------"<<endl;
     for(int i=0; i<CANT_EQUIPOS; i++)
     {

        printf("\n\%14s\%15s\%10d", v[i].Nombre , v[i].Confederacion ,v[i].NumGrupo );

     }
    cout<<endl;
 }



int main()
{  FILE *mundial;
    char opcion;
  Equipo EquiposMundial[CANT_EQUIPOS]; //Registro donde se guardara los grupos sorteados


        do
        {   MostrarMenu();
            do
            {
                opcion=getch();
            }while (opcion !=27 && opcion !='1' && opcion !='2' && opcion !='3' && opcion !='4' && opcion !='5' && opcion !='6' && opcion !='7' && opcion !='8' );
           switch(opcion)
           {
            case '1':
                cargarEquipos();
                cout <<"equipos cargados correctamente!!!"<<endl<<endl;

            break;
            case '2':
                if( MostrarArchivo());
                else
                 cout <<"No se puede mostrar! archivo vacio !!!"<<endl;
            break;
            case '3':
                //if(SorteoGrupos(NOMBREARCHIVO));
                //else
                 //cout <<"No se puede sortear! archivo vacio !!!"<<endl;
                 SorteoGrupos(NOMBREARCHIVO);
                 CargarArchivoAVector("EQUIPOSORTEADOS.DAT",EquiposMundial,CANT_EQUIPOS);
                  //poner el archivo de equipos
                 //else
                 //cout <<"Error al cargar !!!"<<endl;

            break;
            case '4':
                OrdenamientoNumGrupo(EquiposMundial,CANT_EQUIPOS);
                MostrarVector(EquiposMundial,CANT_EQUIPOS);
            break;
            case '5':
                OrdenamientoNombreEquipo(EquiposMundial,CANT_EQUIPOS);
                MostrarVector(EquiposMundial,CANT_EQUIPOS);
            break;
            case '6':
                OrdenamientoConfederacion(EquiposMundial,CANT_EQUIPOS);
                MostrarVector(EquiposMundial,CANT_EQUIPOS);
            break;
            case '7':
                OrdenNumGrupoConfederacion(EquiposMundial,CANT_EQUIPOS);
                MostrarVector(EquiposMundial,CANT_EQUIPOS);
            break;
            case '8':
                OrdenNumGrupoConfederacionNombre(EquiposMundial,CANT_EQUIPOS);
                MostrarVector(EquiposMundial,CANT_EQUIPOS);
            break;
           }
           cout<<"Presione una tecla para continuar."<<endl;
           getch();
        }while( opcion != 27);

    return 0;
}
