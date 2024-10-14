#include <stdio.h>
#include <math.h>
#include <string.h>

//ejercicio 1
/* int main(){

    int legajo, nota;

    printf("Ingrese el legajo del alumno: ");
    scanf("%d", &legajo);
    printf("Ingrese la nota del alumno: ");
    scanf("%d", &nota);

    if (nota >6){
        printf("El alumno con legajo %d aprobo la materia con %d\n", legajo, nota);
    }else{
        printf("la nota es menor a 6\n");
    }
    return 0;
} */

//ejercicio 2 
/* 
int main(){
    
    int num1,num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if(num1>num2){
        printf("la resta entre el numero 1 y numero 2 es de: %d\n", num1-num2); 
    }else{
        printf("la multiplicacion entre el numero 1 y numero dos es de %d\n", num1*num2);
    }
    return 0;
} */

//ejercicios 3 

/* int main(){

    int num1,num2,num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if(num1<num2 && num2<num3){
        printf("Los numeros estan en orden ascendente\n");
    }else{
        printf("Los numeros no estan en orden ascendente\n");
    }
return 0;
} */


//ejercicio 7
/* int main(){

    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);    
    if (num>0) {
        printf("El numero es positivo\n");
    }
    else if(num<0){
        printf("El numero es negativo\n");
    }else if(num == 0){
        printf("El numero es nulo\n");
    }

} */

//ejercicio 8

/*int main(){
	float num1, num2, resultado;
	char opc;
	
	printf("ingrese numero 1: ");
	scanf("%f", &num1);
	printf("ingrese numero 2: ");
	scanf("%f", &num2);
	
	printf("elija la operacion(+,-,*,/): ");
	scanf(" %c", &opc);
	
	switch(opc){	
	case'+': resultado= num1+num2;
	break;
	case'-': resultado= num1+num2;
	break;
	case'*': resultado= num1*num2;
	break;
	case'/': resultado= num1/num2;
	break;
	}
	printf("el resultado de la operacion es de: %f\n,", resultado);
	
	return 0;
	
	system("\n pause");
	
}*/

//ejercicio 9 
/* int main(){
    int lado1,lado2,lado3;

    printf("ingrese el lado 1: ");
    scanf("%d", &lado1);
    printf("ingrese el lado 2: ");
    scanf("%d", &lado2);
    printf("ingrese el lado 3: ");
    scanf("%d", &lado3);

    if(lado1==lado2 && lado1==lado3){
        printf("es un triangulo equilatero\n");
    }else if(lado1==lado2 || lado1==lado3 || lado2==lado3){
        printf("es un triangulo isosceles\n");
    }else{
        printf("es un triangulo escaleno\n");
    }
    return 0;
    } */

//ejercicio 12
//se puede hacer con un for o con un while

/*  int main(){
    int i;
    for(i=0; i<30; i++){
        printf("*\n");
    }
    return 0;
}  
*/

//ejercicio 13
//13-DADA LAS EDADES Y ESTATURAS DE 6 ALUMNOS. SE PIDE DETERMINAR: LA EDAD PROMEDIO, LA ESTATURA PROMEDIO, LA CANTIDAD DE ALUMNOS MAYORES A 10 AÑOS Y LA CANTIDAD DE ALUMNOS QUE MIDEN MÁS DE 1.40 MT.

/* int main(){
    int i, edad, altura, sumaEdad=0, sumaAltura=0, contadorEdad=0, contadorAltura=0;
    float promedioEdad, promedioAltura;

    for(i=0; i<6; i++){
        printf("Ingrese la edad del alumno: ");
        scanf("%d", &edad);
        printf("Ingrese la altura del alumno: ");
        scanf("%d", &altura);

        sumaEdad = sumaEdad + edad;
        sumaAltura = sumaAltura + altura;

        if(edad>10){
            contadorEdad++;
        }
        if(altura>140){
            contadorAltura++;
        }
    }
    promedioEdad = sumaEdad/6;
    promedioAltura = sumaAltura/6;

    printf("El promedio de edad es: %.2f\n", promedioEdad);
    printf("El promedio de altura es: %.2f\n", promedioAltura);
    printf("La cantidad de alumnos mayores a 10 años es: %d\n", contadorEdad);
    printf("La cantidad de alumnos que miden mas de 1.40 es: %d\n", contadorAltura);
    return 0;
} */

//ejercicio 14

/* int main() {
    int i, a = 0, b = 0;
    char opc;

    
    for (i = 0; i < 100; i++) {
        printf("Elija 'a' o 'b': ");
        
        scanf(" %c", &opc); 
        
    
        if (opc == 'a') {
            a++;  // Incrementar votos para 'a'
        } else if (opc == 'b') {
            b++;  // Incrementar votos para 'b'
        } else {
            printf("Opción incorrecta\n");
            i--;  // Restar el contador para que la votación no se cuente
        }
    }

    // Cálculo de porcentajes
    float porcentajeA = (a * 100.0) / 100;
    float porcentajeB = (b * 100.0) / 100;

    // Mostrar los resultados
    printf("El porcentaje de votos para 'a' es: %.2f%%\n", porcentajeA);
    printf("El porcentaje de votos para 'b' es: %.2f%%\n", porcentajeB);

    return 0;
}
*/

