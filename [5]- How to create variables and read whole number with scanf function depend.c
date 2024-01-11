#include <stdio.h>
#include <stdlib.h>

/*        Lesson 4
        Lendo números inteiros
*/

int main()  {

    int valor1, valor2;// criei uma variavel para guardar um valor do tipo inteiro

    // atribuição -> atribuir um valor a uma variável
    valor1 = 50;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor1, valor2);

    return 0;
}
