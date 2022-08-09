/*
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
*/
#include <stdio.h>

int fibonacci(int);

int main() {

    int num, i;

    printf("\nDigite o numero desejado: ");
    scanf("%d", &num);
    printf("\n");

    printf("Sequencia de Fibonacci:\n\n");
    for(i = 1; i <= 20; i++) {      //calculando a Fibonacci com 20 termos
        printf("%d ", fibonacci(i));
        if(num == fibonacci(i)) {
            printf("\n%d pertence a sequencia de Fibonacci", num);
            return 0;
        }
    }
   
    printf("\n%d nao pertence a sequencia de fibonacci", num);
    return 0;
}

int fibonacci(int n) {
    int x;

    if(n == 1) {
        return 1;
    }
    if (n == 2) {
        return 1;
    }

    x = fibonacci(n-1) + fibonacci(n-2);

    return x;
}