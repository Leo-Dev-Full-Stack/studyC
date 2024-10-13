#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float lado, perimetro;                              // variaveis sem atribuir valor
    printf("Digite o lado do quadrado, em cm: ");       // pedindo para o usuário atribuir valor de lado
    scanf("%f", &lado);                                 // le dados de lado que foram atribuidos
    perimetro = lado*4;                                 // atribui a variável perimetro o calculo de lado x 4
    printf("O perimetro vale %.2f cm \n", perimetro);   // imprime perimetro na tela do usuário
    system("pause");                                    // pausa para o programa não fechar rapido, fechando após pressionar alguma tecla
    return 0;                                           // final do programa
}