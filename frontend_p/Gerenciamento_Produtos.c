#include "frontend.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_gerenciamento_produtos(head_c, head_p){
    int opcao=-1;
    while (opcao<1 || opcao>4){
        printf ("- - - - - - Gerenciamento de Produtos - - - - - -\n\n");
        printf ("1- Cadastrar produto.\n");
        printf ("2- Listar produtos.\n");
        printf ("3- Buscar produto pelo codigo unico.\n");
        printf ("4- Editar dados de um produto.\n");
        printf ("5- Remover produto.\n");
        printf ("6- Voltar ao menu principal.\n");
        printf("Digite a opcao desejada:\n");
        scanf(" %d\n", &opcao);
        if (opcao==6){
            menu_principal(head_c, head_p);
        }
        if (opcao<1 || opcao>6){
            system("cls");
            printf("\033[4;31mOPCAO INVALIDA. DIGITE NOVAMENTE.\033[0m\n\n\n");
        }
    }
    system("cls");
    if (opcao==1){menu_cadastro_produto(head_c, head_p);};
    if (opcao==2){listar_produto(head_c, head_p);};
    if (opcao==3){menu_buscar_produto(head_c, head_p);};
    if (opcao==4){menu_editar_produto(head_c, head_p);};
    if (opcao==5){menu_remover_produto(head_c, head_p);};
}

