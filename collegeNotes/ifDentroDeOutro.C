#include <stdio.h>

int main(void) {
    int idade, doenca;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade >= 18) {
        printf("Voce esta doente? 1 para SIM, 0 para NAO: ");
        scanf("%d", &doenca);
        if(doenca) {
            printf("Voce nao pode doar sangue doente. \n");
        }
        else {
            printf("Voce pode doar sangue! \n");
        }
    }
    else {
        printf("Voce nao pode doar sangue por ser menor de idade.\n");
    }
return 0;
}