#include <stdio.h>

int resultado, num;

int main(void) {
    
    printf("Informe o número para a tabuada....: ");
    scanf("%d", &num);

    for (int i=0; i<=9; i++) {
        resultado = i * num;
        printf("%d x %d = %d\n", num, i, resultado);
    }
    return(0);
}