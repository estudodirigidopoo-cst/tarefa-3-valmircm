#include <stdio.h>

int main(void) {

    int cont = 1;

    for (int i=1; i<200; i++) {
        if (i%4 == 0) 
            printf("%d, ", i);
    }
    return(0);
}