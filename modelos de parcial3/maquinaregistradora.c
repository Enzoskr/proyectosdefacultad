#include <stdio.h>
#include <conio.h>

#define maxoperaciones 50

float calcularoperacion(float fop1,float fop2, char tipo );
void registraroperacion(float *operando1 , float *operando2, char *tipo, float op1, float op2, char optipo, int indice);
void emitirinforme(float *operando1, float *operando2, char *tipos, int cantoperaciones);


int main(){
    float operando1[maxoperaciones], operando2[maxoperaciones];
    char tipos[maxoperaciones];
    char opc;
    int cantoperaciones=0;
    float op1, op2, resultado;
    char tipooperacion;


    do
    {
        printf("A-efectuar calculo\n");
        printf("B-emitir informe\n");
        printf("C-salir\n");
        printf("Ingrese opcion: ");
        scanf(" %c", &opc);
        if (opc=='A'){
            if (cantoperaciones<maxoperaciones)
            {
                printf("Ingrese operando 1: ");
                scanf("%f", &op1);
                printf("Ingrese operando 2: ");
                scanf("%f", &op2);
                printf("Ingrese tipo de operacion:('s'-suma,'r'- resta, 'm'-multiplicacion,'d'-division ) ");
                scanf(" %c", &tipooperacion);

                resultado=calcularoperacion(op1,op2,tipooperacion);
                system("cls");
                printf("El resultado de la operacion es: %.2f\n", resultado);

                registraroperacion(operando1,operando2,tipos,op1,op2,tipooperacion,cantoperaciones);
                cantoperaciones++;

            }
            else
            {
            printf("No hay mas lugar para operaciones\n");            
        }
        }
        
        else if(opc=='B'){
            emitirinforme(operando1,operando2,tipos,cantoperaciones);

            }
            else if (opc=='C')
            {
                printf("Saliendo del programa\n");        
    }
    } 
    while (opc != 'C');
    return 0;
}

float calcularoperacion(float fop1,float fop2, char tipo ){
    float resultado;
    switch (tipo)
    {
    case 's':
        resultado=fop1+fop2;
        break;
    case 'r':
        resultado=fop1-fop2;
        break;
    case 'm':
        resultado=fop1*fop2;
        break;
    case 'd':
    if (fop2!=0)
    {
        resultado=fop1/fop2;
    }
    else
    {
        printf("No se puede dividir por cero\n");
    }
            break;  
    }
    return resultado;
    

}

void registraroperacion(float *operando1 , float *operando2, char *tipo, float op1, float op2, char optipo, int indice){
    *(operando1+indice)=op1;
    *(operando2+indice)=op2;
    *(tipo+indice)=optipo;
}

void emitirinforme(float *operando1, float *operando2, char *tipos, int cantoperaciones){
    int i, suma=0, resta=0, multiplicacion=0, division=0;
    for(i=0;i<cantoperaciones;i++){
        switch (*(tipos+i))
        {
        case 's':
        printf("+");
            suma++;
            break;
        case 'r':
        printf("-");
            resta++;
            break;
        case 'm':
        printf("*");
            multiplicacion++;
            break;
        case 'd':
        printf("/");
            division++;
            break;
        } 
    printf(" %.2f = %.2f\n", *(operando1+i), calcularoperacion (*(operando1+i),*(operando2+i),*(tipos+i))); 
    }
    printf("resumen de operaciones:\n");
    printf("suma: %d\n", suma);
    printf("resta: %d\n", resta);
    printf("multiplicacion: %d\n", multiplicacion);
    printf("division: %d\n", division);
    printf("total de operaciones: %d\n", cantoperaciones);
    
   

    }