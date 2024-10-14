	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <math.h>
	
	float fcalcularmulta(float velocidad);
	void fmostrar(int opca, float opcb, float opcc, int radar);
	
	int main(){
		int numradar;
		float velvehiculo,calcularmulta;
	    char patente[12],seguir[3];
	    int contfotomulta=0,numradarvel=0;
	    float multamayvel=0,acummontototal=0 ;
	    do{
	    	printf("ingrese el numero del radar:(de 1 a 4)\n");
	    	scanf("%d",&numradar);
	    	printf("Ingrese la patente:(valorcadena)\n (ejemplo: abc123 o aa123bb):\n");
	    	//fflush(stdin);
	    	scanf(" %s", patente);
	    	printf("ingrese la velocidad del vehiculo:(expresada en kilometros):\n");
	    	scanf("%f", &velvehiculo);
	    	
	    	calcularmulta=fcalcularmulta(velvehiculo);
	    	
	    	
	    	if (calcularmulta>0){
	    		contfotomulta++;
	    		acummontototal=acummontototal+calcularmulta;
			}
			
			if(velvehiculo>multamayvel){
				multamayvel=velvehiculo;
				numradarvel=numradar;
			}
			
		
		
		printf("el vehiculo de patente %s, precio de la multa es: %.2f\n",patente, calcularmulta); 
	
	    	
	        
	    printf("desea seguir? si-no\n");
	    scanf("%s", seguir);
	    }
		while (strcmp(seguir, "si") == 0);
		{
		fmostrar(contfotomulta, acummontototal,multamayvel,numradarvel);
		
		return 0;
		}
	}
	
		float fcalcularmulta (float velocidad) {
		if (velocidad>40 && velocidad<=45){
		return 50000;
		}
		else if (velocidad>45 && velocidad<=60)
		{
		return 80000;
			
		}else if (velocidad>60)
		{
		return 150000;
		}
		return 0;
	}
	
	void fmostrar(int opca, float opcb, float opcc, int radar){
		printf("La cantidad de fotomultas tomadas por el radar son: %d\n", opca);
		printf("El monto total de las multas realizadas es:%f\n", opcb);
		if (opca>0)
		printf("La multa con mayor velocidad es de: %.2f km, y fue captada por el radar %d\n", opcc, radar);
		else{
			printf("no se registraron multas.\n");
		}
	}
		
	
	
