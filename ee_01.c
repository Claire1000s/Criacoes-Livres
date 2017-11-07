/* Leticia da Silva Ramos Ferreira
   RA: 0040961323026 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()

{
    char opcao;
    int lin, esp, bolinha, linhas; /* lin: Representa o número de linhas na pirâmide.
                                      esp: Representa o número de espaços antes das bolinhas da esquerda para a direita para
                                      alinhá-las na pirâmide.
                                      bolinha: Representa as bolinhas que serão geradas na pirâmide.
                                      linhas: Representa o número de linhas digitado pelo usuário. */

    menu:
    system("color 0A"); // Uma corzinha só pra dar um tchan -q
    printf("\t\t   :::: GERADOR INUTIL DE PIRAMIDE DE BOLINHAS ::::\n\n\n"); // Título sarcástico (ou não). Leve na esportiva =D.
    printf("a) Gerar piramide\nb) Sair\n");
    opcao = getch();
    fflush(stdin); // Limpar o buffer do teclado.
    switch(opcao) // Menu de opções.
    {
        a:
        case 'a': system("cls");
        printf("\t\t   :::: GERADOR INUTIL DE PIRAMIDE DE BOLINHAS ::::\n\n\n");
        printf("Por favor, digite a quantidade de linhas da sua arvore: ");
        scanf("%d", &linhas);
        fflush(stdin); // Limpar o buffer do teclado.

        /* Testa se o valor digitado é igual a zero ou é um valor negativo antes de prosseguir. Caso seja, irá exibir uma
        mensagem de erro na tela, e, ao pressionar uma tecla, a tela será limpa e voltará ao início. */
        if(linhas <= 0)
        {
            system("cls");
            printf("\t\t   :::: GERADOR INUTIL DE PIRAMIDE DE BOLINHAS ::::\n\n\n");
            printf("Valor incorreto! Escolha um valor maior que zero.\n\n");
            system("pause");
            system("cls");
            goto a;
        }
        printf("\n\n");
        for(lin = 1; lin <= linhas; lin++)
        {
            // Isso será testado n vezes, sendo n o número de linhas digitado pelo usuário.
            for(esp = linhas; esp >= lin; esp --) //  Gerador de espaços para centralizar as bolinhas e formar a pirâmide.
            {
                printf(" ");
            }
            for(bolinha = 1; bolinha <= lin + 1 - 1; bolinha++) // Gerador de bolinhas em cada linha da pirâmide.
            {
                printf("O ");
            }
            printf("\n"); // Linha da pirâmide.
        }
        printf("\n\n");
        system("pause");
        system("cls");
        goto menu;
        break;

        case 'b': exit(0);
        break;

        default: system("cls");
        printf("\t\t   :::: GERADOR INUTIL DE PIRAMIDE DE BOLINHAS ::::\n\n\n");
        printf("Opcao invalida!\n");
        system("pause");
        system("cls");
        goto menu;
        break;
    }
    return 0;
}
