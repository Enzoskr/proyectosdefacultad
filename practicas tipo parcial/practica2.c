#include <stdio.h>
#include <stdlib.h>

int verificar_existencia(int cantidad);
int obtener_precio(int seleccionA, int seleccionB, int seleccionC);
void limpiar_consola();
void mostrar_total(int total);

int main() {
    int stockA = 80, stockB = 80, stockC = 80;
    int cantidad_vendidaA = 0;
    int monto_total = 0;
    int opcionA = 0, opcionB = 0, opcionC = 0;
    char opcion_continuar;

    do {
        limpiar_consola();

        printf("\n=== Venta de Peliculas Ip Man ===\n");
        printf("Stock actual:\n");
        printf("Ip Man 1: %d\n", stockA);
        printf("Ip Man 2: %d\n", stockB);
        printf("Ip Man 3: %d\n", stockC);

        opcionA = opcionB = opcionC = 0;

        printf("\nSeleccione las peliculas a vender (1=Si, 0=No):\n");

        printf("Desea vender 'Ip Man 1'? (1=Si, 0=No): ");
        scanf("%d", &opcionA);
        while (opcionA != 0 && opcionA != 1) {
            printf("Por favor ingrese una opcion valida (1=Si, 0=No): ");
            scanf("%d", &opcionA);
        }

        printf("Desea vender 'Ip Man 2'? (1=Si, 0=No): ");
        scanf("%d", &opcionB);
        while (opcionB != 0 && opcionB != 1) {
            printf("Por favor ingrese una opcion valida (1=Si, 0=No): ");
            scanf("%d", &opcionB);
        }

        printf("Desea vender 'Ip Man 3'? (1=Si, 0=No): ");
        scanf("%d", &opcionC);
        while (opcionC != 0 && opcionC != 1) {
            printf("Por favor ingrese una opcion valida (1=Si, 0=No): ");
            scanf("%d", &opcionC);
        }

        if (opcionA == 0 && opcionB == 0 && opcionC == 0) {
            printf("No se ha seleccionado ninguna pelicula para vender.\n");
            continue;
        }

        if ((opcionA && !verificar_existencia(stockA)) || 
            (opcionB && !verificar_existencia(stockB)) || 
            (opcionC && !verificar_existencia(stockC))) {
            printf("\nNo hay stock suficiente para las peliculas seleccionadas.\n");
        } else {
            if (opcionA) stockA--;
            if (opcionB) stockB--;
            if (opcionC) stockC--;
            if (opcionA) cantidad_vendidaA++;

            int valor = obtener_precio(opcionA, opcionB, opcionC);
            monto_total += valor;

            mostrar_total(valor);
        }

        if (stockA == 0 && stockB == 0 && stockC == 0) {
            printf("Se ha agotado el stock de todas las peliculas.\n");
            break;
        }

        printf("Desea realizar otra venta? (s/n): ");
        fflush(stdin);
        scanf(" %c", &opcion_continuar);

    } while (opcion_continuar == 's' || opcion_continuar == 'S');

    printf("\nPeliculas de 'Ip Man 1' vendidas: %d\n", cantidad_vendidaA);
    printf("Total facturado: %d pesos\n", monto_total);

    return 0;
}

int verificar_existencia(int cantidad) {
    return cantidad > 0;
}

int obtener_precio(int seleccionA, int seleccionB, int seleccionC) {
    if (seleccionA && seleccionB && seleccionC) {
        return 600;
    } else {
        return (seleccionA + seleccionB + seleccionC) * 250;
    }
}

void limpiar_consola() {
    system("cls");
}

void mostrar_total(int total) {
    limpiar_consola();
    printf("El importe a pagar es: %d pesos.\n", total);
}
