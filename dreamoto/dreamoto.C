#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MOTOS 100

typedef struct {
    char marca[20];
    char tipo[20];
    char modelo[20];
    int qntdParcelas;
    float preco;
} moto;

int main() {
    FILE *arquivoMoto;
    int i = 0;
    float valorParcela;
    moto motos[MAX_MOTOS];

    arquivoMoto = fopen("motosPesquisadas.txt", "a");

    if (arquivoMoto == NULL) {
        printf("Erro na abertura do arquivo!\n");
        system("pause");
        return 1;
    } else {
        while (i < MAX_MOTOS) {
            printf("Digite a marca da moto: ");
            scanf("%s", &motos[i].marca);
            printf("Digite o tipo da moto: ");
            scanf("%s", &motos[i].tipo);
            printf("Digite o modelo da moto: ");
            scanf("%s", &motos[i].modelo);
            printf("Digite o preco da moto: ");
            scanf("%f", &motos[i].preco);
            printf("Digite a quantidade de parcelas: ");
            scanf("%d", &motos[i].qntdParcelas);

            valorParcela = motos[i].preco / motos[i].qntdParcelas;

            fprintf(arquivoMoto, "\n<-------------------!!------------------->\n\n");
            fprintf(arquivoMoto, "Marca: %s\nTipo: %s\nModelo: %s\nPreco: R$%.2f\nQuantidade de Parcelas: %d\nValor das parcelas: R$%.2f\n",
                    motos[i].marca, motos[i].tipo, motos[i].modelo, motos[i].preco, motos[i].qntdParcelas, valorParcela);

            i++;
            
            char continuar;
            printf("Deseja cadastrar outra moto? (s/n): ");
            scanf(" %c", &continuar);
            if (continuar != 's') {
                break;
            }
        }
    }

    fclose(arquivoMoto);
    return 0;
}