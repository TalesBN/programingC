#include <stdio.h>

int main() {
    int opcao;
    char estado1[10];
    char cod_city1[10];
    char name_city1[25];
    int population_city1;
    float area_city1;
    float pib_city1; 
    int num_attractions_city1;
    float population_density_city1;
    float pib_per_capita_city1;

    char estado2[10];
    char cod_city2[10];
    char name_city2[25];
    int population_city2;
    float area_city2;
    float pib_city2; 
    int num_attractions_city2;
    float population_density_city2;
    float pib_per_capita_city2;


    printf("|------------------Cartas do Super Trunfo - Cidades------------------|\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("Deseja exibir as letras referentes aos estados? (1 - Sim / 2 - Não)\n");
    scanf("%d", &opcao);

        if (opcao == 1){
            printf("A - São Paulo| B - Rio de Janeiro| C - Minas Gerais| D - Paraná| E - Rio Grande do Sul| F - Santa Catarina| G - Bahia| H - Distrito Federal\n");   
        }

    printf("**Digite os dados da primeira carta:**\n");

        getchar();

        printf("Estado: \n");
        fgets(estado1, 10, stdin); // Lê o estado da cidade

        printf("Código da cidade (ex.: A01, B01, etc.): \n");
        fgets(cod_city1, 10, stdin); // Lê o código da cidade

        printf("Nome da cidade: \n");
        fgets(name_city1, 25, stdin); // Lê o nome da cidade

        printf("População (valor bruto = 123456): \n");
        scanf("%d", &population_city1);

        getchar();

        printf("Área (em km²): \n");
        scanf("%f", &area_city1);

        printf("PIB (em bilhões de R$): \n");
        scanf("%f", &pib_city1);

        getchar();

        printf("Número de atrações turísticas: \n");
        scanf("%d", &num_attractions_city1);

    
    printf("**Digite os dados da segunda carta:**\n");

        getchar();

        printf("Estado: \n");
        fgets(estado2, 10, stdin); // Lê o estado da cidade

        printf("Código da cidade (ex.: A02, B02, etc.): \n");
        fgets(cod_city2, 10, stdin); // Lê o código da cidade

        printf("Nome da cidade: \n");
        fgets(name_city2, 25, stdin); // Lê o nome da cidade

        printf("População (valor bruto = 123456): \n");
        scanf("%d", &population_city2);

        printf("Área (em km²): \n");
        scanf("%f", &area_city2);

        printf("PIB (em bilhões de R$): \n");
        scanf("%f", &pib_city2);

        getchar();

        printf("Número de atrações turísticas: \n");
        scanf("%d", &num_attractions_city2);

    // Cálculo da densidade populacional e PIB per capita
    population_density_city1 = population_city1/area_city1;
    pib_per_capita_city1 = pib_city1*1000000000/population_city1;

    population_density_city2 = population_city2/area_city2;
    pib_per_capita_city2 = pib_city2*1000000000/population_city2;


    printf("\n|------------------Carta 1------------------|\n");
        printf("Estado: %s\n", estado1);
        printf("Código da cidade: %s\n", cod_city1);
        printf("Nome da cidade: %s\n", name_city1);
        printf("População: %d\n", population_city1);
        printf("Área: %.2f km²\n", area_city1);
        printf("PIB: %.2f bilhões de R$\n", pib_city1);
        printf("Número de atrações turísticas: %d\n", num_attractions_city1);
        printf("Densidade populacional: %.2f hab/km²\n", population_density_city1);
        printf("PIB per capita: R$ %.2f \n", pib_per_capita_city1);

    printf("\n|------------------Carta 2------------------|\n");
        printf("Estado: %s\n", estado2);
        printf("Código da cidade: %s\n", cod_city2);
        printf("Nome da cidade: %s\n", name_city2);
        printf("População: %d\n", population_city2);
        printf("Área: %.2f km²\n", area_city2);
        printf("PIB: %.2f bilhões de R$\n", pib_city2);
        printf("Número de atrações turísticas: %d\n", num_attractions_city2);
        printf("Densidade populacional: %.2f hab/km²\n", population_density_city2);
        printf("PIB per capita: R$ %.2f \n", pib_per_capita_city2);

    return 0;
}
