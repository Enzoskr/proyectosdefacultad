#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fobetenercodigo();
int fcalcularimporte(int entrada, int salida);
void fmostrardatosdelviaje (int pasajero, int importe, int numerodeviaje );

int main (){
    
    int edad, identificacion, codentrada,codsalida,calcularimporte, importe;
    char password[20] ;
    int numviaje=0;
    int  totalpersonas=0;
    int totalimporte=0;
    int importemayabonado=0;

    
    while(1){
        printf("ingrese la edad(0 si quiere terminar)");
        scanf("%d", &edad);
        if (edad==0)
        {
            break;
        }

        if (edad<5){
            printf("el precio del boleto a ninios menores a 5 anios no se cobra.\n");
            continue;
        }


    printf("ingrese su identificaion\n");
    scanf("%d", &identificacion);
    printf("ingrese la password:\n");
    scanf("%s", password);

    printf("seleccione su estacion de entrada:\n");
    codentrada=fobetenercodigo();



    printf("seleccione su estacion de salida:\n");
    codsalida=fobetenercodigo();

    importe=fcalcularimporte(codentrada,codsalida);

    fmostrardatosdelviaje(identificacion,importe, numviaje);
    numviaje=numviaje+1;

    totalpersonas++;
    totalimporte=totalimporte+importe;
    
    if(importe>importemayabonado){
        importemayabonado= importe;
    }




    }
    
    printf("La cantidad de personas que viajaron son: %d\n", totalpersonas);
    printf("El importe total es de %d\n",totalimporte);
    printf("el mayor importe abonado en pesos es:%d\n",importemayabonado);

    return 0;
}



int fobetenercodigo(){
    int codigo;
        printf("ingrese la estacion:"
    "\n1-Moreno"
    "\n2-Paso del rey"
    "\n3-Merlo"
    "\n4-Padua"
    "\n5-Ituzaingo"
    "\n6-Castelar"
    "\n7-Moron"
    "\n8-Haedo"
    "\n9 Ramos Mejia"
    "\n10 Ciudadela"
    "\n11 Liniers"
    "\n12-Villa Luro"
    "\n13-Floresta"
    "\n14-Flores"
    "\n15-Caballito"
    "\n16-Once\n"
    );
    
    printf("seleccione la estacion:");
    scanf("%d", &codigo);

    return codigo;
}

int fcalcularimporte(int entrada, int salida){
    int dife= salida-entrada;
    if(dife<0){
        dife= -dife;

    }
    return dife*2;


}

void fmostrardatosdelviaje (int pasajero, int importe, int numerodeviaje ){
    printf("viaje #%d - identificacion: #%d - importe en pesos: $%d \n", numerodeviaje, pasajero, importe);
}