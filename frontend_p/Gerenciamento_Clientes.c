#include "frontend.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu_gerenciamento_clientes(head_c, head_p){
    int opcao=-1;
    while (opcao<1 || opcao>4){
        printf ("- - - - - - Gerenciamento de Clientes - - - - - -\n\n");
        printf ("1- Cadastrar cliente.\n");
        printf ("2- Listar clientes.\n");
        printf ("3- Buscar cliente pelo CPF.\n");
        printf ("4- Editar dados de um cliente.\n");
        printf ("5- Remover cliente.\n");
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
    if (opcao==1){menu_cadastro_cliente(head_c, head_p);};
    if (opcao==2){listar_cliente(head_c, head_p);};
    if (opcao==3){menu_buscar_cliente(head_c, head_p);};
    if (opcao==4){menu_editar_cliente(head_c, head_p);};
    if (opcao==5){menu_remover_cliente(head_c, head_p);};
}


void menu_cadastrar_turma(turma *lista_turmas, short *qtd_turmas){
    srand(time(NULL));
    printf("- - - - - - Cadastro de Turma - - - - - -\n\n");
    printf("Digite o nome da turma:\n");
    char nome[20];
    scanf("%[^\n]", nome);
    int codigo = (rand()%9000)+1000;   

    cadastrar_turma(lista_turmas, qtd_turmas, nome, codigo);
    menu_principal(lista_turmas,qtd_turmas);
}

void menu_cadastrar_aluno(turma *lista_turmas, short *qtd_turmas){
    printf("- - - - - - Cadastro de Aluno - - - - - -\n\n");
    printf("Digite o nome do aluno:\n");
    char nome[100];
    scanf("%[^\n]", nome);
    printf("Digite o CPF do aluno:\n");
    char cpf[12];
    scanf("%[^\n]", cpf); 
    cadastrar_aluno(lista_turmas, qtd_turmas, nome, cpf);
    menu_principal(lista_turmas,qtd_turmas);    
}

void menu_buscar_aluno(turma *lista_turmas, short *qtd_turmas){
    printf("- - - - - - Busca por Aluno - - - - - -\n\n");
    printf("Digite o codigo da turma:\n");
    int id;
    scanf("%d", &id);
    printf("Digite o cpf do aluno:\n");
    char cpf[20];
    scanf("%[^\n]", cpf);
    turma *turma_aluno = buscar_turma(lista_turmas, qtd_turmas, id);
    aluno *aluno_buscado = buscar_aluno(turma_aluno, cpf);
    mostrar_aluno(aluno_buscado);
    menu_principal(lista_turmas,qtd_turmas);    
}

