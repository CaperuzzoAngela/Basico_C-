#include <stdio.h>
                                                                                    //executar gcc nome.c -o nome.exe -- .\nome.exe
int main(){ 

    int vendas[5];
    int soma = 0;

    vendas[0] = 100;
    vendas[1] = 200;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor das vendas do dia: %d\n", i + 1);
        scanf("%d", &vendas[i]);
    }
    
    //soma dos valores
    for (int i = 0; i < 5; i++) {
        soma = soma + vendas[i];
    }
    
    printf("Vendas Registradas... \n");

    for (int i = 0; i < 5; i++) {
        printf("Dia %d: %d\n", vendas[i]);
    }
    
    printf("\nTotal das vendas: %d\n", soma);

    return 0;
}