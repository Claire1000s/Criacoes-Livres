/* Leticia da Silva Ramos Ferreira
   RA: 0040961323026 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()

{
    char opcao;
    int lin, esp, bolinha, linhas; /* lin: Representa o n�mero de linhas na pir�mide.
                                      esp: Representa o n�mero de espa�os antes das bolinhas da esquerda para a direita para
                                      alinh�-las na pir�mide.
                                      bolinha: Representa as bolinhas que ser�o geradas na pir�mide.
                                      linhas: Representa o n�mero de linhas digitado pelo usu�rio. */

    menu:
    system("color 0A"); // Uma corzinha s� pra dar um tchan -q
    printf("\t\t   :::: GERADOR INUTIL DE PIRAMIDE DE BOLINHAS ::::\n\n\n"); // T�tulo sarc�stico (ou n�o). Leve na esportiva =D.
    printf("a) Gerar piramide\nb) Sair\n");
    opcao = getch();
    fflush(stdin); // Limpar o buffer do teclado.
    switch(opcao) // Menu de op��es.
    {
        a:
        case 'a': system("cls");
        printf("\t\t   :::: GERADOR INUTIL DE PIRAMIDE DE BOLINHAS ::::\n\n\n");
        printf("Por favor, digite a quantidade de linhas da sua arvore: ");
        scanf("%d", &linhas);
        fflush(stdin); // Limpar o buffer do teclado.

        /* Testa se o valor digitado � igual a zero ou � um valor negativo antes de prosseguir. Caso seja, ir� exibir uma
        mensagem de erro na tela, e, ao pressionar uma tecla, a tela ser� limpa e voltar� ao in�cio. */
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
            // Isso ser� testado n vezes, sendo n o n�mero de linhas digitado pelo usu�rio.
            for(esp = linhas; esp >= lin; esp --) //  Gerador de espa�os para centralizar as bolinhas e formar a pir�mide.
            {
                printf(" ");
            }
            for(bolinha = 1; bolinha <= lin + 1 - 1; bolinha++) // Gerador de bolinhas em cada linha da pir�mide.
            {
                printf("O ");
            }
            printf("\n"); // Linha da pir�mide.
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
