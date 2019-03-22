#include <stdio.h>

int cont = 1, soma = 0;

int main(void) {
    do {
        printf("%d + ", cont);
        soma = cont + soma;
        cont++;
    } while (cont <= 100);
    printf("\nTotal....:%d\n", soma);

    return(0);