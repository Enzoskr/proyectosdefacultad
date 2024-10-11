#include <stdio.h>
#include <string.h>
#include <stdlib.h>


float importe_cobrar(float bc, int dias, char hor);
float fvuelto(float importe, float entrega);
void imprime(float importe, float vuelto);

int main() {
    
    char cat[10], horario, seguir[3];
    int dia, contautos, contpases;
    float cobrar, base, dineroentregado, vuelto, acumrecaudado;
    contautos=0;
    contpases=0;
    acumrecaudado=0;

    do {
        // Ingreso de la categoría del vehículo
        printf("Ingrese la categoría de vehículo (moto-auto-camioneta-camión): ");
        scanf("%s", cat);

        // Ingreso del día de la semana
        printf("Ingrese el día de la semana: \n1 (lunes), \n2 (martes), \n3 (miércoles), \n4 (jueves), \n5 (viernes), \n6 (sábado), \n7 (domingo): ");
        scanf("%d", &dia);

        // Ingreso de horario pico o no pico
        printf("Ingrese si es horario pico: \t(a-horario pico / b-horario no pico): ");
        scanf(" %c", &horario);

        // Asignar la base según la categoría del vehículo
        if (strcmp(cat, "moto") == 0) {
            base = 5;
            
        } else if (strcmp(cat, "auto") == 0) {
            base = 10;
            if (horario=='a')
            {
                contautos++;
            }
        } else if (strcmp(cat, "camioneta") == 0) {
            base = 15;
        } else {
            base = 20;
        }
        // Ingreso del dinero entregado
        printf("Ingrese el dinero entregado: ");
        scanf("%f", &dineroentregado);
        
        // Calcular el importe a cobrar
        cobrar = importe_cobrar(base, dia, horario);
        printf("El importe a cobrar es: %.2f\n", cobrar);
        // Calcular el vuelto
        vuelto = fvuelto(cobrar, dineroentregado);

        // Llamar a la función para imprimir los resultados
        imprime(cobrar, vuelto);
        contpases++;
        acumrecaudado=acumrecaudado+cobrar;


        // Preguntar si se desea seguir ingresando vehículos
        printf("\n¿Desea seguir ingresando vehículos? (si o no): ");
        scanf("%s", seguir);

    } while (strcmp(seguir, "si") == 0);

    printf("\nla cantidad de ventas en horario pico de autos fueron de: %d", contautos);
    printf("\nla cantidad de vehiculos fueron: \n%d y el total recaudado %.2f", contpases ,acumrecaudado);
return 0;
}

// Función para calcular el importe a cobrar
float importe_cobrar(float bc, int dia, char horario) {
    float importe_cobrar;

    if (dia >= 1 && dia <= 5 && horario == 'a') {
        importe_cobrar = bc * 1.2;  // Horario pico de lunes a viernes
    } else {
        importe_cobrar = bc * 0.8;  // Horario no pico o fin de semana
    }
    return importe_cobrar;
}

// Función para calcular el vuelto
float fvuelto(float importe, float entrega) {
    return entrega - importe;
}

// Función para imprimir el importe y el vuelto
void imprime(float importe, float vuelto) {
    system("cls");  // Limpiar la pantalla
    printf("El importe es de: %.2f\n", importe);
    printf("El vuelto es de: %.2f\n", vuelto);
}