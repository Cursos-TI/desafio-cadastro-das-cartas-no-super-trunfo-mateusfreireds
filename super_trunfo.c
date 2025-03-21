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





    printf("----------------Carta 1 ----------------\n"); 

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
    


    printf("----------------Carta 2 ----------------\n"); 

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

    printf("\n---------------- Dados da Carta 1 ----------------\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", npontosturisticos);
    printf("Densidade populacional: %d hab/km2\n", populacao/area);
    printf("PIB per capita: R$ %.2f\n", pib/populacao);

    printf("\n---------------- Dados da Carta 2 ----------------\n");
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

    int atributo;

    nome[strcspn(nome, "\n")] = 0;
    nome2[strcspn(nome2, "\n")] = 0;
    
    int primeiraescolha;
    int segundaescolha;


    printf("Escolha o primeiro atributo que deseja comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &primeiraescolha);

    printf("Escolha o segundo atributo que deseja comparar:\n");
    primeiraescolha == 1 ? 0 : printf("1 - População\n") ;
    primeiraescolha == 2 ? 0 : printf("2 - Área\n");
    primeiraescolha == 3 ? 0 : printf("3 - PIB\n");
    primeiraescolha == 4 ? 0 : printf("4 - Pontos Turísticos\n");
    primeiraescolha == 5 ? 0 : printf("5 - Densidade populacional\n");
    primeiraescolha == 6 ? 0 : printf("6 - PIB per capita\n");
    primeiraescolha == 7 ? 0 : printf("7 - Super Poder\n");
    scanf("%d", &segundaescolha);

    if (segundaescolha == primeiraescolha){
        printf("Escolha inválida, escolha um atributo diferente do primeiro\n");
        segundaescolha = 0;

    }

    switch(primeiraescolha){    

        case 1:
            printf("Atributo: População\n");
            printf("Carta 1: %s - %d\n", nome,populacao);
            printf("Carta 2: %s - %d\n", nome2,populacao2);

            if(populacao > populacao2){
                printf("Resultado : A carta %s venceu\n", codigo);
            }else if(populacao < populacao2){
                printf("Resultado : A carta %s venceu\n", codigo2);
            }else{  
                printf("Resultado : Empate\n");
            }
        break;

        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1: %s - %d\n", nome,area);
            printf("Carta 2: %s - %d\n", nome2,area2);
            if(area > area2){
                printf("Resultado : A carta %s venceu\n", codigo);
            }else if(area < area2){
                printf("Resultado : A carta %s venceu\n", codigo2);
            }else{  
                printf("Resultado : Empate\n");
            }
        break;

        case 3:    
            printf("Atributo: PIB\n"); 
            printf("Carta 1: %s - %.2f\n", nome,pib);
            printf("Carta 2: %s - %.2f\n", nome2,pib2); 

            if(pib > pib2){
                printf("PIB : A carta %s venceu\n", codigo);
            }else if(pib < pib2){
                printf("PIB : A carta %s venceu\n", codigo2);
            }else{
                printf("PIB : Empate\n");
            }
        break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1: %s - %d\n", nome,npontosturisticos);
            printf("Carta 2: %s - %d\n", nome2,npontosturisticos2);

            if(npontosturisticos > npontosturisticos2){
                printf("Pontos Turísticos : A carta %s venceu\n", codigo);
            }else if(npontosturisticos < npontosturisticos2){
                printf("Pontos Turísticos : A carta %s venceu\n", codigo2);
            }else{
                printf("Pontos Turísticos : Empate\n");
            }
        break;

        case 5:
            printf("Atributo: Densidade populacional\n");
            printf("Carta 1: %s - %d\n", nome,densidade);
            printf("Carta 2: %s - %d\n", nome2,densidade2);


            if((populacao/area) < (populacao2/area2)){
                printf("Densidade populacional : A carta %s venceu\n", codigo);
            }else if((populacao/area) > (populacao2/area2)){
                printf("Densidade populacional : A carta %s venceu\n", codigo2);
            }else{
                printf("Densidade populacional : Empate\n");
            }
        break;

        case 6:
            printf("Atributo: PIB per capita\n");
            printf("Carta 1: %s - %d\n", nome,pibCapita);
            printf("Carta 2: %s - %d\n", nome2,pibCapita2);

            if((pib/populacao) > (pib2/populacao2)){
                printf("PIB per capita : A carta %s venceu\n", codigo);
            }else if((pib/populacao) < (pib2/populacao2)){
                printf("PIB per capita : A carta %s venceu\n", codigo2);
            }else{
                printf("PIB per capita : Empate\n");
            }
        break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("Carta 1: %s - %d\n", nome,superPoder);
            printf("Carta 2: %s - %d\n", nome2,superPoder2);

            if(superPoder > superPoder2){
                printf("Super Poder : A carta %s venceu\n", codigo);
            }else if(superPoder < superPoder2){
                printf("Super Poder : A carta %s venceu\n", codigo2);
            }else{
                printf("Super Poder : Empate\n");
            }
        break;

        default:
            printf("Opção inválida\n");
        break;
    }

    switch(segundaescolha){

        case 1:
            printf("Atributo: População\n");
            printf("Carta 1: %s - %d\n", nome,populacao);
            printf("Carta 2: %s - %d\n", nome2,populacao2);

            if(populacao > populacao2){
                printf("Resultado : A carta %s venceu\n", codigo);
            }else if(populacao < populacao2){
                printf("Resultado : A carta %s venceu\n", codigo2);
            }else{  
                printf("Resultado : Empate\n");
            }
        break;

        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1: %s - %d\n", nome,area);
            printf("Carta 2: %s - %d\n", nome2,area2);
            if(area > area2){
                printf("Resultado : A carta %s venceu\n", codigo);
            }else if(area < area2){
                printf("Resultado : A carta %s venceu\n", codigo2);
            }else{  
                printf("Resultado : Empate\n");
            }
        break;

        case 3:    
            printf("Atributo: PIB\n"); 
            printf("Carta 1: %s - %.2f\n", nome,pib);
            printf("Carta 2: %s - %.2f\n", nome2,pib2); 

            if(pib > pib2){
                printf("PIB : A carta %s venceu\n", codigo);
            }else if(pib < pib2){
                printf("PIB : A carta %s venceu\n", codigo2);
            }else{
                printf("PIB : Empate\n");
            }
        break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1: %s - %d\n", nome,npontosturisticos);
            printf("Carta 2: %s - %d\n", nome2,npontosturisticos2);

            if(npontosturisticos > npontosturisticos2){
                printf("Pontos Turísticos : A carta %s venceu\n", codigo);
            }else if(npontosturisticos < npontosturisticos2){
                printf("Pontos Turísticos : A carta %s venceu\n", codigo2);
            }else{
                printf("Pontos Turísticos : Empate\n");
            }
        break;

        case 5:
            printf("Atributo: Densidade populacional\n");
            printf("Carta 1: %s - %d\n", nome,densidade);
            printf("Carta 2: %s - %d\n", nome2,densidade2);


            if((populacao/area) < (populacao2/area2)){
                printf("Densidade populacional : A carta %s venceu\n", codigo);
            }else if((populacao/area) > (populacao2/area2)){
                printf("Densidade populacional : A carta %s venceu\n", codigo2);
            }else{
                printf("Densidade populacional : Empate\n");
            }
        break;

        case 6:
            printf("Atributo: PIB per capita\n");
            printf("Carta 1: %s - %d\n", nome,pibCapita);
            printf("Carta 2: %s - %d\n", nome2,pibCapita2);

            if((pib/populacao) > (pib2/populacao2)){
                printf("PIB per capita : A carta %s venceu\n", codigo);
            }else if((pib/populacao) < (pib2/populacao2)){
                printf("PIB per capita : A carta %s venceu\n", codigo2);
            }else{
                printf("PIB per capita : Empate\n");
            }
        break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("Carta 1: %s - %d\n", nome,superPoder);
            printf("Carta 2: %s - %d\n", nome2,superPoder2);

            if(superPoder > superPoder2){
                printf("Super Poder : A carta %s venceu\n", codigo);
            }else if(superPoder < superPoder2){
                printf("Super Poder : A carta %s venceu\n", codigo2);
            }else{
                printf("Super Poder : Empate\n");
            }
        break;

        default:
            printf("Opção inválida no segundo atributo.\n");
    break;
    }
    return(0);


}



