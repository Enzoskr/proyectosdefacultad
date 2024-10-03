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
/*
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
*/


//ejercicio 7

/* int main(){
    
    int impenpesos, imp80, imp20,imp15;    

    printf("Ingrese el importe en pesos: ");
    scanf("%d", &impenpesos);

    imp80 = impenpesos * 0.80;
    imp20 = impenpesos * 0.20;
    imp15 = impenpesos * 0.15;

    printf("El 80 porciento de %d es: %d\n", impenpesos, imp80);
    printf("El 20 porciento de %d es: %d\n", impenpesos, imp20);
    printf("El 15 porciento de %d es: %d\n", impenpesos, imp15);

    return 0;
    
}
 */

//ejercicio 8
//aca hay que agregarles variables en float para que no de error o de resultado en decimales


/* int main(){
    float impesos, impdolares ; 
    
    printf("Ingrese el importe en pesos: ");
    scanf("%f", &impesos);
    
    impdolares = impesos / 15.40;
    
    printf("El importe en dolares es: %.2f\n", impdolares);
    
    return 0;

}
 */

//ejericio 9
/* int main(){
    float radio, perimetro, area;
    const float pi = 3.1416;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    perimetro = 2 * pi * radio;
    area = pi * radio * radio;

    printf("El perimetro del circulo es: %.2f\n", perimetro);
    printf("El area del circulo es: %.2f\n", area);

    return 0;
}
 */

//ejercicio 10
//utilizamos la libreria math.h para poder usar la funcion sqrt
//tambien en el cateto 1 y 2 se le agrega ,2 para que de resuldados en decimales
// utilizamos la funcion pow para elevar al cuadrado los catetos

/* int main(){
    float cateto1, cateto2, hipotenusa;

    printf("Ingrese el cateto 1: ");
    scanf("%f", &cateto1);
    printf("Ingrese el cateto 2: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    printf("La hipotenusa es: %.2f\n", hipotenusa);

return 0;
} */


//16-DESARROLLE UN DIAGRAMA DE FLUJO QUE PERMITA CALCULAR EL PROMEDIO DE LAS
//NOTAS DE UN CURSO. EL ALGORITMO TERMINA CUANDO SE INGRESA LA NOTA 0.

 int main(){
    float nota, promedio, suma = 0;
    int contador = 0;

    do{
        printf("Ingrese la nota: ");
        scanf("%f", &nota);
        suma += nota;
        contador++;
    }while(nota != 0);

    promedio = suma / (contador - 1);

    printf("El promedio de las notas es: %.2f\n", promedio);

    return 0;
} 