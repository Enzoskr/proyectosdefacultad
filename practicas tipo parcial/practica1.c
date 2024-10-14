#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>


float cobrar(float bc, int dia,char hor);
float fvuelto(float importe, float entrega);
void imprime(float importe, float vuelto);

int main(){
    char cat[10], horario, seguir[3];
    
    int dia, contautos, conttotal;
    float base, importeacobrar,dinero_entregado, vuelto, acumrec;
    contautos=0;
    conttotal=0;
    acumrec=0;

do{
    printf("ingrese la categoria del vehiculo(moto,auto, camioneta, camion):");
    /* %s porque es string */
    scanf("%s",cat);

    printf("Dias de la semana: 1(lunes), 2(martes), 3(miércoles), 4(jueves), 5(viernes), 6(sabado), 7(domingo).");
    //%d porque es un decimal no estaria mal un %i tambien
    scanf("%d", &dia);
    fflush(stdin);
    
    printf("ingrese el horario(a= para hora pico, b=hora no pico): ");
    //%c porque es caracter
    scanf(" %c", &horario);
    fflush(stdin);

    if(strcmp(cat,"moto")==0)
    {
        base=5;
    }
    else if(strcmp(cat,"auto")==0)
    {
        base=10;
        if(horario=='a')
        {
            contautos++;
        }
    }
       else if(strcmp(cat,"camioneta")==0)
    {
        base=15;
    } else
    {
        base=20;
    }
    
    importeacobrar=cobrar(base,dia,horario);
    fflush(stdin);
    printf("ingrese el importe entregado por el conductor: ");
    scanf("%f", &dinero_entregado);

    vuelto=fvuelto(importeacobrar,dinero_entregado);
    
    imprime(importeacobrar,vuelto);
    conttotal++;
    acumrec=acumrec+importeacobrar;

fflush(stdin);
printf("desea seguir ingresando vehiculos?(responda con si/no):");
scanf("%s", seguir);


}
while (strcmp(seguir,"si")==0);

printf("\n\nCantidad de ventas de categoria auto en horario pico: %d\n", contautos);
printf("total de pases vendidos: %d\n total recaudado es de: %.2f", conttotal, acumrec);
}

float cobrar(float bc, int dia, char hor){

float cobrar;

if ( dia>=1 && dia<=5 && hor=='a')
{
    cobrar=bc*1.2;
    }
    else 
{
    cobrar=bc*0.80;
}

return cobrar;
}

float fvuelto(float importe,float entrega){

    float vuelto;
    vuelto=entrega-importe;

    return vuelto;
}

void imprime(float importe, float vuelto){
    
    system("cls");
    printf("Importe es de: %.2f\n", importe);
    printf("vuelto de %.2f\n",vuelto );

}

