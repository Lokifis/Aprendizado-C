#include <stdio.h>

int main (){
    int a;
    int b;
    int media =0; 

    printf("\nMedia de todos os inteiros entre A e B\n>");
    scanf("%d", &a);
    printf(">");
    scanf("%d", &b);
    
    media = (a+b)/2;
    printf("Media: %d\n", media);
}