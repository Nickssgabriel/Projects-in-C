#include <stdio.h>
#include <stdlib.h>
//  Lesson 5: Reading real numbers//

int main() {
   float numero = 3.1415;
   printf("Valor da variável: %.4f\n", numero);

   printf("Digite um número real: ");
   scanf("%f", &numero);

   printf("Valor lido: %.3f", numero);
}
