#include <stdio.h>

int main(){

//Determinação das variáveis
    char Estado1, Estado2;
    char Codigo1 [4], Codigo2 [4];
    char Nome1[50], Nome2[50];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PtTuristico1, PtTuristico2;

//Variáveis nível aventureiro
    float DensidadePop1, DensidadePop2;
    float PIBPerCapita1, PIBPerCapita2;

//Variável nível mestre
    float SuperPoder1, SuperPoder2;

//Entrada de Dados Carta 1
    printf("Dados da Carta 1 \n");
    printf("Digite uma letra de A a H (representando um dos oito estados): \n");
    scanf ("%c", &Estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf ("%s", Codigo1);
    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(Nome1, 50, stdin);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &Populacao1);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &Area1);
    printf("Digite o Produto Interno Bruto (PIB) da Cidade em bilhões de reais: \n");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &PtTuristico1);
    getchar();
    printf ("\n");

//Cálculos Nível Aventureiro
    DensidadePop1 = Populacao1 / Area1;
    PIBPerCapita1 = (PIB1 * 1e9f) / Populacao1;

//Cálculos Nível Mestre
    SuperPoder1 = (float) Populacao1 + Area1 + PIB1 + PtTuristico1 + PIBPerCapita1 + (1/DensidadePop1);

//Saida de Dados da Carta 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Nome da Cidade: %s", Nome1);
    printf("População: %lu \n", Populacao1);
   printf("Área: %.2f km² \n", Area1);
    printf("PIB: R$%.2f bilhões \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", PtTuristico1);
//Saída de Dados Nível Aventureiro
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePop1);
    printf("PIB per Capita: R$%.2f \n", PIBPerCapita1);
//Saída de Dados Nível Aventureiro  
    printf("Super Poder: %.2f pontos \n", SuperPoder1);
    printf("\n");

//Entrada de Dados Carta 2
    printf("Dados da Carta 2 \n");
    printf("Digite uma letra de A a H (representando um dos oito estados): \n");
    scanf ("%c", &Estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf ("%s", Codigo2);
    getchar();
    printf("Digite o nome da cidade: \n");
    fgets(Nome2, 50, stdin);
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &Populacao2);
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &Area2);
    printf("Digite o Produto Interno Bruto (PIB) da Cidade em bilhões de reais: \n");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &PtTuristico2);
    getchar();
    printf ("\n");

//Cálculos Nível Aventureiro
    DensidadePop2 = Populacao2 / Area2;
    PIBPerCapita2 = (PIB2 * 1e9f) / Populacao2;

//Cálculos Nível Mestre
    SuperPoder2 = (float) Populacao2 + Area2 + PIB2 + PtTuristico2 + PIBPerCapita2 + (1/DensidadePop2);

//Saida de Dados da Carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da Cidade: %s", Nome2);
    printf("População: %lu \n", Populacao2);
    printf("Área: %.2f km² \n", Area2);
    printf("PIB: R$%.2f bilhões \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", PtTuristico2);
//Saída de Dados Nível Aventureiro
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePop2);
    printf("PIB per Capita: R$%.2f \n", PIBPerCapita2);
//Saída de Dados Nível Mestre
    printf("Super Poder: %.2f pontos \n", SuperPoder2);
    printf ("\n");

//Comparação de Cartas
 /* printf ("Comparação de Cartas:\n");
    printf ("Carta 1 vence para o valor (1) e Carta 2 vence para o valor (0) \n");
    printf ("População: (%d) \n", Populacao1 > Populacao2);
    printf ("Área: (%d) \n", Area1 > Area2);
    printf ("PIB: (%d) \n", PIB1 > PIB2);
    printf ("Pontos Turísticos: (%d) \n", PtTuristico1 > PtTuristico2);
    printf ("Densidade Populacional: (%d) \n", DensidadePop1 < DensidadePop2);
    printf ("PIB per Capita (%d) \n", PIBPerCapita1 > PIBPerCapita2);
    printf ("Super Poder: (%d) \n", SuperPoder1 > SuperPoder2);*/

