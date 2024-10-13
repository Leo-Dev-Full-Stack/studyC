/*
Notas da unip → (NP1 / NP2 / PIM)

PESO DAS NOTAS: TOTAL 100%
NP1 → 40%
NP2 → 40%
PIM → 20% (PIM APROVAÇÃO > 7 se PIM < 7 = DP no PIM)

Se tirar menos que 7 em uma matéria vai para exame
a média para passar no exame é 5 logo no exame tem que tirar o que faltou para 10.
tirei 4 na materia, to de exame, preciso de 6 no exame pq a formula é nota + exame / 2
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // DECLARANDO AS VARIÁVEIS E PEDINDO QUE O USUÁRIO DIGITE OS VALORES A SEREM ATRIBUÍDOS 
    float nota, np1, np2, pim, exame;
    printf("Digite sua nota da NP1: ");
    scanf("%f", &np1);
    printf("Digite sua nota da NP2: ");
    scanf("%f", &np2);
    printf("Digite sua nota no PIM: ");
    scanf("%f", &pim);

    // CONFIRMANDO SE O USUÁRIO DIGITOU NOTAS CORRETAS
    if (np1 < 0 || np1 > 10) {
        printf("ALERTA: VOCE DIGITOU UMA NOTA INVALIDA NA NP1\n");
    }   else {
            np1 = np1 * 0.4;
            printf("SUA NOTA NA NP1: %.2f\n", np1);
        }
    if (np2 < 0 || np2 > 10) {
        printf("ALERTA: VOCE DIGITOU UMA NOTA INVALIDA NA NP2\n");  
    }   else {
            np2 = np2 * 0.4;
            printf("SUA NOTA NA NP2: %.2f\n", np2);
        }
    if (pim < 0 || pim > 10) {
        printf("ALERTA: VOCE DIGITOU UMA NOTA INVALIDA NO PIM\n");  
    }    else {
            pim = pim * 0.2;
            printf("SUA NOTA NO PIM: %.2f\n", pim);
        }
        
    // CALCULA E IMPRIMI A NOTA
    nota = np1 + np2 + pim;
    printf("SUA NOTA FOI: %.2f\n", nota);

    // OBERSAVAÇÔES SOBRE AS NOTAS
    if (nota < 7) {
        exame = 10 - nota ;
        printf("OBSERVACAO: VOCE ESTA DE EXAME E PRECISA TIRAR NO MINIMO %.2f PARA SER APROVADO\n", exame);
    }
    if (pim <= 1.39) {
        printf("OBSERVACAO: VOCE ESTA DE DP NO PIM\n");
    }

    system("pause");
    return 0;
}