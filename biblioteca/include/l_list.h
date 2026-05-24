#ifndef L_LIST_H
#define L_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro L_livro;

typedef struct _lista Lista;

L_livro* adicionar_livro(char* ISBN, char* titulo, char* autor_nome, int ano_publicacao);

Lista* criar_lista(); 

void adicionar_no(Lista* lista, char* ISBN, char* titulo, char* autor_nome, int ano_publicacao);

void dados_livro(L_livro* livro);

void listar_livros(Lista* lista);

L_livro* busca_livro(Lista* lista, char* ISBN);

#endif
