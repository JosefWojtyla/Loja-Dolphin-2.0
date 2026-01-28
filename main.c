#include "frontend.h"
#include "backend.h"
#include "persistencia.h"

int main(){
    cliente *head_c;
    produto *head_p;
    menu_principal(head_c, head_p);
    limpar_memoria();
    return 0;
}