//ejercicio 15

  /*  int main(){
        int i;
        for(i=5; i<=60; i+=5){
            printf("%d\n", i);
        }
        return 0;
  
    }
*/

//ejercicio 16
/*
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

*/

//ejercicio17
/* 
17-DESARROLLE UN ALGORITMO QUE LE PERMITA DETERMINAR DE UNA LISTA DE
NÚMEROS:

a. CUANTOS ESTÁN ENTRE EL 50 Y EL 75, AMBOS INCLUSIVE.
b. CUANTOS SON MAYORES DE 80.
c. CUANTOS SON MENORES DE 30. */

/* int main(){
    int i, num, contadorA=0, contadorB=0, contadorC=0;

    for(i=0; i<10; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if(num>=50 && num<=75){
            contadorA++;
        }
        if(num>80){
            contadorB++;
        }
        if(num<30){
            contadorC++;
        }
    }

    printf("La cantidad de numeros entre 50 y 75 es: %d\n", contadorA);
    printf("La cantidad de numeros mayores a 80 es: %d\n", contadorB);
    printf("La cantidad de numeros menores a 30 es: %d\n", contadorC);

    return 0;
} */

//ejercicio 19

/* int main(){
    int num, contadorpi=0, menor=9999;

    do{
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if(num>=3.14 && num<=9.42){
            contadorpi++;
        }
        if(num<menor){
            menor = num;
        }
    }while(num != 0);

    printf("La cantidad de numeros entre pi y 3pi es: %d\n", contadorpi);
    printf("El menor numero ingresado es: %d\n", menor);
    return 0;
} */

//ejercicio 21

/* int main(){

    int edad;	
    char nombre[50];
    
    do {
        printf("Ingrese el nombre (escriba 'zzz' para salir): ");
        scanf("%s", nombre); 
        if(strcmp(nombre, "zzz") == 0) {
            break; 
        }
        printf("Ingrese la edad: ");
        scanf("%d", &edad);
        if(edad < 11){
            printf("La categoria es infantil\n");
        } else if(edad >= 11 && edad <= 14){
            printf("La categoria es puber\n");
        } else {
            printf("La categoria es juvenil\n");
        }

    } while(1);  // Bucle infinito controlado por la condición del nombre

    return 0;

}
 */

//ejercicio 23
/* 23-DETERMINE EL MENOR VALOR DE 5 NÚMEROS, INDICANDO ADEMÁS A QUÉ ORDEN
PERTENECE. CONSIDERE QUE EL MENOR VALOR PUEDE REPETIRSE. POR EJEMPLO: SI LOS
NÚMEROS INGRESADOS FUERAN: 14, 19, 14, 16, 15. LOS RESULTADOS DEBEN SER: EL
MENOR VALOR INGRESADO FUE 14 Y CORRESPONDEN AL PRIMER NÚMERO, TERCER
NÚMERO. */
/* int main(){
    int i, num, menor=999, contador=0 ;

    for(i=0;i<5;i++){
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if(num<menor){
            menor = num;
            contador = i+1;
        }
    }
    printf("el menor valor ingresado fue %d y corresponde al %d numero\n", menor, contador);
    return 0;
} */

//ejercicio 25 
/* 
25-UNA EMPRESA TIENE 65 TRABAJADORES, A CADA UNO DE ELLOS LE PAGA UN SUELDO
SEGÚN LAS HORAS TRABAJADAS. ADEMÁS A CADA TRABAJADOR CUYO SUELDO SUPERO
LOS 18000 PESOS LE DESCUENTA 10% POR CONCEPTO DE IMPUESTOS. SE DESEA SABER
CUÁNTOS TRABAJADORES GANAN MÁS DE 20000 PESOS, CUANTOS GANAN MENOS DE
12000 PESOS. */

int main(){

    int sueldo, contador20000=0, contador12000=0, i;

    for(i=0;i<5;i++){
        printf("Ingrese el sueldo del trabajador:");
        scanf("%d", &sueldo);
        if(sueldo>20000){
            contador20000++;

        }
        if(sueldo<12000){
            contador12000++;
        }if(sueldo>18000){
            sueldo = sueldo - (sueldo*0.10);

        }
    }
    printf("La cantidad de trabajadores que ganan mas de 20000 es: %d\n", contador20000);
    printf("La cantidad de trabajadores que ganan menos de 12000 es: %d\n", contador12000);

    return 0;

}