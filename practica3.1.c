#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int obtenerNumeroTicket();
void mostrarVenta(int numTicket, int precio);
void mostrarSinEntradas();
int precioapagar(int numdetickets, int precioentrada);

int main() {
    // Capacidad máxima por día y por ubicación
    int entradasdia1campo = 3500, entradasdia1platea = 1000, entradasdia1palco = 500;
    int entradasdia2campo = 3500, entradasdia2platea = 1000, entradasdia2palco = 500;
    int entradasdia3campo = 3500, entradasdia3platea = 1000, entradasdia3palco = 500;

    // Variables de control
    int diafestival, numdetickets, totalapagar = 0;
    char ubicacion[10], continuar[3];
    int precioentrada, numTicket;
    int contdia3campo = 0, totalEntradasVendidas = 0, totalRecaudado = 0;

    do {
        printf("Ingrese el dia del festival (1-2-3):\n");
        scanf("%d", &diafestival);
        fflush(stdin);

        printf("Ingrese la ubicacion de la entrada (campo - platea - palco):\n");
        scanf("%s", ubicacion);
        fflush(stdin);

        printf("Ingrese la cantidad de tickets que desea comprar (1-5):\n");
        scanf("%d", &numdetickets);
        fflush(stdin);

        // Control de capacidad por día y ubicación
        if (diafestival == 1) {
            if (strcmp(ubicacion, "campo") == 0 && entradasdia1campo >= numdetickets) {
                precioentrada = 60;
                entradasdia1campo -= numdetickets;
            } else if (strcmp(ubicacion, "platea") == 0 && entradasdia1platea >= numdetickets) {
                precioentrada = 80;
                entradasdia1platea -= numdetickets;
            } else if (strcmp(ubicacion, "palco") == 0 && entradasdia1palco >= numdetickets) {
                precioentrada = 120;
                entradasdia1palco -= numdetickets;
            } else {
                mostrarSinEntradas();
                continue;
            }
        } else if (diafestival == 2) {
            if (strcmp(ubicacion, "campo") == 0 && entradasdia2campo >= numdetickets) {
                precioentrada = 60;
                entradasdia2campo -= numdetickets;
            } else if (strcmp(ubicacion, "platea") == 0 && entradasdia2platea >= numdetickets) {
                precioentrada = 80;
                entradasdia2platea -= numdetickets;
            } else if (strcmp(ubicacion, "palco") == 0 && entradasdia2palco >= numdetickets) {
                precioentrada = 120;
                entradasdia2palco -= numdetickets;
            } else {
                mostrarSinEntradas();
                continue;
            }
        } else if (diafestival == 3) {
            if (strcmp(ubicacion, "campo") == 0 && entradasdia3campo >= numdetickets) {
                precioentrada = 60;
                entradasdia3campo -= numdetickets;
                contdia3campo += numdetickets;  // Contar entradas vendidas de campo en dia 3
            } else if (strcmp(ubicacion, "platea") == 0 && entradasdia3platea >= numdetickets) {
                precioentrada = 80;
                entradasdia3platea -= numdetickets;
            } else if (strcmp(ubicacion, "palco") == 0 && entradasdia3palco >= numdetickets) {
                precioentrada = 120;
                entradasdia3palco -= numdetickets;
            } else {
                mostrarSinEntradas();
                continue;
            }
        } else {
            printf("Dia invalido\n");
            continue;
        }

        // Obtener numero de ticket
        numTicket = obtenerNumeroTicket();

        // Mostrar la venta
        totalapagar = precioapagar(numdetickets, precioentrada);
        totalRecaudado += totalapagar;
        totalEntradasVendidas += numdetickets;

        mostrarVenta(numTicket, totalapagar);

        // Preguntar si desea continuar
        printf("Desea continuar vendiendo entradas? (si/no): ");
        scanf("%s", continuar);
        fflush(stdin);

    } while (strcmp(continuar, "si") == 0);

    // Mostrar resumen final
    printf("\nResumen Final:\n");
    printf("Entradas vendidas en campo para el dia 3: %d\n", contdia3campo);
    printf("Total de entradas vendidas: %d\n", totalEntradasVendidas);
    printf("Total recaudado: $%d\n", totalRecaudado);

    return 0;
}

// Funcion que genera un numero de ticket correlativo
int obtenerNumeroTicket() {
    static int ticket = 1;  // Variable estatica para mantener el numero correlativo
    return ticket++;
}

// Funcion que muestra la venta
void mostrarVenta(int numTicket, int total) {
    system("cls");  // Limpia la pantalla
    printf("Venta realizada:\n");
    printf("Numero de ticket: %d\n", numTicket);
    printf("Total a pagar: $%d\n", total);
}

// Funcion que informa cuando no hay mas entradas disponibles
void mostrarSinEntradas() {
    system("cls");  // Limpia la pantalla
    printf("No hay mas entradas disponibles para esa ubicacion.\n");
}

// Funcion para calcular el precio total de las entradas
int precioapagar(int numdetickets, int precioentrada) {
    return numdetickets * precioentrada;
}
