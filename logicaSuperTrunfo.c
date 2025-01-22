#include <stdio.h>
int calcDensidade(int populacao, float area)
{
    int dens = populacao / (int)area;
    return dens;
}
int calcPib(float pib, int populacao)
{
    int PibPer = (int)pib / populacao;
    return PibPer;
}
int comparar(int comp, int comp1)
{
    int comparacao = comp - comp1;
    return comparacao;
}
int superCard(int item1,int item2,int item3,int item4,int item5,int item6)
{
    long int soma=item1+item2+item3+item4+item5+item6;
    return soma;
}
int main()
{
    int populacao[2], pontosTuristicos[2];
    float area[2], Pib[2];
    char estado[2][3];

    // novo recurso: Definindo o array de strings
    char cidade[2][15], codigo[2][3],*result[2];

    // melhorias no recurso de gravacao de dados de cartas
    for (int i = 0; i <= 1; i++)
    {
        printf("Carta %d\n", i + 1);

        printf("Digite o estado: ");
        scanf("%s", &estado[i]);
        printf("Codigo da carta: ");
        scanf("%s", &codigo[i]);
        printf("Digite a cidade: ");
        scanf("%s", &cidade[i]);
        printf("Seu pib: ");
        scanf("%f", &Pib[i]);
        printf("Sua populaçao: ");
        scanf("%i", &populacao[i]);
        printf("Area: ");
        scanf("%f", &area[i]);
        printf("Pontos turisticos: ");
        scanf("%i", &pontosTuristicos[i]);
    }
    int densP, densP1, pibP, pibP1,supercard,supercard1;
    pibP = calcPib(Pib[0], populacao[0]);
    pibP1 = calcPib(Pib[1], populacao[1]);
    densP = calcDensidade(populacao[0], area[0]);
    densP1 = calcDensidade(populacao[1], area[1]);
    supercard=superCard(densP,area[0],Pib[0],pibP,populacao[0],pontosTuristicos[0]);
    supercard1=superCard(densP1,area[1],Pib[1],pibP1,populacao[1],pontosTuristicos[1]);
    
    if(supercard1<superCard){
        result[0]="venceu";
        result[1]="perdeu";
    }else{
        result[1]="venceu";
        result[0]="perdeu";
    }
    printf("\n                                  Dados das cartas\n\n");

    printf("                 Carta 1                                          Carta 2\n"); // identificador de carta ajustado

    printf(" ___________________________________________    ___________________________________________\n");

    printf("|     estado       |%-24s|  |     estado       |%-24s|\n", estado[0], estado[1]);

    printf("| codigo da carta  |%s%-23s|  | codigo da carta  |%s%-23s|\n", estado, codigo, estado[1], codigo[1]);

    printf("|     cidade       |%-24s|  |     cidade       |%-24s|\n", cidade[0], cidade[1]);

    printf("|      area        |%-21.2f%s|  |      area        |%-21.2f%s|\n", area[0], "km²", area[1], "km²");

    printf("|       pib        |%-23.2f%s|  |       pib        |%-23.2f%s|\n", Pib[0], "$", Pib[1], "$");

    printf("|  pib per capita  |%-23i%s|  |  pib per capita  |%-23i%s|\n", pibP, "$", pibP, "$");

    printf("|    populaçao     |%-24i|  |    populaçao     |%-24i|\n", populacao[0], populacao[1]);

    printf("|dens. populacional|%-17i%s|  |dens. populacional|%-17i%s|\n", densP, "hab/km²", densP1, "hab/km²");

    printf("| pontos turisticos|%-24i|  | pontos turisticos|%-24i|\n", pontosTuristicos[0], pontosTuristicos[1]);

    printf("|___________________________________________|  |___________________________________________|\n");

    printf("\n                                  Comparar as cartas\n\n");

    printf("                 Carta 1                                          Carta 2\n"); // identificador de carta ajustado
    
    printf(" ___________________________________________                ___________________________________________\n");

    printf("|     estado       |%-24s|              |     estado       |%-24s|\n", estado[0], estado[1]);

    printf("| codigo da carta  |%s%-23s|              | codigo da carta  |%s%-23s|\n", estado, codigo, estado[1], codigo[1]);

    printf("|     cidade       |%-24s|              |     cidade       |%-24s|\n", cidade[0], cidade[1]);

    printf("|      area        |%-21.2f%s| %-12i |      area        |%-21.2f%s|%-12i\n", area[0], "km²", comparar(area[0], area[1]), area[1], "km²", comparar(area[1], area[0]));

    printf("|       pib        |%-23.2f%s| %-12i |       pib        |%-23.2f%s|%-12i\n", Pib[0], "$", comparar(Pib[0], Pib[1]), Pib[1], "$", comparar(Pib[1], Pib[0]));

    printf("|  pib per capita  |%-23i%s| %-12i |  pib per capita  |%-23i%s|%-12i\n", pibP, "$", comparar(pibP, pibP1), pibP1, "$", comparar(pibP1, pibP));

    printf("|    populaçao     |%-24i| %-12i |    populaçao     |%-24i|%-12i\n", populacao[0], comparar(populacao[0], populacao[1]), populacao[1], comparar(populacao[1], populacao[0]));

    printf("|dens. populacional|%-17i%s| %-12i |dens. populacional|%-17i%s|%-12i\n", densP, "hab/km²", comparar(densP, densP1), densP1, "hab/km²", comparar(densP1, densP));

    printf("| pontos turisticos|%-24i| %-12i | pontos turisticos|%-24i|%-12i\n", pontosTuristicos[0], comparar(pontosTuristicos[0], pontosTuristicos[1]), pontosTuristicos[1],comparar(pontosTuristicos[1], pontosTuristicos[0]));
    
    printf("|       super      |%-24i| %-12i |       super      |%-24i|%-12i\n",supercard,comparar(supercard,supercard1), supercard1,comparar(supercard1,supercard));

    printf("|___________________________________________|              |___________________________________________|\n");
    printf("                Carta 1 %s                                                      Carta 2 %s              \n",result[0],result[1]);
} 