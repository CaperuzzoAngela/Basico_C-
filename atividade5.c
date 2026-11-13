#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero é negativo!\n");
    } else { 
        printf("Numero positivo!\n");
    }
    
}