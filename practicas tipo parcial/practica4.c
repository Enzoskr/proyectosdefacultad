#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//evaluar calidad y cant de trabajo(entero 1 a 5)
//cooperacion entero, 1 a 5 
//cap de analisis y creatividad, 1 a 5

int capacidaddedesarrollo(int opca , int opcb, int opcc);
void mostrarresultado(int codempleado, int resultado);


int main(){

    char seguir[3], profesional[3];
    int codempleado, diatrabajado, capdeanalisisycreatividad,empleadosbajonivel,cooperacion,calycantdetrabajo, capacitacion, ban=1, maxcod,maxdias;
    empleadosbajonivel=0; 

    float promediocalificacion;


    do
    {

        printf("ingrese el codigo del empleado:\n");
        scanf("%d", &codempleado);
        
        printf("ingrese los dias trabajados:\n");
        scanf("%d", &diatrabajado);
        
        printf("ingrese el si el trabajador es profesional(si-no):\n");
        scanf(" %s", profesional);

        printf("ingrese la calidad y cantidad de trabajo (1 a 5 ):\n");
        scanf("%d", &calycantdetrabajo);

        printf("ingrese el nivel de cooperacion (1 a 5 ):\n");
        scanf("%d", &cooperacion);


        if (strcmp (profesional, "si")==0)

        {
            printf("La Capacidad de Analisis y Creatividad(de 1 a 5): ");
            scanf("%d", &capdeanalisisycreatividad);
        }
        
        capacitacion=capacidaddedesarrollo(calycantdetrabajo, cooperacion, capdeanalisisycreatividad) ;
        mostrarresultado(codempleado, capacitacion);


        promediocalificacion=(capdeanalisisycreatividad+calycantdetrabajo+cooperacion)/3;
        if(promediocalificacion<3)
        {promediocalificacion++;};

        if(ban=1)
        {
            ban =0;
            maxcod= codempleado;
            maxdias=diatrabajado;}

            else{
                if (diatrabajado>maxdias){
                maxcod=codempleado;
                maxdias=diatrabajado;
            }
            }





            
        
        




        


        printf("desea continuar ingresando empleados? (si/no):");
        scanf("%s", seguir);
        fflush(stdin);

    } while (strcmp(seguir,"si")==0);


    system("cls");
    printf("la cantidad de empleados que estan fuera de nivel son: %d\n", promediocalificacion);
    printf("el codigo de empleado es %d con mayor cantidad de dias trabajados que son: %d\n",maxcod, maxdias );
    




    return 0;

}


int capacidaddedesarrollo(int opca , int opcb, int opcc){
        if (opca>=4 && opcb>=4 && opcc>=4){
            return 1;
        }else{
            return 0;
        }
}


    void mostrarresultado(int codempleado, int resultado){
    if (resultado==1){
        printf("el empleado %d tiene potencial de desarrollo\n", codempleado);
    }else{
        printf("el empleado %d no tiene potencial de desarrollo\n", codempleado);
        
    }
    
}