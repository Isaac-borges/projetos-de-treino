#include "l_list.h"

typedef struct _livro {
    char* ISBN;
    char* titulo;
    char* autor_nome;
    int ano_publicacao;
    
    struct _livro* proximo;
} L_livro;

typedef struct _lista {
    L_livro* inicio;
    L_livro* fim;
} Lista;

L_livro* adicionar_livro(char* ISBN, char* titulo, char* autor_nome, int ano_publicacao)
{
    L_livro* novo_livro = (L_livro*) calloc(1, sizeof(L_livro));
    novo_livro->ISBN = strdup(ISBN);
    novo_livro->titulo = strdup(titulo);
    novo_livro->autor_nome = strdup(autor_nome);
    novo_livro->ano_publicacao = ano_publicacao;

    novo_livro->proximo = NULL;

    return novo_livro; 
}

Lista* criar_lista() 
{
    Lista* L = (Lista*) calloc(1, sizeof(Lista));
    L->inicio = NULL;
    L->fim = NULL;

    return L;
}

int lista_vazia(Lista* lista)
{
    if (lista->inicio == NULL && lista->fim == NULL)
    {
        return 1;
    }

    return 0;
}

void adicionar_no(Lista* lista, char* ISBN, char* titulo, char* autor_nome, int ano_publicacao)
{
    L_livro *N = adicionar_livro(ISBN, titulo, autor_nome, ano_publicacao);

    if (lista_vazia(lista))
    {
        lista->inicio = N;
        lista->fim = N;
    }
    else 
    {
        lista->fim->proximo = N;
        lista->fim = lista->fim->proximo;
    }
}

void listar_livros(Lista* lista)
{   
    if (!lista_vazia(lista))
    {
        L_livro* observador = lista->inicio;
        while (observador != NULL)
        {
            printf("Titulo: %s\nISBN: %s\nAutor(a): %s\nAno de Publicação: %d\n\n", observador->titulo, observador->ISBN, observador->autor_nome, observador->ano_publicacao);
            observador = observador->proximo;
        } 
    } else puts("Lista vazia!");
   
}