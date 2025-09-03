#include <stdio.h>

int main(){
    int a;
    int b;

    printf("\nColoque 2 números quaisquer:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b){
        printf("> Valor %d é maior que %d.\n", a, b);
    }
    if (a < b){
        printf("> Valor %d é menor que %d.\n", a, b);
    }
    if (a == b){
        printf("> Os valores são iguais.\n");
    }
}
//    gcc ex.c -o exReferente
//    ./ex