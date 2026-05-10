#include <stdio.h>

int main() {

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultA, resultB;

    // Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparação com o valor mínimo de estoque
    resultA = estoqueA >= estoqueminimoA;
    resultB = estoqueB >= estoqueminimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultB);

    // Comparações entre os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, 
        (estoqueA * valorA) > (estoqueB * valorB));
    
    return 0;
}