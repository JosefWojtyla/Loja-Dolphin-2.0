#pragma once
#include "backend.h"
#include "persistencia.h"

void menu_modo_compra(cliente *head_c, produto *head_p);
void menu_adicionar_carrinho();
void menu_retirar_carrinho();
void menu_mostrar_carrinho();

void menu_gerenciamento_produtos(cliente *head_c, produto *head_p);
void menu_cadastro_produto(produto *head_p);
void menu_buscar_produto(produto *head_p, char *id);
void menu_remover_produto(produto *head_p, char *id);
void menu_editar_produto(produto *head_p, char *id);

void menu_gerenciamento_clientes(cliente *head_c, produto *head_p);
void menu_cadastro_cliente(cliente *head_c);
void menu_buscar_cliente(cliente *head_c, char *cpf);
void menu_remover_cliente(cliente *head_c, char *cpf);
void menu_editar_cliente(cliente *head_c, char *cpf);

void menu_principal(cliente *head_c, produto *head_p);

