#include <stdio.h> //permite usar funções de entrada e saída, como printf e scanf.
#include <locale.h>
#include <stdlib.h>

int main() { //ponto onde o programa começa. 
    
    system("chcp 65001 > nul");
    setlocale(LC_ALL, ""); 

    int num1, num2, num3;
    int soma, subtracao, multiplicacao;
    float divisao;  //o resultado pode ter casas decimais.
    int comparacao1, comparacao2;
    int verificacao;

    printf("Digite um número: ");
    scanf("%d", &num1);  //%informa que queremos receber um número inteiro.

    printf("Digite um segundo número: ");
    scanf("%d", &num2);   //&indica o endereço de memória onde o valor digitado será armazenado.

    printf("Por fim, digite o último númrto: ");
    scanf("%d", &num3);

    //operação aritimetica
    soma = num1 + num2 + num3;
    subtracao = num1 - num2 - num3;
    multiplicacao = num1 * num2 * num3;

    printf("\n Operações Aritméticas \n");  //\npula uma linha.
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);  

    if (num2 != 0 && num3 != 0){
            divisao = (float)num1 / num2 / num3;
                printf("Divisao: %.2f\n", divisao); //.2f número decimal com duas casas depois da vírgula.
    } else {
                printf("A divisão não pode ser realizada devido o divisor ser zero.\n");
    }

    //operadores relacionais
    comparacao1 = num1 > num2;
    comparacao2 = num2 < num3;  //uma comparação em C retorna 1 para (T) e 0 para (F)

    printf("\n Operadores Relacionais \n");
    printf("O primeiro número é maior que o segundo? %d\n", comparacao1);
    printf("O segundo número é menor que o terceiro? %d\n", comparacao2);

    //comparações com operadores lógicos
    verificacao = (num1 > 0) && (num2 % 2 == 0);

    printf("\n Operação Lógica \n");

    if (verificacao){   //if executa um bloco se a condição for verdadeira.
        printf("O primeiro número é positivo e o segundo é par!\n");
    } else {
        printf("As duas condições não são verdadeiras.\n"); //else executa outro bloco se ela for falsa.
    }

    return 0; //indica que ele terminou corretamente.
}