#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("\nColoque 3 números quaisquer:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b && a > c ){
        printf("> Valor %d é maior que %d e %d.\n", a, b, c);
    }
    if (b > a && b > c){
        printf("> Valor %d é maior que %d e %d.\n", b, a, c);
    }
    if (c > a && c > b){
        printf("> Valor %d é maior que %d e %d.\n", c, a, b);
    }
}
//    gcc ex.c -o exReferente
//    ./ex