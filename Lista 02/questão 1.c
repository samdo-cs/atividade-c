#include <stdio.h>

// Implemente um programa que tenha como entrada um numero (1-7) que corresponde 
// a um dos dias da semana e imprima na tela o nome do dia correspondente 
// (domingo, segunda, terca, quarta, quinta, sexta, sabado). 
// Se o numero lido nao estiver no intervalo 1-7, imprima: “Numero de dia nao valido”. 
// O programa deve permanecer executando ate que o usuario tecle o numero 0.
// (Utilize obrigatoriamente teste no inıcio).

int main ()
{
    while (1)
    {
        printf("insira um numero (1-7): ");
    
        char op = getchar();
        getchar();

        if (op == '0')
        {
            puts("programa encerrado");
            break;
        }

        switch (op)
        {
        case '1':
            puts("1 - domingo \n");
            break;
        case '2':
            puts("2 - segunda \n");
            break;
        case '3':
            puts("3 - terca \n");
            break;
        case '4':
            puts("4 - quarta \n");
            break;
        case '5':
            puts("5 - quinta \n");
            break;
        case '6':
            puts("6 - sexta \n");
            break;
        case '7':
            puts("7 - sabado \n");
            break;
        default:
            puts("numero invalido! \n");
            break;
        }
    }

    return 0;
}