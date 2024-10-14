#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ftotaldevuelo(int opca,int opcb,int opcc);
void mostrar(int vda,int vdb,int vdc,int tpomenorvuelo, int numeromenortiempovuelo );



int main(){
    char seguir[3], destino, escala;
    int numvuelo, tpovuelo, cantescalas, tpoescala, totaldevuelo;
    int contnac=0,contmercosur=0,continternacional=0;
    int ban=1;
    int vuelomenortiempo=0, numeromenortiempovuelo=0;


    do
    {
    printf("ingrese el numero de vuelo:\n");
    scanf("%d", &numvuelo);
    printf("ingrese el destino de vuelo:\n(n-nacional||m-internacional mercosur||i-internacional)\n");
    fflush(stdin);
    scanf("%c", &destino);
    printf("ingrese el tiempo de vuelo:(valor en minutos)\n");
    scanf("%d", &tpovuelo);
    
    printf("ingrese si tiene escalas \t(s-para si//n-para no)\n");
    fflush(stdin);
    scanf(" %c", &escala);
    

        if (escala =='s')
        {
            printf("ingrese la candidad de escalas:\n");
            scanf("%d", &cantescalas);
            printf("ingrese el tiempo estimado por escala:\n");
            scanf("%d", &tpoescala);
            
            totaldevuelo=ftotaldevuelo(tpovuelo,cantescalas,tpoescala);
        }else{
            totaldevuelo=tpovuelo;

            if(ban==1)
            {
                ban=0;
                vuelomenortiempo=tpovuelo;
                numeromenortiempovuelo=numvuelo;

            }else{
                if (tpovuelo<vuelomenortiempo)
                {
                    vuelomenortiempo=tpovuelo;
                    numeromenortiempovuelo=numvuelo;
                }                
            }   
        }
        
        switch (destino)
        {
            case 'n': 
            contnac++;
            break;
            case 'm':
            contmercosur++;
            break;
            case 'i':
            continternacional++;
            break;
 
                }
            

        printf("el numero de vuelo es #%d y el tiempo total del vuelo es:%d\n",numvuelo, totaldevuelo);

    printf("quiere seguir ingresando vuelos? si-no\n");
    scanf("%s", seguir);

    } while (strcmp(seguir, "si") == 0);

    mostrar(contnac,contmercosur,continternacional,vuelomenortiempo,numeromenortiempovuelo);

    
}
    int ftotaldevuelo(int opca,int opcb,int opcc){
    int ftotaldevuelo;
    ftotaldevuelo=((opca+opcc)*opcb);

    return ftotaldevuelo;
    }

    void mostrar(int vda,int vdb,int vdc,int menorvuelo,int tpomenorvuelo){

        printf("la cantidad de vuelos con destino nacional son:%d\n"
        "la cantidad de vuelos con destino internacional mercosur son:%d\n"
        "la cantidad de vuelos con destino internacional fuera de mercosur son:%d\n",vda,vdb,vdc
        );
        if (tpomenorvuelo > 0){
            printf("el vuelo con menor tiempo que no haya hecho escalas es:#%d  con : %d minutos\n", tpomenorvuelo,menorvuelo);
        }else{
            printf("no hay vuelo que no haya hecho escalas registrados.\n");
        }
    }
