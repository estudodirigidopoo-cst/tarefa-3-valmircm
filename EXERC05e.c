#include <stdio.h>

int main(void) {

    int result = 0;

    for (int i=15; i<=180; i++) {
        
        result = i * i;
        printf("%d, ", result);
    }
    return(0);
}