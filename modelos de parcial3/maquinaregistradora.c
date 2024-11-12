#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define tam 50

float calcularresultado(float fop1, float fop2, char foperador);
//void registraroperacion(float *op1, float *op2, char *operador, float op1, float op2, char operador, int *indice )
void emitirinforme();


int main(){
    char salir;
    char opcion;
    int indice = 0;
    float op1, op2;
    char operador;
    float resultado ; 
    do{
        printf("A- efectuar calculo\n");
        printf("B- emitir informe\n");
        printf("C- salir\n");
        printf("Elija una opcion: ");
        scanf(" %c", &opcion);
        fflush(stdin);

        switch (opcion == 'A'){           
            if (indice >=tam){
                printf("No hay mas espacio para operaciones\n");
            }else{
                printf("Ingrese operador 1: ");
                scanf("%f", &op1);
                printf("Ingrese operador 2: ");
                scanf("%f", &op2);
                printf("ingrese el tipo de operacion:\n(s: suma, r: resta, m: multiplicacion, d: division) ");
                scanf(" %c", &operador);            
                fflush(stdin);

                resultado= calcularresultado(op1, op2, operador  );
                printf("El resultado de la operacion es: %.2f\n", resultado);

                //registraroperacion(op1, op2, operador, resultado 
           
            }
            case 'B':
                emitirinforme();

        }
   
            




        char salir;
        scanf("%c", &salir);
        fflush(stdin);

    } while (salir != 'C' || salir != 'c');
    printf("Gracias por usar el programa\n");
    return 0;


    
}


float calcularresultado(float fop1, float fop2, char foperador){
    float resultado;
    switch (foperador)
    {
    case 's':
    case 'S':
        resultado = fop1 + fop2;
        break;
    case 'r':	
    case 'R':
        resultado = fop1 - fop2;
        break;
    case 'm':
    case 'M':
        resultado = fop1 * fop2;
        break;
    case 'd':
    case 'D':
        resultado = fop1 / fop2;
        break;
        }
        

}

void emitirinforme (float *vop1, float *vop2, char *voperador   ){

}

