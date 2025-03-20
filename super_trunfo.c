#include <stdio.h>
#include <string.h>
 
int main()
{
    char estado;
    char nome[50];
    char codigo[5];
    int populacao;
    float area;
    float pib;
    int npontosturisticos;
    char estado2;
    char nome2[50];
    char codigo2[5];
    int populacao2;
    float area2;
    float pib2;
    int npontosturisticos2;

    printf("Carta 1 ---\n"); 

    printf("Digite o estado (letra de A - H)\n");
    scanf("%c",&estado);

    
    printf("Digite o código da carta (formato %c01-%c04): ", estado, estado);
    scanf("%s", &codigo);
    getchar();
    
    printf("Digite o nome da cidade: ");
    fgets(nome,50,stdin);
    

    printf("Digite a população: ");
    scanf("%d", &populacao);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npontosturisticos);
    


    printf("Carta 2 ---\n"); 

    printf("Digite o estado (letra de A - H)\n");
    scanf(" %c",&estado2);

    
    printf("Digite o código da carta (formato %c01-%c04): ", estado2, estado2);
    scanf("%s", &codigo2);
    getchar();
    
    printf("Digite o nome da cidade: ");
    fgets(nome2,50,stdin);
    

    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npontosturisticos2);

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", npontosturisticos);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", npontosturisticos2);

    return(0);


}



