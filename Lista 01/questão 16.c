#include <stdio.h>

// Desenvolva um programa que calcule o salario liquido de um professor. 
// Para elaborar o programa, e necessario possuir alguns dados, tais como
// o valor da hora aula, numero de horas trabalhadas no mes e percentual 
// de desconto do INSS. 
// Em primeiro lugar, deve-se estabelecer o seu salario bruto para fazer 
// o desconto e ter o valor do salario liquido. 
// Obs.: o programa deve informar o salario bruto e salario liquido do professor. 

int main ()
{
    int horas_trabalhadas;
    float valor_hora, percentual_desconto, salario_bruto, salario_liquido;

    puts("insira o valor da hora aula: ");
    scanf("%f", &valor_hora);

    puts("insira o numero de horas trabalhadas por mes: ");
    scanf("%d", &horas_trabalhadas);

    puts("insira o valor do percentual de desconto do INSS: ");
    scanf("%f", &percentual_desconto);

    salario_bruto = valor_hora * horas_trabalhadas;
    salario_liquido = salario_bruto * ((100 - percentual_desconto) / 100);

    printf("salario bruto: R$%.2f\n", salario_bruto);
    printf("salario liquido: R$%.2f", salario_liquido);    

    return 0;
}