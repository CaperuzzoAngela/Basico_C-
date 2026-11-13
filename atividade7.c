#include <stdio.h>

int main() {
    
    int a, b;

    printf("Digite um numero: \n");
    scanf("%d", &a);

    printf("Digite outro numero: \n");
    scanf("%d", &b);
    
    if (a % b == 0) {
        printf("Sao multiplos!");
    } else {
        printf("Nao sao multiplos.");
    }
    
    
    return 0;
}
