#include <stdio.h>

int main (){
    int a;
    int b;
    int soma = 0;

    printf("\n- Soma de todos os inteiros entre A e B\n> ");
    scanf("%d", &a);
    printf("> ");
    scanf("%d", &b);
    
    printf("\nEntre A e B:\n");
    while (a<b || a>b){
        soma= a++;
        printf("%d ",soma);
    }
    printf("\n");
}