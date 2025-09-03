#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("\nColoque 3 números quaisquer:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a==b && b==c){
        printf("Coloque números que sejam diferentes entre sí");
    }

    int numMaior;
    int numMenor;
    int numMeio;

    if (a<c && a<b && b<c){
        printf("Números passados: %d , %d , %d.\n Ordenados de forma crescente: %d, %d, %d", a, b,c,numMenor,numMeio,numMaior);
    }
    
    if (a<c && a<b && c<b){
        numMaior=b;
        numMeio=c;
        printf("Números passados: %d , %d , %d.\n Ordenados de forma crescente: %d, %d, %d", a, b,c,numMenor,numMeio,numMaior);
    }
    
    if (b<c && b<a && a<c){
        numMenor=b;
        numMaior=c;
        numMeio=a;
        printf("Números passados: %d , %d , %d.\n Ordenados de forma crescente: %d, %d, %d", a, b,c,numMenor,numMeio,numMaior);
    }

    if (b<c && b<a && c<a){
        numMenor=b;
        numMaior=a;
        numMeio=c;
        printf("Números passados: %d , %d , %d.\n Ordenados de forma crescente: %d, %d, %d", a, b,c,numMenor,numMeio,numMaior);
    }

    if (c<b && c<a && b<a){
        numMenor=c;
        numMaior=a;
        numMeio=b;
        printf("Números passados: %d , %d , %d.\n Ordenados de forma crescente: %d, %d, %d", a, b,c,numMenor,numMeio,numMaior);
    }
    
    if (c<b && c<a && a<b){
        numMenor=c;
        numMaior=b;
        numMeio=a;
        printf("Números passados: %d , %d , %d.\n Ordenados de forma crescente: %d, %d, %d", a, b,c,numMenor,numMeio,numMaior);
    }
}
//    gcc ex.c -o exReferente
//    ./ex