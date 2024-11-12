/* Enzo Escudero, Ignacio Romero ariel Guevara David Rodriguez */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fdiastotales(int diasantiguedad, int diastomados);
void mostrarempleado(char apeempleadomax[], int codempleado, int diastotales);
void mostrartotal(int acumtrabajadores, int totaldiastotales, int codmax);

int main(){
    int codempleado, antiguedad, diasantiguedad, diastomados, diastotales;
    char seguir[3], apellido[50];
    int  acumsolicitudes=0, totaldiassolicitados=0, maxdiastomados=0; 
    int  codempleadomax=0, s=0;

    do {
        printf("Ingrese el codigo del empleado:\n#");
        scanf("%d", &codempleado);
        
        printf("Ingrese el apellido del empleado:\n");
        scanf("%s", apellido);
        
        printf("Ingrese los años trabajados en la fabrica:\n");
        scanf("%d", &antiguedad);
        
        printf("Ingrese si se ha tomado dias previos a las vacaciones (si no se ha tomado dias previos ponga 0):\n");
        scanf("%d", &diastomados);

        
        if (antiguedad < 5  ) {
            diasantiguedad = 14;
        } else if (antiguedad >= 5 && antiguedad< 10 ) {
            diasantiguedad = 21;
        } else if (antiguedad>=10 && antiguedad < 20 ) {
            diasantiguedad = 28;
        } else {
            diasantiguedad = 35;
        }
        
        diastotales = fdiastotales(diasantiguedad, diastomados);
        
        mostrarempleado(apellido, codempleado, diastotales);

        acumsolicitudes = acumsolicitudes + 1;
        totaldiassolicitados= totaldiassolicitados + diastotales;

        if(s==0){
            s=1;
            maxdiastomados = diastotales;
            codempleadomax = codempleado;            
        }
        else if (diastotales > maxdiastomados){
            maxdiastomados = diastotales;
            codempleadomax = codempleado;
        }
        
        printf("Desea seguir ingresando empleados? (si-no)\n");
        scanf("%s", seguir);

    } while (strcmp(seguir, "si") == 0);

    system("cls");
    mostrartotal(acumsolicitudes, totaldiassolicitados, codempleadomax);

    return 0;
}

    int fdiastotales(int diasbrutos, int diasrestantes) {
    return diasbrutos - diasrestantes;
    }

    void mostrarempleado(char apeempleadomax[], int codempleado, int diastotales) {
    printf("El empleado %s con codigo #%d tiene %d dias de vacaciones disponibles\n", 
           apeempleadomax, codempleado, diastotales);
    }

    void mostrartotal(int acumtrabajadores, int totaldiastotales, int codmax){
    printf("la cantidad total de solicitudes de vacaciones realizadas es de %d\n", acumtrabajadores);
    printf("la cantidad total de dias de vacaciones solicitados es de: %d\n", totaldiastotales);
    printf("el empleado codigo de empleado con mayor cantidad de dias solicitados es:#%d", codmax);
    }