//Menu Interarivo
    int opcao;
    printf("Menu Principal\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - Nome do Estado (Apenas consulta)\n");
    printf("2 - População \n");
    printf("3 - Área \n");
    printf("4 - PIB \n");
    printf("5 - Número de Pontos Turísticos \n");
    printf("6 - Densidade Demográfica \n");
    printf("Qual opção você quer?");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao){
        case 1:
            printf("Consulta Nome dos Estados \n");
            printf("Carta %s - %s \n", Codigo1, Nome1);
            printf("Carta %s - %s \n", Codigo2, Nome2);
            break; 
        case 2:
            printf("Atributo: POPULAÇÃO\n");
            printf("Carta %s - %s: %lu habitantes\n", Codigo1, Nome1, Populacao1);
            printf("Carta %s - %s: %lu habitantes\n", Codigo2, Nome2, Populacao2);
             if (Populacao1>Populacao2){
                printf("RESULTADO: A carta %s venceu \n", Codigo1);
            }else if (Populacao1 == Populacao2){
                printf("RESULTADO: EMPATE \n");
            }else{
                printf("RESULTADO: A carta %s venceu \n", Codigo2);
            }
            break;
        case 3:
            printf("Atributo: ÁREA\n");
            printf("Carta %s - %s: %.2f km²\n", Codigo1, Nome1, Area1);
            printf("Carta %s - %s: %.2f km²\n", Codigo2, Nome2, Area2);
            if (Area1>Area2){
                printf("RESULTADO: A carta %s venceu \n", Codigo1);
            }else if (Area1 == Area2){
                printf("RESULTADO: EMPATE \n");
            }else{
                printf("RESULTADO: A carta %s venceu \n", Codigo2);
            }
            break;
        case 4:
            printf("Atributo: PIB\n");
            printf("Carta %s - %s: R$ %.2f bilhões\n", Codigo1, Nome1, PIB1);
            printf("Carta %s - %s: R$ %.2f bilhões\n", Codigo2, Nome2, PIB2);
            if (PIB1>PIB2){
                printf("RESULTADO: A carta %s venceu \n", Codigo1);
            }else if (PIB1 == PIB2){
                printf("RESULTADO: EMPATE \n");
            }else{
                printf("RESULTADO: A carta %s venceu \n", Codigo2);
            }
            break;
        case 5:
            printf("Atributo: PONTOS TURÍSTICOS\n");
            printf("Carta %s - %s: %d pontos turísticos\n", Codigo1, Nome1, PtTuristico1);
            printf("Carta %s - %s: %d pontos turísticos\n", Codigo2, Nome2, PtTuristico2);
            if (PtTuristico1>PtTuristico2){
                printf("RESULTADO: A carta %s venceu \n", Codigo1);
            }else if (PtTuristico1 == PtTuristico2){
                printf("RESULTADO: EMPATE \n");
            }else{
                printf("RESULTADO: A carta %s venceu \n", Codigo2);
            }
            break;
        case 6:
            printf("Atributo: DENSIDADE POPULACIONAL\n");
            printf("Carta %s - %s: %.2f hab/km² \n", Codigo1, Nome1, DensidadePop1);
            printf("Carta %s - %s: %.2f hab/km² \n", Codigo2, Nome2, DensidadePop2);
            if (DensidadePop1<DensidadePop2){
                printf("RESULTADO: A carta %s venceu \n", Codigo1);
            }else if (DensidadePop1 == DensidadePop2){
                printf("RESULTADO: EMPATE \n");
            }else{
                printf("RESULTADO: A carta %s venceu \n", Codigo2);
            }
    }
//Comparação de Cartas com If/Else
    /*printf("Comparação de Cartas\n"); 
    printf ("\n");*/
