#include <stdio.h>

int main() {
    
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Numero par!\n");
    } else {
        printf("Numero impar!\n");
    }
    return 0;
}
