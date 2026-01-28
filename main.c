#include "backend_p/backend.h"
#include "persistencia_p/persistencia.h"
#include "frontend_p/frontend.h"

int main(){
    cliente *head_c;
    produto *head_p;
    menu_principal(head_c, head_p);
    limpar_memoria();
    return 0;
}