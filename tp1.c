#include <stdio.h>
#include <math.h>
//ejercicio 1
/* int main()
{
    char nombre[50], apellido[50];

    printf("Ingrese su nombre: ");
    scanf("%s", &nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", &apellido);
    printf("Hola %s %s\n", nombre, apellido);
    
    return 0;
}*/

//ejercicio 3

/*int main ()
{
    int num1,num2, suma, resta, multiplicacion,division;

    printf("Ingrese variable 1: ");
    scanf("%d", &num1);
    fflush(stdin);

    printf("Ingrese variable 2: ");
    scanf("%d", &num2);

 suma = num1 + num2;
 resta = num1 - num2;
 multiplicacion = num1 * num2;
 division = num1 / num2;

    
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);
    printf("La resta de %d y %d es: %d\n", num1, num2, resta);
    printf("La multiplicacion de %d y %d es: %d\n", num1, num2, multiplicacion);
    printf("La division de %d y %d es: %d\n", num1, num2, division);
    
    return 0;
    } */

//ejercicio 4

/*
int main()
{
    int num1, num2, operacion;

    printf("Ingrese numero a: ");
    scanf("%d", &num1);
    printf("Ingrese numero b: ");
    scanf("%d", &num2);
    
    operacion= (num1+num2)*(num1-num2);
    printf("El resultado de la operacion (a+b)*(a-b) es: %d\n", operacion);


}
*/

//ejercicio 5 
//pow es para hacer este tipo de operaciones

/*int main (){

    int numbase, numexpo  ;
    
    printf("Ingrese la base: ");
    scanf("%d", &numbase);
    printf("Ingrese el exponente: ");
    scanf("%d", &numexpo);
    int resultado = (int)pow(numbase,numexpo);

    printf("El resultado de %d elevado a la %d es: %d\n", numbase, numexpo, resultado);

}*/

//ejercicio 6

int main(){

    int numero ,numdoble ,numtriple , nummitad ;
 

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    numdoble = numero*2;
    numtriple = numero*3;
    nummitad = numero/2;
    printf("El doble de %d es: %d\n", numero, numdoble);
    
    printf("El triple de %d es: %d\n", numero, numtriple);
    
    printf("La mitad de %d es: %d\n", numero, nummitad);
    

    return 0;

}