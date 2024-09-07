#include <stdio.h>

// A linguagem C pode representar letras maiusculas, letras minusculas e uma 
// grande variedade de sımbolos especiais. O C usa internamente pequenos 
// inteiros para representar cada caractere diferente. O conjunto de caracteres 
// que um computador utiliza e as representacoes dos numeros inteiros corres 
// pondentes aqueles caracteres e chamado conjunto de caracteres do computador. 
// Voce pode imprimir o numero inteiro equivalente a letra maiuscula A, 
// por exemplo, executando a instrucao
//                           printf(“%d”, ’A’); 
// Escreva um programa em C que imprima os inteiros equivalentes a algumas
// letras maiusculas, letras minusculas e sımbolos especiais. No minimo, 
// determine os numeros inteiros equivalentes ao conjunto seguinte:
// A BCabc 0 12 $ * + / e o caractere espaco em branco.

int main ()
{
    printf("A = %d\n", 'A');
    printf("B = %d\n", 'B');
    printf("C = %d\n", 'C');

    printf("a = %d\n", 'a');
    printf("b = %d\n", 'b');
    printf("c = %d\n", 'c');
    
    printf("0 = %d\n", '0');
    printf("1 = %d\n", '1');
    printf("2 = %d\n", '2');
    
    printf("$ = %d\n", '$');
    printf("* = %d\n", '*');
    printf("+ = %d\n", '+');
    printf("/ = %d\n", '/');
    printf("  = %d\n", ' ');

    return 0;
}