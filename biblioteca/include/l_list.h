#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro L_livro;

typedef struct _lista Lista;

L_livro* adicionar_livro(char* ISBN, char* titulo, char* autor_nome, int ano_publicacao);

Lista* criar_lista(); 

void adicionar_no(Lista* lista, char* ISBN, char* titulo, char* autor_nome, int ano_publicacao);

void listar_livros(Lista* lista);
