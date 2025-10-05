#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    float valorComb, disRev, custoEtanol, icms, cppc, despesaImposto, valorRefinaria;

    printf("+ Valor da bomba: R$: ");
    scanf("%f", &valorComb);
   
    disRev = valorComb * 0.17;
    printf("- Distribuição e Revenda(17%%): R$ %.2f\n", disRev);

    custoEtanol = valorComb * 0.12;
    printf("- Custo Etanol Anidro (12%%): R$ %.2f\n", custoEtanol);

    icms = valorComb * 0.28;
    printf("- ICMS (28%%): R$ %.2f\n", icms);

    cppc = valorComb * 0.07;
    printf("- CIDE, PIS/PASEP e COFINS (7%%): R$ %.2f\n", cppc);

    despesaImposto = disRev + custoEtanol + icms +  cppc;

    valorRefinaria = valorComb - despesaImposto;

    printf("= Valor da refinaria: R$ %.2f\n", valorRefinaria);

    return 0;
}