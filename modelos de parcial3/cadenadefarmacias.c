#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Vectores 50 

int menu();
void ingresardatos( int *vw, int *vx, int *vy, char *vz, int w, int x, int y, char z, int j);
void generarinforme( int *vcodempleado, int *vsucursal  , int *vtipoentrada, char *vturno, int totalfichajes);

int main(){
    
    int vmenu, codempleado, codsucursal, tipoentrada,i=0;
    char turno, vturno[Vectores]; ;
    int vcodempleado[Vectores], vcodsucursal[Vectores], vtipoentrada[Vectores];
    vmenu= menu();
    while (vmenu != 3)
    {
        switch (vmenu)
        {
        case 1:
            printf("ingrese el codigo de empleado:\n");
            scanf("%d", &codempleado);
            printf("ingresar codigo de sucursal(1 a 4):\n");
            scanf("%d", &codsucursal);
            printf("Ingrese el tipo de entrada o salida(1-Entrada, 2-Salida):\n");
            scanf("%d", &tipoentrada);
            printf("Ingrese el turno (m-mañana, t-tarde, n-noche):\n");
            scanf(" %c", &turno);
            ingresardatos(vcodempleado, vcodsucursal, vtipoentrada, vturno, codempleado, codsucursal, tipoentrada, turno, i);
            i++;
                        
            break;

        case 2:
            generarinforme(vcodempleado, vcodsucursal, vtipoentrada, vturno, i);
            break;
        }
        vmenu= menu();      
    }
    printf("programa finalizado.\n");
    return 0;
    
    

}

int menu(){
    int opc;
    printf("1. Ingresar datos de fichaje\n");
    printf("2. Generar informes de fichaje\n");
    printf("3. Salir\n");
    scanf("%d", &opc);
    return opc;
}

void ingresardatos( int *vw, int *vx, int *vy, char *vz, int w, int x, int y, char z, int j){
    *(vw+j)=w;
    *(vx+j)=x;
    *(vy+j)=y;
    *(vz+j)=z;  
}

void generarinforme( int *vcodempleado, int *vsucursal  , int *vtipoentrada, char *vturno, int totalfichajes){
    int totalm=0, totalt=0, totaln=0;
    int i;
    int totalentradas2=0, totalsalidas2=0;

    printf("Codigo\t Sucursal\t Tipo\t Turno\n");


    for(i= 0; i< totalfichajes;i++){
    printf("%d\t %d\t\t %d\t %c\t\n", vcodempleado[i], vsucursal[i], vtipoentrada[i], vturno[i]);
    }

    for(i=0; i< totalfichajes; i++){
        if (*(vturno+i)=='m'){
            totalm++;
        }
        else if (*(vturno+i)=='t'){
            totalt++;
        }
        else if (*(vturno+i)=='n'){
            totaln++;
        }
        if(vsucursal[i]== 2){
             if (*(vtipoentrada+i)==1){
            totalentradas2++;
        }
        else if (*(vtipoentrada+i)==2){
            totalsalidas2++;
        }
        }
       
    }
    printf("Total de fichajes en el turno mañana: %d\n", totalm);
    printf("Total de fichajes en el turno tarde: %d\n", totalt);
    printf("Total de fichajes en el turno noche: %d\n", totaln);
    
    if (totalentradas2>totalsalidas2){
        printf("La sucursal 2 tiene mas entradas que salidas\n");
    }else{
        printf("La sucursal 2 tiene mas salidas que entradas\n");
    }


}    
