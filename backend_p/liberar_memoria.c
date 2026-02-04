#include "backend.h"
void free_carrinho(carrinho *carrinho) {
    if (carrinho == NULL){
        return;
    }
    itemcarrinho *atual = carrinho->itens; 
    
    while (atual != NULL) {
        itemcarrinho *temp = atual;
        atual = atual->prox;
        free(temp); 
    }

    free(carrinho); 
}

void limpar_memoria() {
    return;
    // código que dá free nas listas
}