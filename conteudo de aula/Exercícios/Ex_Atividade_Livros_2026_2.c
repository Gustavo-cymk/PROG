#include <stdio.h>
#include <string.h>

typedef struct livro {
    int id;                 // gerado automaticamente
    char titulo[80];
    char autor[60];
    char categoria[40];
    int ano;
} livro;

void receberLivros(livro v[], int n);
void listarLivros(livro v[], int n);
int indiceLivroMaisAntigo(livro v[], int n);
void listarPorCategoria(livro v[], int n, const char categoria[]);

int main() {
    livro v[5];
    int n, i, ind;
    char aux_categoria[40];

    printf("Digite a quantidade de livros (maximo 5): ");
    scanf("%d", &n);
    fflush(stdin);
    
    receberLivros(v, n);

    printf("\nLista de livros cadastrados:\n");
    listarLivros(v, n);

    ind = indiceLivroMaisAntigo(v, n);

    printf("\nLivro mais antigo:\n");
    printf("ID: %d\n", v[ind].id);
    printf("Titulo: %s\n", v[ind].titulo);
    printf("Autor: %s\n", v[ind].autor);
    printf("Categoria: %s\n", v[ind].categoria);
    printf("Ano: %d\n", v[ind].ano);

    printf("\nDigite a categoria para busca: ");
    gets(aux_categoria);
    fflush(stdin);

    printf("\nLivros encontrados na categoria \"%s\":\n", aux_categoria);
    listarPorCategoria(v, n, aux_categoria);

    return 0;
}

void receberLivros(livro v[], int n) {
    int i;

    for (i = 0; i < n; i++) {

        v[i].id = 100 + i;

        printf("\nLivro %d\n", i + 1);

        printf("Titulo: ");
        gets(v[i].titulo);
		fflush(stdin);

        printf("Autor: ");
        gets(v[i].autor);
		fflush(stdin);

        printf("Categoria: ");
        gets(v[i].categoria);
        fflush(stdin);

        printf("Ano de publicacao: ");
        scanf("%d", &v[i].ano);
        fflush(stdin);
    }
}

void listarLivros(livro v[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("\nID: %d\n", v[i].id);
        printf("Titulo: %s\n", v[i].titulo);
        printf("Autor: %s\n", v[i].autor);
        printf("Categoria: %s\n", v[i].categoria);
        printf("Ano: %d\n", v[i].ano);
    }
}

int indiceLivroMaisAntigo(livro v[], int n) {
    int i;
    int pos = 0;
    int menorAno = v[0].ano;

    for (i = 1; i < n; i++) {
        if (v[i].ano < menorAno) {
            menorAno = v[i].ano;
            pos = i;
        }
    }

    return pos;
}

void listarPorCategoria(livro v[], int n, const char categoria[]) {
    int i;
    int encontrou = 0;

    for (i = 0; i < n; i++) {
        if (strcmp(v[i].categoria, categoria) == 0) {

            printf("\nID: %d\n", v[i].id);
            printf("Titulo: %s\n", v[i].titulo);
            printf("Autor: %s\n", v[i].autor);
            printf("Categoria: %s\n", v[i].categoria);
            printf("Ano: %d\n", v[i].ano);

            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum livro encontrado na categoria \"%s\".\n", categoria);
    }
}