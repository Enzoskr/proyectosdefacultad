#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

int precioapagar(int Numtickets, int Precioentrada);

int main() {
    int entradasdia1 = 5000, entradasdia2 = 5000, entradasdia3 = 1;
    int diafestival, numdetickets, totalapagar;
    char ubicacion[10], continuar[3];
    int precioentrada, contdia3campo = 0;
    totalapagar = 0;

    do {
        printf("ingrese el dia del festival:(1-2-3): \n");
        scanf("%d", &diafestival);
        fflush(stdin);
        
        if (diafestival == 1 && entradasdia1 == 0) {
            printf("no hay entradas disponibles para el dia 1\n");
            entradasdia1 = entradasdia1 - numdetickets;
        } else if (diafestival == 2 && entradasdia2 == 0) {
            printf("no hay entradas disponibles para el dia 2\n");
            entradasdia2 = entradasdia2 - numdetickets;
        } else if(diafestival == 3 && entradasdia3 == 0) {
            printf("no hay entradas disponibles para el dia 3\n");
            entradasdia3 = entradasdia3 - numdetickets;
            if (strcmp(ubicacion, "campo") == 0)
            {
                contdia3campo = contdia3campo + numdetickets;
            }}
        printf("ingrese la ubicacion de la entrada:(campo - platea - palco):\n");
        scanf("%s", ubicacion);

        printf("ingrese la cantidad de tickets que desea comprar:(1-2-3-4-5):\n");
        scanf("%d", &numdetickets);
        fflush(stdin);




        if (strcmp( ubicacion, "campo")==0) {
            (precioentrada = 60);
        } else if (strcmp(ubicacion, "platea")==0) {
            (precioentrada = 80);
        } else {
            (precioentrada = 120);
        }

        totalapagar = precioapagar(numdetickets, precioentrada);

        



        
        
        printf("desea continuar con la compra de entradas(si/no): ");
        scanf("%s", continuar);
        fflush(stdin);

    
    } while (strcmp(continuar, "si") == 0);

    printf("la cantidad de entradas disponibles para el dia 1 es: %d\n", entradasdia1);        printf("la cantidad de entradas disponibles para el dia 2 es: %d\n", entradasdia2);
    printf("la cantidad de entradas disponibles para el dia 3 es: %d\n", entradasdia3);
    printf("la cantidad de entradas vendidas para el dia 3 en campo es: %d\n", contdia3campo);
    precioapagar(numdetickets, precioentrada);

    return 0;

}




int precioapagar(int Numtickets, int Precioentrada) {
    printf("Compraste: %d entradas\n", Numtickets);
    printf("El precio total es: %d\n", Numtickets * Precioentrada);
    return Numtickets * Precioentrada;
}
