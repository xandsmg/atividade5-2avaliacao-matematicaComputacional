#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    
    int xSalada, xBacon, xTudo, xEgg, cerveja, refri;
    float xSaladaValor, xBaconValor, xTudoValor, xEggValor, cervejaValor, refriValor, valorTotal;

    printf("                                            Cardápio                                        \n");
    printf("--------------------------------------------------------------------------------------------\n");

    printf("X-salada.............................................................................R$ 5.50\n");
    printf("X-Bacon..............................................................................R$ 7.25\n");
    printf("X-Tudo...............................................................................R$ 10.30\n");
    printf("X-Egg................................................................................R$ 7.00\n");
    printf("Cerveja..............................................................................R$ 4.50\n");
    printf("Refrigerante.........................................................................R$ 6.00\n\n");

    printf("Escolha a quantidade de Xsalada: ");
    scanf("%d", &xSalada);
    xSaladaValor = xSalada * 5.50;

    printf("Escolha a quantidade de X-Bacon: ");
    scanf("%d", &xBacon);
    xBaconValor = xBacon * 7.25;

    printf("Escolha a quantidade de X-Tudo: ");
    scanf("%d", &xTudo);
    xTudoValor = xTudo * 10.30;

    printf("Escolha a quantidade de X-Egg: ");
    scanf("%d", &xEgg);
    xEggValor = xEgg * 7.00;

    printf("Escolha a quantidade de Cerveja: ");
    scanf("%d", &cerveja);
    cervejaValor = cerveja * 4.50;

    printf("Escolha a quantidade de Refrigerante: ");
    scanf("%d", &refri);
    refriValor = refri * 6.00;

    valorTotal = xSaladaValor + xBaconValor + xTudoValor + xEggValor + cervejaValor + refriValor;

    printf("                                         Comprovante\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("Item..................................................................QTD.......VLR...... TOTAL\n");
    printf("X-salada..............................................................%d  .......R$ 5.50  %.2f\n",xSalada, xSaladaValor);
    printf("X-Bacon...............................................................%d  .......R$ 7.25  %.2f\n",xBacon, xBaconValor);
    printf("X-Tudo................................................................%d  .......R$ 10.30 %.2f\n",xTudo, xTudoValor);
    printf("X-Egg.................................................................%d  .......R$ 7.00  %.2f\n",xEgg, xEggValor);
    printf("Cerveja...............................................................%d  .......R$ 4.50  %.2f\n",cerveja, cervejaValor);
    printf("Refrigerante..........................................................%d  .......R$ 6.00  %.2f\n\n",refri, refriValor);

    printf("---------------------------------------------------------------------------------------  Valor Total\n");
    printf("---------------------------------------------------------------------------------------  R$ %.2f", valorTotal);


    return 0;
}