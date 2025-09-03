#include <stdio.h>

int main (){
    int a;
    int b;
    int soma = 0;
    int multiploDeSete;

    printf("\nSoma de todos os inteiros entre A e B\n>");
    scanf("%d", &a);
    printf(">");
    scanf("%d", &b);
    
    soma = a+b;
    multiploDeSete %= soma;

    if (multiploDeSete=7) {
        printf("Erro: soma não pode ter seu resultado igual a um número múltiplo de 7\n");
    }else{
        printf("Soma: %d\n", soma);
    }
}