// POPULAÇÃO
   /* printf("Atributo: POPULAÇÃO\n");
    printf("Carta %s - %s: %lu habitantes\n", Codigo1, Nome1, Populacao1);
    printf("Carta %s - %s: %lu habitantes\n", Codigo2, Nome2, Populacao2);
    if (Populacao1>Populacao2){
        printf("RESULTADO: A carta %s venceu \n", Codigo1);
    }else if (Populacao1 == Populacao2){
        printf("RESULTADO: EMPATE \n");
    }else{
        printf("RESULTADO: A carta %s venceu \n", Codigo2);
    }
    printf("\n");
// ÁREA
    printf("Atributo: ÁREA\n");
    printf("Carta %s - %s: %.2f km²\n", Codigo1, Nome1, Area1);
    printf("Carta %s - %s: %.2f km²\n", Codigo2, Nome2, Area2);
    if (Area1>Area2){
        printf("RESULTADO: A carta %s venceu \n", Codigo1);
    }else if (Area1 == Area2){
        printf("RESULTADO: EMPATE \n");
    }else{
        printf("RESULTADO: A carta %s venceu \n", Codigo2);
    }
    printf("\n");
// PIB
    printf("Atributo: PIB\n");
    printf("Carta %s - %s: R$ %.2f bilhões\n", Codigo1, Nome1, PIB1);
    printf("Carta %s - %s: R$ %.2f bilhões\n", Codigo2, Nome2, PIB2);
    if (PIB1>PIB2){
        printf("RESULTADO: A carta %s venceu \n", Codigo1);
    }else if (PIB1 == PIB2){
        printf("RESULTADO: EMPATE \n");
    }else{
        printf("RESULTADO: A carta %s venceu \n", Codigo2);
    }
    printf("\n");
// PONTOS TURÍSTICOS
    printf("Atributo: PONTOS TURÍSTICOS\n");
    printf("Carta %s - %s: %d pontos turísticos\n", Codigo1, Nome1, PtTuristico1);
    printf("Carta %s - %s: %d pontos turísticos\n", Codigo2, Nome2, PtTuristico2);
    if (PtTuristico1>PtTuristico2){
        printf("RESULTADO: A carta %s venceu \n", Codigo1);
    }else if (PtTuristico1 == PtTuristico2){
        printf("RESULTADO: EMPATE \n");
    }else{
        printf("RESULTADO: A carta %s venceu \n", Codigo2);
    }
    printf("\n");
//DENSIDADE POP
    printf("Atributo: DENSIDADE POPULACIONAL\n");
    printf("Carta %s - %s: %.2f hab/km² \n", Codigo1, Nome1, DensidadePop1);
    printf("Carta %s - %s: %.2f hab/km² \n", Codigo2, Nome2, DensidadePop2);
    if (DensidadePop1<DensidadePop2){
        printf("RESULTADO: A carta %s venceu \n", Codigo1);
    }else if (DensidadePop1 == DensidadePop2){
        printf("RESULTADO: EMPATE \n");
    }else{
        printf("RESULTADO: A carta %s venceu \n", Codigo2);
    }
    printf("\n");
//PIB PER CAPITA
    printf("Atributo: PIB PER CAPITA\n");
    printf("Carta %s - %s: R$%.2f \n", Codigo1, Nome1, PIBPerCapita1);
    printf("Carta %s - %s: R$%.2f \n", Codigo2, Nome2, PIBPerCapita2);
    if (PIBPerCapita1>PIBPerCapita2){
        printf("RESULTADO: A carta %s venceu \n", Codigo1);
    }else if (PIBPerCapita1 == PIBPerCapita2){
        printf("RESULTADO: EMPATE \n");
    }else{
        printf("RESULTADO: A carta %s venceu \n", Codigo2);
    }
    printf("\n");
//SUPER PODER
    printf("Atributo: SUPER PODER\n");
    printf("Carta %s - %s: %.2f pontos \n", Codigo1, Nome1, SuperPoder1);
    printf("Carta %s - %s: %.2f pontos \n", Codigo2, Nome2, SuperPoder2);
    if (SuperPoder1>SuperPoder2){
        printf("RESULTADO: A carta %s venceu \n", Codigo1);
    }else if (SuperPoder1 == SuperPoder2){
        printf("RESULTADO: EMPATE \n");
    }else{
        printf("RESULTADO: A carta %s venceu \n", Codigo2);
    }
    printf("\n");*/
    return 0;
}