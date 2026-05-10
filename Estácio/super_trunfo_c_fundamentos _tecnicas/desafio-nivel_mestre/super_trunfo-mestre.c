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
    //comparação
    int comparation_population, comparation_area, comparation_pib, comparation_attractions, comparation_pib_per_capita, comparation_pop_density; 
    float super_power1, super_power2, comparation_super_power;



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


    printf("\n|-------------Batalha de Cartas-------------|\n");

    comparation_population = population_city1 > population_city2;
    comparation_area = area_city1 > area_city2;
    comparation_pib = pib_city1 > pib_city2;
    comparation_attractions = num_attractions_city1 > num_attractions_city2;
    comparation_pop_density = 1/population_density_city1 < 1/population_density_city2; // Menor densidade é a que ganha
    comparation_pib_per_capita = pib_per_capita_city1 > pib_per_capita_city2;
    super_power1 =
        (float)population_city1 +
        area_city1 +
        pib_city1 +
        num_attractions_city1 +
        pib_per_capita_city1 +
        (1.0 / population_density_city1);

    super_power2 =
        (float)population_city2 +
        area_city2 +
        pib_city2 +
        num_attractions_city2 +
        pib_per_capita_city2 +
        (1.0 / population_density_city2);

    comparation_super_power = super_power1 > super_power2;

        if (comparation_population == 1){
            printf("Número de habitantes: %d - A carta 1 ganhou.\n", population_city1);
        } else {
            printf("Número de habitantes: %d - A carta 2 ganhou.\n", population_city2);
        }

        if (comparation_area == 1){
            printf("Área: %.2f km² - A carta 1 ganhou.\n", area_city1);
        } else {
            printf("Área: %.2f km² - A carta 2 ganhou.\n", area_city2);
        }

        if (comparation_pib == 1){
            printf("PIB: %.2f bilhões de R$ - A carta 1 ganhou.\n", pib_city1);
        } else {
            printf("PIB: %.2f bilhões de R$ - A carta 2 ganhou.\n", pib_city2);
        }

        if (comparation_attractions == 1){
            printf("Número de atrações turísticas: %d - A carta 1 ganhou.\n", num_attractions_city1);
        } else {
            printf("Número de atrações turísticas: %d - A carta 2 ganhou.\n", num_attractions_city2);
        }

        if (comparation_pop_density == 1){
            printf("Densidade populacional: %d hab/km² - A carta 1 ganhou.\n", population_density_city1);
        } else {
            printf("Densidade populacional: %d hab/km² - A carta 2 ganhou.\n", population_density_city2);
        }

        if (comparation_pib_per_capita == 1){
            printf("PIB per capita: R$ %.2f - A carta 1 ganhou.\n", pib_per_capita_city1);
        } else {
            printf("PIB per capita: R$ %.2f - A carta 2 ganhou.\n", pib_per_capita_city2);
        }

        if (comparation_super_power == 1){
            printf("Super Poder: %.2f - A carta 1 ganhou a batalha!\n", super_power1);
        } else {
            printf("Super Poder: %.2f - A carta 2 ganhou a batalha!\n", super_power2);
        }

    return 0;
}
