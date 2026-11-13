#include <stdio.h>

int main(){

    int numero;
    int soma = 0;

    printf("PARA ENCERRAR DIGITE 0 \n");
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    while (numero != 0) {
        soma = soma + numero;

        printf("Digite outro numero, para encerrar digite 0: \n");
        scanf("%d", &numero);
    }
    
    printf("A soma total e: %d\n", soma);

    return 0;
}