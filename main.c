#include <stdio.h>

int main() {
    float receita, despesa, saldo;

    // Solicitar ao usuário a receita e a despesa
    printf("Digite o valor da receita: ");
    scanf("%f", &receita);
    printf("Digite o valor da despesa: ");
    scanf("%f", &despesa);

    // Calcular o saldo
    saldo = receita - despesa;

    // Exibir o saldo atualizado
    printf("Saldo atualizado: %.2f\n", saldo);

    return 0;
}
