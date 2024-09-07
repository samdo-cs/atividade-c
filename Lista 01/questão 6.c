#include <stdio.h>

// Fazer um programa para ler a altura (em metros) e o sexo de uma 
// pessoa e calcular o seu peso ideal atraves da seguinte formula: 
// para homens: 72.7 * altura - 58 
// para mulheres: 62.1 * altura - 44.7

int main ()
{
    float peso_ideal;
    float altura;
    char sexo;
    
    puts("insira a altura(m): ");
    scanf("%f", &altura);

    getchar();

    puts("insira o sexo (m ou f): ");
    sexo = getchar();

    if (sexo == 'm')
    {
        peso_ideal = 72.7 * altura - 58;
    }
    
    else if (sexo == 'f')
    {
        peso_ideal = 62.1 * altura - 44.7;
    }

    else
    {
        puts("sexo invalido!");
    }
    
    printf("peso ideal: %.3f kg", peso_ideal);

    return 0;
}