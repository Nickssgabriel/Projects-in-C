#include <stdio.h>
#include <stdlib.h>

/*
        Lesson 6
    Reading Strings
*/

int main()  {
        char sexo = 's';
        printf("valor da variável sexo: %c\n", sexo);
        printf("Digite seu sexo: (f, F, m, M)");
        scanf("%c", &sexo);
        printf("Valor da variável sexo: %c\n", sexo);
}
