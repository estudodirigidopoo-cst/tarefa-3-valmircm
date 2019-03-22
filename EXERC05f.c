#include <stdio.h>

int main(void) {

    int cont = 1;

    for (int i=0; i<=9; i++) {
        if(i == 0)
            printf("\n");
        
        else
            cont = cont * 3;
            printf("3^%d = %d\n", i, cont);
    }
    return(0);
}