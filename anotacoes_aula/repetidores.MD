# Aula dia: 27/08/2025

## Atualização de valores usando mesmo parâmetro

Professor quis colocar um exemplo de conta corrente e investimentos, onde tem saldo inicial e juros de 1% por mês.

int inicio;

| scanner do valor inicial

float saldo = inicio;
float juros = 0.01;

saldo= inicio \* juros;
saldo= saldo + saldo \* juros + mensal;

| printf do saldo depois de x meses.

### Introdução a While

| supondo que queira X valor para chegar.

while (saldo < valorAlvo){
    meses = meses + 1;
    saldo = saldo + saldo * juros + mensal;
}

Cada vez que colocamos parâmetros, condicionais e etc, aumentamos nosso programa no geral.
O código é uma junçao disso tudo, tem x linhas mas são diversos programas dentro de cada valor!

Do While = Enquanto verdadeiro, faça novamente.
Faz ação primeiro depois verifica
While verifica primeiro depois verifica.
For é como o While, mas não foi aprofundado pelo professor (ele disse para quem quiser saber mais, que pesquise).

Valores como "While ( 1 == 1)" retorna 1, verdadeiro, mas "Booleanos em C não existem", logo o contrário disso retorna 0, um falso indicador (que funciona para diversos outros aspectos da linguagem).

