#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	

    int cod;
    int quant;
    float valor;
    char resp;
    char S;
    char N;
    

    printf("                                               L A N C H O N E T E    \n" );
    printf("                                              --------------------- \n ");
    printf("\n \n");
    printf("                                      Codigo  |     Produto      |  Valor  \n");
    printf("                                    |-------------------------------------| \n");
    printf("                                    |  100:      Cachorro Quente   R$1.70 | \n");
    printf("                                    |  101:      Bauru Simples     R$2.30 |\n");
    printf("                                    |  102:      Bauro com ovo     R$2.60 | \n");
    printf("                                    |  103:      Hamburguer        R$2.40 | \n");
    printf("                                    |  104: 	 Cheesburguer      R$2.50 | \n");
    printf("                                    |  105: 	 Refrigerante      R$1.00 | \n");
    printf("                                    |                                     | \n");
	printf("                                    |------------------------------------ | \n \n");
     


    printf(" 1) Digite o codigo do produto que deseja: \n");
    scanf("%i", &cod);
    printf(" 2) Qual a quantidade?: \n");
    scanf("%i", &quant);
	
	
	switch (cod)
    {
    case 100:
       valor = (quant * 1.70);
       printf("total a pagar sera: %f", valor);
       break;
    case 101:
       valor = (quant * 2.30);
       printf("total a pagar sera: %f", valor);
       break;
    case 102:
       valor = (quant * 2.60);
       printf("total a pagar sera: %f", valor);
       break;
    case 103:
       valor = (quant * 2.40);
       printf("total a pagar sera: %f", valor);
       break; 
    case 104:
       valor = (quant * 2.50);
       printf("total a pagar sera: %f", valor);
       break; 
    case 105:
       valor = (quant * 1.00);
       printf("total a pagar sera: %f", valor);
       break;
    
    default:
        printf("Codigo Invalido");
        break;
    }
    return 0;
}
