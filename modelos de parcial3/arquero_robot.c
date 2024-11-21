#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define cant 50

void cargar_datos(int x, int y,  int *vx, int *vy,  int j);
void mostrar_resultados( int *vx, int *vy, int i);

main()
{
      int inicio=0,opc=0, i=0;
      int x, y, vx[cant]={0}, vy[cant]={0};
           
      while(inicio!=3)
      {
      	// Armo menu de opciones
         printf("PROGRAMA ARQUERO ROBOT\n");
         printf("*****************\n\n\n");
         printf("1-Ingresar tiros de pelota al arco\n");
         printf("2-Evaluar habilidades del robot\n");
         printf("3-Salir\n");
         scanf("%i",&opc);
         switch(opc)
         {
             case 1:
                  printf("ARQUERO ROBOT:\n");
                  printf("-------\n\n");
                  printf("Ingresar coordenada x: \n");
                  //fflush(stdin);
                  scanf("%d",&x);
                  printf("Ingresar coordenada y: \n");
                  //fflush(stdin);
                  scanf("%d",&y);                
                  // cargo los vectores con los valores leídos en una función                  
                  cargar_datos(x, y, vx, vy, i);  // llamo a la funcion cargar datos con argumentos
     			
                  i=i+1;   // sumo 1 para tener la posicion del primer valor libre de los vectores  
                  //getch();
                  system("CLS");
                  break;
             case 2:
				 // calcular y mostrar resultados en función	 
                mostrar_resultados(vx, vy, i);
    
                break;
             case 3:
                  inicio=3;
                  break;
         
      }
}
} // main
////////////////////////////////////////////////////////////////////////////////


void cargar_datos(int x, int y,  int *vx, int *vy,  int j)
{
	*(vx+j)=x;
	*(vy+j)=y;
	
}

void mostrar_resultados( int *vx, int *vy, int i)
{
	int cg=0, ca=0,  j;
                for (j=0;j<i;j++)  // me conviene usar for para recorrer vectores
           
             	{
             		// informo coordenadas
             		printf("Coordenada x %d coordenada y %d\n", *(vx+j), *(vy+j));
             		
             		if ( *(vx+j) >=0 && *(vx+j)<=500 && *(vy+j)>=0 && *(vy+j)<=250 )
						 {
						   printf("GOL\n");
						   cg=cg+1;
						  }
             		else {
					        printf("AFUERA\n");
					        ca=ca+1;
					     }           						          		
							
		
				// Con if anidados
				
			/*		if ( *(vx+j) >=0 && *(vx+j)<=500 )
					    if (*(vy+j)>=0 && *(vy+j)<=250)
					       // x e y ok imprimo GOL
					    else // x ok, y fuera de rango imprimo AFUERA
				    else // x fuera de rango imprimo AFUERA */
			    }  
	printf("Cantidad de goles: %d\n", cg);
	printf("Cantidad de pelotas afuera: %d\n", ca);
}
