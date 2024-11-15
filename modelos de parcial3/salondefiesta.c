#include <stdio.h>
#include <string.h>

#define ELEMENTOS 31

void cargarReserva(int ftelefono, int finvitados, int fdia, int *vtelefono, int *vinvitados, int *vdia, int j);
int validarDia(int fdia ,int *vdia, int totalreservas );
void mostrareservas(int *vtelefono, int *vinvitados, int *vdia, int totalreservas);
int vmenu();

int main(){
    int menu, dia, telefono , invitados;
    int vtelefono[ELEMENTOS]={0}, vinvitados[ELEMENTOS]={0} , vdia[ELEMENTOS]={0}, i=0;
    


    menu = vmenu();
    while (menu != 3)
    {
        switch (menu)
        {
        case 1:
        printf("Ingresar telefono de contacto:\n");
        scanf("%d", &telefono);
        printf("Ingresar cantidad de invitados:\n");
        scanf("%d", &invitados);
        printf("Ingresar Dia de 1 a 31:\n");
        scanf("%d", &dia);
        if (validarDia(dia, vdia, i)){
            cargarReserva(telefono, invitados, dia, vtelefono, vinvitados, vdia, i);
            i++;
        }else{
            printf("Dia %d reservado. Intente otro dia\n ", dia);
        }
        break;
        case 2:
            mostrareservas(vtelefono, vinvitados, vdia, i);
            
            break;
        // case 3:
        //     printf("Saliendo del programa\n");
            break;
        default:
        break;
        }
        menu = vmenu();

        }        
        printf("Programa finalizado.\n");
}
   

int vmenu(){
    int opc;
    printf("PROGRAMA DE SALON DE FIESTAS\n");
    printf("1-Registrar una reserva\n");
    printf("2-Mostrar reservas del mes\n");
    printf("3-Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opc);
    return opc;
    }

void cargarReserva(int ftelefono, int finvitados, int fdia, int *vtelefono, int *vinvitados, int *vdia, int j)
{
    *(vtelefono+j)=ftelefono;
    *(vinvitados+j)=finvitados;
    *(vdia+j)=fdia;
}

int validarDia(int fdia ,int *vdia, int totalreservas ){
    int i;
    for(i= 0; i <totalreservas; i++ ) {
        if(vdia[i]==fdia){
            return 0; //dia no disponible


        }
    }
    return 1; //dia disponible
}
    
void mostrareservas(int *vtelefono, int *vinvitados, int *vdia, int totalreservas){
    int i;
    if (totalreservas==0){
        printf("No hay reservas\n");
    }else{

        printf("Informe de reservas\n");
        printf("Telefono\tInvitados\tDia\tCosto\n");
        for(i=0; i<totalreservas; i++){
            int costo = 150000;
            if(vinvitados[i>100]){
                costo= costo+(vinvitados[i]-100)*1000;
            }
            {
                printf("%d\t%d\t\t%d\t$%d \n", vtelefono[i], vinvitados[i], vdia[i], costo);
             
            }
            }
            
    }
}

        