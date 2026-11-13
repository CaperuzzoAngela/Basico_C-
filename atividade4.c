
#include <stdio.h>

// Funcao para calcular o salario bruto
double calcular_salario_bruto(double valor_hora, double horas) {
    return valor_hora * horas;
}

// Funcao para calcular o desconto de 9%
double calcular_desconto(double salario_bruto) {
    return salario_bruto * 0.09;
}

// Funcao para calcular o salario liquido
double calcular_salario_liquido(double salario_bruto, double desconto) {
    return salario_bruto - desconto;
}

int main() {
    double valor_hora, horas;
    double salario_bruto, desconto, salario_liquido;

    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%lf", &valor_hora);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%lf", &horas);

    salario_bruto = calcular_salario_bruto(valor_hora, horas);

    desconto = calcular_desconto(salario_bruto);

    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    printf("\n--- RESULTADO DO SALARIO ---\n");
    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto (9%%): R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
