#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

int vmenu();
// void ingresardatos(int *vw, int *vx, int w, int x, int j);
// void generarinforme(int *vw, int *vx, int j);



int main(){
    int menu;
    menu = vmenu();
    while (menu != 3)
    {
        switch (menu)
        {
        case 1:
            printf("Registrar\n");
            break;
            //ingresardatos();
        case 2:
            printf("Generar\n");
            // generarinforme();
            break;
        }
        menu = vmenu();
    }


}


int vmenu(){
    int opc;
    printf("PROGRAMA\n");
    printf("1-Registrar\n");
    printf("2-Generar\n");
    printf("3-Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opc);
    return opc;
}



// void ingresardatos(int *vw, int *vx, int w, int x, int j){
//     *(vw+j)=w;
//     *(vx+j)=x;
// }


// void generar informe(int *vw, int *vx, int j){
//     for (int i = 0; i < j; i++)
//     {
//         printf("Codigo de empleado: %d\n", *(vw+i));
//         printf("Codigo de sucursal: %d\n", *(vx+i));
//     }
    
// }