#include <stdio.h>

// Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que 
// solicite o numero de dias trabalhados pelo vendedor e imprima o valor lıquido
// a ser pago ao mesmo. 
// Sabendo que se ele trabalhou ate 10 dias nao tem direito a gratificacao, 
// se ele trabalhou acima de 10 dias e ate 20 dias tem direito a gratificacao de 20%, 
// se ele trabalhou acima de 20 dias tem direito a gratificacao de 30%. 
// Sempre sao descontados 10% de imposto de renda em cima do valor bruto. 

int main ()
{
    int dias_trabalhados; 
    float valor_bruto, valor_liquido;

    puts("insira o numero de dias trabalhados");
    scanf("%d", &dias_trabalhados);

    if(dias_trabalhados > 10 && dias_trabalhados <= 20)
        valor_bruto = (dias_trabalhados * 50.25)*(120.0/100.0);
    
    else if (dias_trabalhados > 20)
        valor_bruto = (dias_trabalhados * 50.25)*(130.0/100.0);
    
    else
        valor_bruto = dias_trabalhados * 50.25;

    valor_liquido = valor_bruto * (90.0/100.0);

    printf("valor liquido: R$:%.2f", valor_liquido);

    return 0;
}