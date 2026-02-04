#include "frontend_p/frontend.h"

int main(){
    cliente *head_c = NULL;
    produto *head_p = NULL;

    menu_principal(&head_c, &head_p);

    limpar_memoria(&head_c, &head_p);
    return 0;
}