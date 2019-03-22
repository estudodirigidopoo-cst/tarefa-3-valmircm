#include <stdio.h>

int cont = 0;

int main(void) {
    do {
        if (cont%2) {
            printf("%d\n", cont);
            cont++;
        }
        else if (cont == 0) {
            printf("%d\n", cont);
            cont++;
        }
        cont++;

    } while (cont <= 20);
    return(0);
}