#include <stdio.h>

int main() {
    int idade;
    int matricula;
    float altura;
    char nome[50];
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    getchar(); // Limpa o buffer do teclado para evitar problemas com a leitura do nome

    printf("Digite seu nome: \n");    
    fgets(nome, 50, stdin); // Lê o nome do aluno, incluindo espaços

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n", nome);
    printf("Matrícula: %d\n", matricula); 
    printf("Idade: %d - Altura: %f", idade, altura);

    return 0;
}
