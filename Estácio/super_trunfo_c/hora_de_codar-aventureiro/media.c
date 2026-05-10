#include <stdio.h>

int main() {

    float score1, score2, score3;
    float averege;
    int result = 1;


    while (result ==1){

        system("cls"); 

        printf("|-------------Programa de Cáulculo de Média-------------|\n");

        averege = 0;

        printf("Digite a primeira nota: ");
        scanf("%f", &score1);
        printf("Digite a segunda nota: ");
        scanf("%f", &score2);
        printf("Digite a terceira nota: ");
        scanf("%f", &score3);

        averege = (score1 + score2 + score3) / 3;

        printf("A média das notas é: %.2f\n", averege);
        printf("Deseja calcular a média de novo? (1 - Sim / 0 - Não): ");
        scanf("%d", &result);
    }
    return 0;   
}
