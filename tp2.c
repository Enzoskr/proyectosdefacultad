#include <stdio.h>
#include <math.h>

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


