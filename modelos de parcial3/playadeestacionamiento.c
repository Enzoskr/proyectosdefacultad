#include <stdio.h>

#define MAX 50

void menu();
void generarainforme(char *ftipovehiculos, int *fgastosapagar, int j);
void registrarvehiculo(char ftipovehiculo, int fgastoapagar, char *ftipovehiculos, int *fgastosapagar, int j);
int calculargastoestacionamiento(char tipo, float horas);


int main (){
    int opc=0, tiempo;
    char patente[10], tipodevehiculo;
    int gastoapagar;
    char tipovehiculos[MAX];
    int gastosapagar[MAX];
    int j=0;
    
    do
    {
        menu();
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("ingrese la patente del vehiculo:\n");
            scanf("%s", patente);
            printf("ingrese el tipo del vehiculo:('c'-camioneta, 'a'-auto, 'm'-moto)\n");
            scanf(" %c", &tipodevehiculo);
            printf("ingrese el tiempo en horas de estadia:\n");
            scanf("%d", &tiempo);

            // aca ingresaria  un system("CLS") para limpiar la pantalla
            //tambien ingresaria un gets() para limpiar el buffer
            gastoapagar= calculargastoestacionamiento(tipodevehiculo, tiempo);
            printf("El gasto a pagar es: %d\n", gastoapagar);

            registrarvehiculo(tipodevehiculo, gastoapagar, tipovehiculos, gastosapagar, j);
            j++;

            break;
        case 2:
            generarainforme(tipovehiculos, gastosapagar, j);
        
            break;
        case 3:
            printf("Salir\n");
            break;
        
        default:
            break;
        }

        

    } while (opc != 3);
    
    return 0;

    
}

void menu(){
    
    printf("PROGRAMA DE ESTACIONAMIENTO\n");
    printf("1-Regitrar datos de la salida de vehiculos\n");
    printf("2-Generar informe de resumen del dia\n");
    printf("3-Salir\n");
    printf("Ingrese opcion: ");
}
int calculargastoestacionamiento(char tipo, float horas){
    int valorhora;
    switch (tipo)
    {
        case 'c':
        valorhora=200;
        break;
        case 'a':
        valorhora=100;
        break;
        case 'm':
        valorhora=50;
        break;

        }
    return valorhora*horas;
}
void registrarvehiculo(char ftipovehiculo, int fgastoapagar, char *ftipovehiculos, int *fgastosapagar, int j){
    *(ftipovehiculos+j)=ftipovehiculo;
    *(fgastosapagar+j)=fgastoapagar;    
}



void generarainforme(char *ftipovehiculos, int *fgastosapagar, int j){
    int camionetas=0, autos=0, motos=0, totaldia=0;
    int i , bandera=1, min;
    

    for(i=0; i<j; i++ ){
        switch (*(ftipovehiculos+i))
        {
            case 'c':
            camionetas=camionetas+*(fgastosapagar+i);
            break;
            case 'a':
            autos=autos+*(fgastosapagar+i);
            break;
            case 'm':
            motos=motos+*(fgastosapagar+i);
            break;
    }
    if (*(ftipovehiculos+i)=='c'){
        if (bandera==1){bandera=0; min=*(fgastosapagar+i);}
        else if (*(fgastosapagar+i)<min){min=*(fgastosapagar+i);}
        
    }

    totaldia=totaldia+*(fgastosapagar+i);   
    }
    printf("monto total de camionetas: %d\n", camionetas);
    printf("monto total de autos: %d\n", autos);
    printf("monto total de motos: %d\n", motos);
    printf("monto total del dia: %d\n", totaldia);
    printf("minimo gasto de camioneta: %d\n", min);
}

    

