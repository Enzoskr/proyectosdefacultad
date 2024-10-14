#include <string.h>
#include <stdlib.h>
#include<stdio.h>

float fmontoviatico(float opca, float opcb,float opcc );
void fcont(int contador);


int main() {
    int codlegajo;
    char catempleado, seguir[3];
    float kmrecorrido, gastopeaje, gastocomida, anticipo, kmvalorizado, montoviatico,importeapagar;
    int contv2000=0;
    
    do
    {
        printf("ingrese el codigo de legajo:\n");
        scanf("%d", &codlegajo);
        printf("ingrese la categoria del empleado:\nv=Vendedor\nj=Jefe Comercial\ng=Gerente de Producto\n");
        fflush(stdin);
        scanf(" %c", &catempleado);

        printf("ingrese los kilometros recorridos:\n");
        scanf("%f", &kmrecorrido);
        printf("ingrese los gastos del peaje:\n");
        scanf("%f", &gastopeaje);
        printf("ingrese los gastos de la comida:\n");
        scanf("%f", &gastocomida);

        if ((catempleado =='v'))
        {
            printf("ingrese el anticipo:\n");
            scanf("%f", &anticipo);
            contv2000=contv2000+1;
        }else{
            anticipo=0;
        }
        
        
        if (kmrecorrido<=2000)
        {
            kmvalorizado=kmrecorrido*10;
            
        }else if(kmrecorrido>2001)
        {
            kmvalorizado=(2000*10)+ ((kmrecorrido-2000)*5);
        
        }

        montoviatico=fmontoviatico(kmvalorizado,gastocomida,gastopeaje);

        // printf("el monto del viatico es: %.2f\n", montoviatico);
            
        importeapagar=(montoviatico-anticipo);

        
        



        if (importeapagar>0)
        {
            printf("el importe a pagar es: %.2f\n", importeapagar);
        }else if (importeapagar<0)
        {
            printf("el importe a deber es: %.2f\n", importeapagar);
        }

        printf("quiere seguir registrando empleados?(si//no)\n");
        fflush(stdin);
        scanf("%s", seguir);

    } while (strcmp(seguir, "si")==0);
    
    fcont(contv2000);

}
float fmontoviatico(float opca, float opcb,float opcc ){
    float montoviatico;
    montoviatico=(opca+opcb+opcc);

    return montoviatico;
}
void fcont(int contador){
    printf("la cantidad de empleados de categoria 'v' que recorrieron mas de 2000km son:%d", contador);
}