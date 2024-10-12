#include <string.h>
#include <stdlib.h>
#include<stdio.h>

float fmontoexpensa(char catpreciopiso, int usoprofesional, char cochera );
void dosambientesprofesionales(int contador);

int main(){
    //asignacion variables 
    int numdepa, usoprofesional, montoexpensa ;
    char cat, cochera,continuar[3], multas;
    float impmultas, preciofinal;
    int contd=0;
    
//comienza el do 
    do
    {
        printf("ingrese el numero de departamento:\n");
        scanf("%d", &numdepa);
        
        printf("ingrese la categoria del departamento(p=Piso//s=semi-piso//d=dos ambientes//m=monoambiente):\n");
        fflush(stdin);
        scanf(" %c", &cat);

        printf("ingrese si el de uso profesional o no(1-si// 0-no): \n");
        fflush(stdin);
        scanf("%d", &usoprofesional);
        
        printf("ingrese si tiene cochera('s' para si 'n' para no): \n");
        fflush(stdin);
        scanf("%c", &cochera);
        
        printf("tiene multas? (s para si, n para no):");
        fflush(stdin);
        scanf(" %c", &multas);

        if (multas == 's')
        {
            printf("ingrese el monto de multas:\n");
            scanf("%f", &impmultas);
            
        }else{
            impmultas=0;
        }

         montoexpensa=fmontoexpensa(cat,usoprofesional,cochera);
         preciofinal= montoexpensa + impmultas;
//punto a 
         if(cat=='d' && usoprofesional==1 ){
            contd=contd+1;
         }
         

        printf("\nEl precio de la expensa final es de: %.2f\n ", preciofinal);

        printf("desea seguir ingresando departamentos? (si//no):\n");
        fflush(stdin);
        scanf("%s", continuar);
//comienza el while
    } while (strcmp(continuar, "si")==0);
        
        dosambientesprofesionales(contd);
}

float fmontoexpensa(char catpreciopiso, int usoprofesional, char cochera ){
    float resul=0 ;
    switch (catpreciopiso)
    {
    case 'p': resul=4000 ;
        break;
    case 's': resul=3000 ;
        break;
    case 'd': resul=2000 ;
        break;
    case 'm': resul=1000 ;    
    }
    if(usoprofesional== 1){
        resul+=2500;
    }
    if(cochera== 's'){
        resul+=1500;
    }
    return resul;
}
void dosambientesprofesionales(int contador){
    printf("la cantidad total de departamentos de dos ambientes de uso profesional:%d", contador);
}