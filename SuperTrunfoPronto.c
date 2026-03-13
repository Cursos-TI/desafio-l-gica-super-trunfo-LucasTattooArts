#include <stdio.h>
#include <string.h>

int main()
{
    // Determinação das variáveis
    char Estado1, Estado2;
    char Codigo1[4], Codigo2[4];
    char Nome1[50], Nome2[50];
    float Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PtTuristico1, PtTuristico2;
    float DensidadePop1, DensidadePop2;
    int opcao, opcao1, opcao2;
    int resultado1, resultado2;

    // Cadastro de Cartas:

    // Carta 1:
    Estado1 = 'A';
    strcpy(Codigo1, "A01");
    strcpy(Nome1, "São Paulo");
    Populacao1 = 11.9;
    Area1 = 1521;
    PIB1 = 999;
    PtTuristico1 = 100;
    DensidadePop1 = (Populacao1 * 1e6) / Area1;

    // Carta 2:
    Estado2 = 'B';
    strcpy(Codigo2, "B02");
    strcpy(Nome2, "Rio de Janeiro");
    Populacao2 = 6.7;
    Area2 = 1200;
    PIB2 = 359;
    PtTuristico2 = 100;
    DensidadePop2 = (Populacao2 * 1e6) / Area2;

    // Menu Inicial:
    printf("Super Trunfo - Cidades \n");
    printf("Escolha uma carta:\n");
    printf("(1) Para escolher a Carta 1 - %s \n", Nome1);
    printf("(2) Para escolher a Carta 2 - %s \n", Nome2);
    printf("Qual carta você escolhe? ");
    scanf("%d", &opcao);
    printf("\n");
    
    switch (opcao)
    {
    case 1:
        // Apresentação de dados da Carta 1:
        printf("Você escolheu a CARTA 1 \n");
        printf("Esses são seus atributos: \n");
        printf("Estado: %c \n", Estado1);
        printf("Código: %s \n", Codigo1);
        printf("Nome da Cidade: %s\n", Nome1);
        printf("População: %.2f milhões de habitantes \n", Populacao1);
        printf("Área: %.2f km² \n", Area1);
        printf("PIB: R$%.2f bilhões \n", PIB1);
        printf("Número de Pontos Turísticos: %d \n", PtTuristico1);
        printf("Densidade Populacional: %.2f hab/km² \n", DensidadePop1);
        printf("\n");

        // Menu de escolhas Carta 1 - Atributo 1:
        printf("Você precisa escolher dois atributos para comparar!\n");
        printf("Escolha o primeiro atributo:\n");
        printf("1 - População \n");
        printf("2 - Área \n");
        printf("3 - PIB \n");
        printf("4 - Número de Pontos Turísticos \n");
        printf("5 - Densidade Demográfica \n");
        printf("Qual opção você quer? ");
        scanf("%d", &opcao1);
        printf("\n");

        // Aplicação do Atributo 1:
        switch (opcao1)
        {
        case 1:
            printf("Atributo POPULAÇÃO escolhido!\n");
            if (Populacao1 > Populacao2)
            {
                resultado1 = 1;
            }
            else if (Populacao1 == Populacao2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        case 2:
            printf("Atributo ÁREA escolhido!\n");
            if (Area1 > Area2)
            {
                resultado1 = 1;
            }
            else if (Area1 == Area2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        case 3:
            printf("Atributo PIB escolhido!");
            if (PIB1 > PIB2)
            {
                resultado1 = 1;
            }
            else if (PIB1 == PIB2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        case 4:
            printf("Atributo PONTOS TURÍSTICOS escolhido!\n");
            if (PtTuristico1 > PtTuristico2)
            {
                resultado1 = 1;
            }
            else if (PtTuristico1 == PtTuristico2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        case 5:
            printf("Atributo DENSIDADE POPULACIONAL escolhido!\n");
            if (DensidadePop1 < DensidadePop2)
            {
                resultado1 = 1;
            }
            else if (DensidadePop1 == DensidadePop2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        default:
            printf("Opção invalida! Reinicie o jogo!");
            break;
        }

        // Menu de escolhas Carta 1 - Atributo 2:
        printf("Escolha o seu segundo atributo!\n");
        printf("1 - População \n");
        printf("2 - Área \n");
        printf("3 - PIB \n");
        printf("4 - Número de Pontos Turísticos \n");
        printf("5 - Densidade Demográfica \n");
        printf("Qual opção você quer? ");
        scanf("%d", &opcao2);
        printf("\n");

        // Verificação dos Atributos:
        if (opcao1 == opcao2)
        {
            printf("Você escolheu dois atributos iguais! Reinicie o jogo!");
        }
        else
        {
            // Aplicação do atributo 2:
            switch (opcao2)
            {
            case 1:
                printf("Atributo POPULAÇÃO escolhido!\n");
                if (Populacao1 > Populacao2)
                {
                    resultado1 += 1;
                }
                else if (Populacao1 == Populacao2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            case 2:
                printf("Atributo ÁREA escolhido!\n");
                if (Area1 > Area2)
                {
                    resultado1 += 1;
                }
                else if (Area1 == Area2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            case 3:
                printf("Atributo PIB escolhido!");
                if (PIB1 > PIB2)
                {
                    resultado1 += 1;
                }
                else if (PIB1 == PIB2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            case 4:
                printf("Atributo PONTOS TURÍSTICOS escolhido!\n");
                if (PtTuristico1 > PtTuristico2)
                {
                    resultado1 += 1;
                }
                else if (PtTuristico1 == PtTuristico2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            case 5:
                printf("Atributo DENSIDADE POPULACIONAL escolhido!\n");
                if (DensidadePop1 < DensidadePop2)
                {
                    resultado1 += 1;
                }
                else if (DensidadePop1 == DensidadePop2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            default:
                printf("Opção invalida! Reinicie o jogo!");
                break;
            }
            printf("\n");

    //Impressão dos Resultados e Pontuação:
            if (resultado1 > resultado2)
            {
                printf("Parabéns você ganhou a disputa! \n");
            }
            else if (resultado1 < resultado2)
            {
                printf("Que pena! Você perdeu a disputa!\n");
            }
            else
            {
                printf("A disputa terminou em empate!\n");
            }
            printf("Sua pontuação: %d \n", resultado1);
            printf("Pontuação do Adversário: %d \n", resultado2);
        }

        break;

    case 2:

    //Apresentação de dados da Carta 2:
        printf("Você escolheu a CARTA 2 \n");
        printf("Esses são seus atributos: \n");
        printf("Estado: %c \n", Estado2);
        printf("Código: %s \n", Codigo2);
        printf("Nome da Cidade: %s\n", Nome2);
        printf("População: %.2f milhões de habitantes \n", Populacao2);
        printf("Área: %.2f km² \n", Area2);
        printf("PIB: R$%.2f bilhões \n", PIB2);
        printf("Número de Pontos Turísticos: %d \n", PtTuristico2);
        printf("Densidade Populacional: %.2f hab/km² \n", DensidadePop2);
        printf("\n");

    //Menu de atributos Carta 1 - Atributo 1:
        printf("Você precisa escolher dois atributos para comparar!\n");
        printf("Escolha o primeiro atributo:\n");
        printf("1 - População \n");
        printf("2 - Área \n");
        printf("3 - PIB \n");
        printf("4 - Número de Pontos Turísticos \n");
        printf("5 - Densidade Demográfica \n");
        printf("Qual opção você quer? ");
        scanf("%d", &opcao1);
        printf("\n");

    //Aplicação do Atributo 1: 
        switch (opcao1)
        {
        case 1:
            printf("Atributo POPULAÇÃO escolhido!\n");
            if (Populacao1 > Populacao2)
            {
                resultado1 = 1;
            }
            else if (Populacao1 == Populacao2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        case 2:
            printf("Atributo ÁREA escolhido!\n");
            if (Area1 > Area2)
            {
                resultado1 = 1;
            }
            else if (Area1 == Area2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        case 3:
            printf("Atributo PIB escolhido!");
            if (PIB1 > PIB2)
            {
                resultado1 = 1;
            }
            else if (PIB1 == PIB2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        case 4:
            printf("Atributo PONTOS TURÍSTICOS escolhido!\n");
            if (PtTuristico1 > PtTuristico2)
            {
                resultado1 = 1;
            }
            else if (PtTuristico1 == PtTuristico2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        case 5:
            printf("Atributo DENSIDADE POPULACIONAL escolhido!\n");
            if (DensidadePop1 < DensidadePop2)
            {
                resultado1 = 1;
            }
            else if (DensidadePop1 == DensidadePop2)
            {
                resultado1 = 1;
                resultado2 = 1;
            }
            else
            {
                resultado2 = 1;
            }
            break;
        default:
            printf("Opção invalida! Reinicie o jogo!");
            break;
        }

    //Menu de Atributos Carta 2 - Atributo 2: 
        printf("Escolha o seu segundo atributo!\n");
        printf("1 - População \n");
        printf("2 - Área \n");
        printf("3 - PIB \n");
        printf("4 - Número de Pontos Turísticos \n");
        printf("5 - Densidade Demográfica \n");
        printf("Qual opção você quer? ");
        scanf("%d", &opcao2);
        printf("\n");

    //Verificação de atributos:
        if (opcao1 == opcao2)
        {
            printf("Você escolheu dois atributos iguais! Reinicie o jogo!");
        }
        else
        {
        
            //Verificação de Atributos 2: 
            switch (opcao2)
            {
            case 1:
                printf("Atributo POPULAÇÃO escolhido!\n");
                if (Populacao1 > Populacao2)
                {
                    resultado1 += 1;
                }
                else if (Populacao1 == Populacao2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            case 2:
                printf("Atributo ÁREA escolhido!\n");
                if (Area1 > Area2)
                {
                    resultado1 += 1;
                }
                else if (Area1 == Area2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            case 3:
                printf("Atributo PIB escolhido!");
                if (PIB1 > PIB2)
                {
                    resultado1 += 1;
                }
                else if (PIB1 == PIB2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            case 4:
                printf("Atributo PONTOS TURÍSTICOS escolhido!\n");
                if (PtTuristico1 > PtTuristico2)
                {
                    resultado1 += 1;
                }
                else if (PtTuristico1 == PtTuristico2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            case 5:
                printf("Atributo DENSIDADE POPULACIONAL escolhido!\n");
                if (DensidadePop1 < DensidadePop2)
                {
                    resultado1 += 1;
                }
                else if (DensidadePop1 == DensidadePop2)
                {
                    resultado1 += 1;
                    resultado2 += 1;
                }
                else
                {
                    resultado2 += 1;
                }
                break;
            default:
                printf("Opção invalida! Reinicie o jogo!");
                break;
            }
            printf("\n");

    //Impressão de Resultados 2: 
            if (resultado1 < resultado2)
            {
                printf("Parabéns você ganhou a disputa! \n");
            }
            else if (resultado1 > resultado2)
            {
                printf("Que pena! Você perdeu a disputa!\n");
            }
            else
            {
                printf("A disputa terminou em empate!\n");
            }
            printf("Sua pontuação: %d \n", resultado2);
            printf("Pontuação do Adversário: %d \n", resultado1);
        }
        break;

    default:
        printf("Opção inválida! Por favor, reinicie o jogo!");
        break;
    }

}