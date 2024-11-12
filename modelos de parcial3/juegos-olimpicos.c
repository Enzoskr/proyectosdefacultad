#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void mostrarmenu(int *menu);
void cargar_datos(int camiseta, char posicion, int tirosZona, int tirosFueraZona, int tirosLibre, int *camisetas, char *posiciones, int *puntajes, int j);
void evaluar_partido(int *camisetas, char *posiciones, int *puntajes, int num_jugadores, int puntaje_contrario);

int main() {
    int menu = 0, num_jugadores = 0, puntaje_contrario = 0;
    int camisetas[50] = {0},puntajes[50] = {0};
    char posiciones[50] = {0};
    

    do {
        mostrarmenu(&menu);

        switch (menu) {
            case 1:
                printf("Ingresar puntaje final del equipo contrario:\n");
                scanf("%d", &puntaje_contrario);
                break;

            case 2:
                if (num_jugadores < 50) {
                    int fcamiseta, ftiroszona, ftirosfuerazona, ftiroslibre;
                    char fposicion;

                    printf("Ingresar numero de camiseta del jugador:\n");
                    scanf("%d", &fcamiseta);
                    printf("Ingresar posicion del jugador ('b'-base, 'p'-pilar, 'd'-defensor):\n");
                    fflush(stdin);
                    scanf(" %c", &fposicion);
                    printf("Ingresar tiros en zona anotados:\n");
                    scanf("%d", &ftiroszona);
                    printf("Ingresar tiros fuera de zona anotados:\n");
                    scanf("%d", &ftirosfuerazona);
                    printf("Ingresar tiros libres anotados:\n");
                    scanf("%d", &ftiroslibre);

                    int puntaje = (ftiroszona * 2) + (ftirosfuerazona * 3) + (ftiroslibre * 1);

                    cargar_datos(fcamiseta, fposicion, ftiroszona, ftirosfuerazona, ftiroslibre, camisetas, posiciones, puntajes, num_jugadores);
                    puntajes[num_jugadores] = puntaje;
                    num_jugadores++;
                } else {
                    printf("Maximo de jugadores alcanzado.\n");
                }
                break;

            case 3:
                if (num_jugadores > 0) {
                    evaluar_partido(camisetas, posiciones, puntajes, num_jugadores, puntaje_contrario);
                } else {
                    printf("No hay datos de jugadores ingresados.\n");
                }
                break;

            case 4:
                printf("Programa finalizado\n");
                break;
        }

    } while (menu != 4);

    return 0;
}

void mostrarmenu(int *menu) {
    printf("\nSeleccionar opcion:\n");
    printf("1 - Ingresar puntaje final del equipo contrario\n");
    printf("2 - Ingresar datos de jugadores\n");
    printf("3 - Evaluacion del partido\n");
    printf("4 - Salir\n");
    scanf("%d", menu);
}

void cargar_datos(int camiseta, char posicion, int tirosZona, int tirosFueraZona, int tirosLibre, int *camisetas, char *posiciones, int *puntajes, int j) {
    *(camisetas + j) = camiseta;
    *(posiciones + j) = posicion;
    *(puntajes + j) = (tirosZona * 2) + (tirosFueraZona * 3) + tirosLibre;
}

void evaluar_partido(int *camisetas, char *posiciones, int *puntajes, int num_jugadores, int puntaje_contrario) {
    int total_puntaje = 0;
    int base = 0, pilar = 0, defensor = 0;
    int max_puntaje = 0;
    int max_camiseta = 0;

    for (int i = 0; i < num_jugadores; i++) {
        total_puntaje += puntajes[i];

        if (*(posiciones + i) == 'b') base++;
        else if (*(posiciones + i) == 'p') pilar++;
        else if (*(posiciones + i) == 'd') defensor++;

        if (puntajes[i] > max_puntaje) {
            max_puntaje = puntajes[i];
            max_camiseta = camisetas[i];
        }
    }

    printf("Jugadores por posicion:\n");
    printf("Base: %d\n", base);
    printf("Pilar: %d\n", pilar);
    printf("Defensor: %d\n", defensor);

    printf("Camiseta con mayor puntaje: %d\n", max_camiseta);
    printf("Puntaje total del equipo argentino: %d\n", total_puntaje);

    if (total_puntaje > puntaje_contrario) {
        printf("La seleccion argentina gano.\n");
    } else {
        printf("La seleccion argentina perdio.\n");
    }
}
