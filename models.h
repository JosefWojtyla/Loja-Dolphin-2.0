#pragma once
#include "models.h"

typedef struct Carrinho {
    struct Cliente *cliente;
    struct Produto *prox;
} carrinho;

typedef struct Cliente {
    char nome[50];
    char cpf[12];
    char telefone[12];
    carrinho *carrinho;
} cliente;

typedef struct Produto {
    char id[20];
    char nome[50];
    double preco;
    struct Produto *prox;
} produto;


void cadastrar_cliente(cliente *head_c, char *nome, char *cpf, char *telefone);
void cadastrar_produto(produto *head_p, char *nome, char *id, double preco);

void listar_clientes(cliente *head_c);
void listar_produtos (produto *head_p);


cliente *buscar_cliente(cliente *head_c, char *cpf);
produto *buscar_produto(produto *head_p, char *id);

void *editar_cliente(cliente *head_c, char *cpf);
void *editar_produto(produto *head_p, char *id);

void remover_clientes(cliente *head_c, char *cpf);
void remover_produtos (produto *head_p, char *id);



