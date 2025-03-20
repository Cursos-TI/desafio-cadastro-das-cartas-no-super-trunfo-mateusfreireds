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
    printf("Densidade populacional: %d hab/km2\n", populacao/area);
    printf("PIB per capita: R$ %.2f\n", pib/populacao);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", npontosturisticos2);
    printf("Densidade populacional: %d hab/km2\n", populacao2/area2);
    printf("PIB per capita: R$ %.2f\n", pib2/populacao2);

    float pibCapita = pib/populacao;
    float pibCapita2 = pib2/populacao2;
    float densidade = populacao/area;
    float densidade2 = populacao2/area2;

    float superPoder = populacao + area + pib + npontosturisticos + pibCapita - densidade;
    float superPoder2 = populacao2 + area2 + pib2 + npontosturisticos2 + pibCapita2 - densidade2;

    printf("\n=== Comparação ===\n");
    if(populacao > populacao2){
        printf("População : A carta %s venceu\n", codigo);
    }else if(populacao < populacao2){
        printf("População : A carta %s venceu\n", codigo2);
    }else{  
        printf("População : Empate\n");
    }
    if(area > area2){
        printf("Área : A carta %s venceu\n", codigo);
    }else if(area < area2){
        printf("Área : A carta %s venceu\n", codigo2);
    }else{  
        printf("Área : Empate\n");
    }
    if(pib > pib2){
        printf("PIB : A carta %s venceu\n", codigo);
    }else if(pib < pib2){
        printf("PIB : A carta %s venceu\n", codigo2);
    }else{
        printf("PIB : Empate\n");
    }
    if(npontosturisticos > npontosturisticos2){
        printf("Pontos Turísticos : A carta %s venceu\n", codigo);
    }else if(npontosturisticos < npontosturisticos2){
        printf("Pontos Turísticos : A carta %s venceu\n", codigo2);
    }else{
        printf("Pontos Turísticos : Empate\n");
    }
    if((populacao/area) < (populacao2/area2)){
        printf("Densidade populacional : A carta %s venceu\n", codigo);
    }else if((populacao/area) > (populacao2/area2)){
        printf("Densidade populacional : A carta %s venceu\n", codigo2);
    }else{
        printf("Densidade populacional : Empate\n");
    }
    if((pib/populacao) > (pib2/populacao2)){
        printf("PIB per capita : A carta %s venceu\n", codigo);
    }else if((pib/populacao) < (pib2/populacao2)){
        printf("PIB per capita : A carta %s venceu\n", codigo2);
    }else{
        printf("PIB per capita : Empate\n");
    }

    if(superPoder > superPoder2){
        printf("Super Poder : A carta %s venceu\n", codigo);
    }else if(superPoder < superPoder2){
        printf("Super Poder : A carta %s venceu\n", codigo2);
    }else{
        printf("Super Poder : Empate\n");
    }

    return(0);


}



