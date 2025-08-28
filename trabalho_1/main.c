#include <stdio.h>

// Calcula salário final de um funcionário da Abangu Corporation
int main() {
    float salarioBase, valorTotal = 0;
    int dependentes, anosDeCasa, anoAtual;

    //PRINTS INICIAIS
    printf("\n---- Calculadora 2000 ----\n");
    printf("\n----  By Abangu Corp. ----\n");

    printf("\n -> Digite o salário do funcionário: ");
    scanf("%f", &salarioBase);

    printf("\n -> Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    printf("\n -> Digite os anos de casa do funcionário: ");
    scanf("%d", &anosDeCasa);

    printf("\n -> Digite o ano referente (atual de preferência): ");
    scanf("%d", &anoAtual);


    //Caso não encaixe nos requisitos, retorna valor false (encerra programa)
    if (dependentes < 0 || dependentes > 6) {
        printf("ERRO: Parâmetros não aceitados!\n");
        return 1;
    }
    /*
    Alternativa de usar Switch não funcionou como eu esperava ...
    */

    // ' Atributos base do cálculo
    float acrescimoDependentes = 0;
    float acrescimoAnosDeCasaBase = 0;
    float acrescimoBissexto = 0;


    // ' OPERAÇÔES:
    // Acréscimo por dependentes (máx: 6 dependentes)
    acrescimoDependentes = 0.04 * dependentes * salarioBase;

    // Acréscimo por anos de casa
    //TODO: Otimizar função, sinto que ela está estranha 
    if (dependentes < 3) {
        if (anosDeCasa >= 5) {
            int acrescimoAnos = anosDeCasa / 5;
            if (acrescimoAnos > 5) {
                printf("Funcionário com menos de 3 dependentes não pode ter mais que 5 acréscimos base relativo aos anos de casa!\n");
                acrescimoAnos = 5;
            }
            acrescimoAnosDeCasaBase = acrescimoAnos * 0.03 * salarioBase;
        }
    } else {
        if (anosDeCasa >= 6) {
            int acrescimoAnos2 = anosDeCasa / 6;
            if (acrescimoAnos2 > 7) {
                printf("Funcionário com 3 ou mais dependentes não pode ter mais que 7 acréscimos base relativo aos anos de casa!\n");
                acrescimoAnos2 = 7;
            }
            acrescimoAnosDeCasaBase = acrescimoAnos2 * 0.04 * salarioBase;
        }
    }

    // ' CALCULO:
    // Acréscimo por ano bissexto
    if (anoAtual % 4 == 0) {
        acrescimoBissexto = salarioBase * 0.01;
        valorTotal= acrescimoBissexto+acrescimoDependentes+acrescimoAnosDeCasaBase;
    }else{ 
    //Caso não:
        valorTotal = salarioBase + acrescimoDependentes + acrescimoAnosDeCasaBase;
    //TODO:Colocar valor total caso ano seja bissexto (de uma forma mais eficiente e legivel)
        printf("\nValor total é: %.2f\n", valorTotal);
    return 0;
    }
}
