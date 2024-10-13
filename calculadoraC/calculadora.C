#include <stdio.h>
#include <stdlib.h>
#include "calculadoraBiblioteca.h"

int main(void) {
    int operacao;
    float num1, num2, resultado;

    do  {
        system("cls");

        printf("Opcao 1 - SOMAR\n");
        printf("Opcao 2 - SUBTRAIR\n");
        printf("Opcao 3 - MULTIPLICAR\n");
        printf("Opcao 4 - DIVIDIR\n");
        printf("Opcao 5 - MODULO\n");
        printf("Opcao 0 - SAIR\n");

        printf("\nEscolha qual operacao matematica voce deseja realizar:\n");
        scanf("%d", &operacao);

        switch (operacao)
        {
        case 0:
            break;

        case 1:
            printf("Digite dois numeros:\n");
            scanf("%f%f", &num1, &num2);
            resultado = somar(num1, num2);
            printf("O resultado de somar: %.2f + %.2f = %.2f\n\n", num1, num2 , resultado);
            break;

        case 2:
            printf("Digite dois numeros:\n");
            scanf("%f%f", &num1, &num2);
            resultado = subdtrair(num1, num2);
            printf("O resultado de subtrair: %.2f - %.2f = %.2f\n\n", num1, num2 , resultado);
            break;

        case 3:
            printf("Digite dois numeros:\n");
            scanf("%f%f", &num1, &num2);
            resultado = multiplicar(num1, num2);
            printf("O resultado de multiplicar: %.2f x %.2f = %.2f\n\n", num1, num2 , resultado);
            break;

        case 4:
            printf("Digite dois numeros:\n");
            scanf("%f%f", &num1, &num2);
            resultado = dividir(num1, num2);
            printf("O resultado de dividir: %.2f / %.2f = %.2f\n\n", num1, num2 , resultado);
            break;

        case 5:
            printf("Digite dois numeros:\n");
            scanf("%f%f", &num1, &num2);
            resultado = modulo(num1, num2);
            printf("O resultado do modulo (resto da divisao) de: %.2f / %.2f = %.2f\n\n", num1, num2 , resultado);
            break;

        default:
            printf("Voce escolheu uma opcao de operacao invalida\n\n");
            break;
        }
    system("pause");
    }
    while (operacao != 0);
    return 0;
}