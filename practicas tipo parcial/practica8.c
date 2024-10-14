#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float fvaldepedidos(int tpopedido, float preciobase, int cantsolicitada);
void mostrar(int numpedido,float valpedido);

int main(){

int  codproducto, cantbolsas,diavisita, kilosfinal=0,stockhielo=2000,preciokg=50;
char seguir[3], codcliente[9];
int contpedido=0,contservice=0;
float acumttotal=0,valdepedidos;




    do{

        printf("ingrese el codigo del cliente:\n");
        scanf("%s",codcliente);

        printf("ingrese el codigo del producto(1-bolsa de 2kg,2-bolsa de 10kg o 3-service)");
        scanf("%d",&codproducto);

        if(codproducto!=3){
            printf("ingrese la cantidad de bolsas\n");
            scanf("%d", &cantbolsas);
        }
        printf("ingrese el dia de visita/entrega:\n(siendo 1 paralunes hasta sabado=6)\n");
        scanf("%d", &diavisita);

        if (codproducto!=3){
            if (codproducto==1){
                kilosfinal=2*cantbolsas;

            }else if (codproducto==2){
                kilosfinal=10*cantbolsas;
            }
        }
          
        if (kilosfinal>stockhielo)
        {
            printf("no hay stock suficiente.\n");
            break;
        }else{
            stockhielo= stockhielo-kilosfinal;
        }


        valdepedidos=fvaldepedidos(codproducto,preciokg,cantbolsas);
        contpedido++;
        acumttotal=acumttotal+valdepedidos;

        if (codproducto==3)
        {
            contservice++;
        }
        
        
        mostrar(contpedido,valdepedidos);
        
        printf("quiere seguir ingresando clientes? si//no ");
        scanf("%s", seguir);
    } while (strcmp(seguir, "si") == 0);

    printf("el valor total de todos los pedidos es de: %.2f\n", acumttotal);
    printf("la cantidad de service solicitados para un sabado son: %d",contservice);
    
}    


float fvaldepedidos(int tpopedido, float preciobase, int cantsolicitada  ){
    int kilosfinal;
    float preciofinal;
    
            if (tpopedido==1)
        {
            kilosfinal=2*cantsolicitada;
        }else if (tpopedido==2)
        {
            kilosfinal=10*cantsolicitada;
        }else if(tpopedido==3){
            return 500;
        }
        
         if(kilosfinal<=100)
        {
            preciofinal=preciobase*kilosfinal*0.90;
        }else
        {
            preciofinal=preciobase*kilosfinal*0.75;
        }
        return preciofinal;
}  


void mostrar(int numpedido,float valpedido){
    printf("el numero de pedido es #%d y el valor del pedido es: %.2f\n", numpedido, valpedido);
}
