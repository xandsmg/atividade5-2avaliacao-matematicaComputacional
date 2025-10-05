const Prism = require('prismjs');
const loadLanguages = require('prismjs/components/index'); // Import loadLanguages from the components index

// Load specific languages
loadLanguages(['markup', 'css', 'javascript', 'php', 'c']);

// Now you can use Prism.highlight or Prism.highlightAll with these languages
const code = `
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    //Declarando variaveis principais
    int valorHora, horasMes;
    float salarioBruto, impostoRenda, inss, sindicato, desconto, salarioLiquido;
    
    printf("Quanto voce ganha por hora trabalhada? ");
    scanf("%d", &valorHora);

    printf("Quantas horas voce trabalha no mês? ");
    scanf("%d", &horasMes);

    // Salario Bruto
    salarioBruto = valorHora * horasMes;
    printf("Salario Bruto no mês: R$ %.2f\n", salarioBruto);

    printf("-------------------\nDescontos Aplicados\n-------------------\n");
    // Descontos Aplicados abaixo
    // imposto de renda 11%
    impostoRenda = salarioBruto * 0.14;
    printf("Imposto de Renda: %.2f\n", impostoRenda);

    // INSS 11%
    inss = salarioBruto * 0.11;
    printf("INSS: %.2f\n", inss);

    // sindicato 1%
    sindicato = salarioBruto * 0.01;
    printf("Sindicato: %.2f\n", sindicato);

    // Soma de tudo que será descontado    
    desconto = impostoRenda + inss + sindicato;

    printf("-------------------\n");
    // Salario Líquido
    salarioLiquido = salarioBruto - desconto;
    printf("Salario liquido no mês: %.2f", salarioLiquido);

    return 0;
}
`;

const highlightedCode = Prism.highlight(code, Prism.languages.markup, 'markup');
console.log(highlightedCode);