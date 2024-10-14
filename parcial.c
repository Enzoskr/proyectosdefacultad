#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

float fcalcularmulta(float velocidad);

int main(){
	int numradar,preciomulta;
	float velvehiculo,calcularmulta;	
	
    char patente[12],seguir[3];
    
    do
    {
    	printf("ingrese el numero del radar:(de 1 a 4)\n");
    	scanf("%d",&numradar);
    	printf("Ingrese la patente:(valorcadena)\n");
    	//fflush(stdin);
    	scanf(" %s", patente);
    	printf("ingrese la velocidad del vehiculo:(expresada en kilometros)\n");
    	scanf("%d", &velvehiculo);	
    	
    	
    
	
	calcularmulta=fcalcularmulta(velvehiculo);
	
	printf("el vehiculo de patente %s, precio de la multa es: %.2f\n",patente, calcularmulta); 

    	
        
    printf("desea seguir? si-no\n");
    scanf("%s", seguir);
    }
	while (strcmp(seguir, "si") == 0);{
		
	}
}
	
	float fcalcularmulta(float velocidad) {
	if (velocidad>40 && velocidad<=45){
	return 50000;
	}
	else if (velocidad>45 && velocidad<=60)
	{
	return 80000;
		
	}else if (velocidad>45 && velocidad<=60)
	{
	return 150000;
	}
	
}
	


