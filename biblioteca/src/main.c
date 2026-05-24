#include <stdio.h>
#include <stdlib.h>
#include "l_list.h"

int main(void)
{
    Lista* L = criar_lista();

    adicionar_no(L, "012391231", "Coelho da Pascoa 1", "Isaac", 1234);
    adicionar_no(L, "012391232", "Coelho da Pascoa 2", "Isaac", 1234);
    adicionar_no(L, "012391233", "Coelho da Pascoa 3", "Isaac", 1234);

    listar_livros(L);
    
    return 0;
}

