#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TERRITORIO 5 // definindo maximo de territorios
#define TAM_STRING 30 // definindo maximo caractéres

struct Territorio  
{
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
};

void limparBufferEntrada()
{
    int c;
    while ((c= getchar()) != '\n' && c != EOF);
    
}

int main()
{
    struct  Territorio biblioteca[MAX_TERRITORIO];
    int totalTerritorio = 0;

// usando loop for para cadastrar os terriorios

  for (int i = 0; i <= 5; i++)
  {
    printf ("Digite o nome do territorio:\n");
    fgets(biblioteca[totalTerritorio].nome, TAM_STRING, stdin);

    printf ("Digite a Cor do territorio:\n");
    fgets(biblioteca[totalTerritorio].cor, TAM_STRING, stdin);

    biblioteca[totalTerritorio].nome[strcspn(biblioteca[totalTerritorio].nome, "\n")] = 0;
    biblioteca[totalTerritorio].cor[strcspn(biblioteca[totalTerritorio].cor, "\n")] = 0;

    printf ("Digite a quantidade de tropa:\n");
    scanf("%d", &biblioteca[totalTerritorio].tropas);
    limparBufferEntrada();
    totalTerritorio++;
    printf("Novo território cadastrado com sucesso!.\n");

  }
  // usando if para printar os cadastros
    if (totalTerritorio == 0)
    {
        printf ("nenhum territorio cadastrado:\n");

    }
    else
    {
        for (int i = 0; i < totalTerritorio; i++)
        {
            printf("Territorio %d:\n", i + 1);
            printf("Nome do territorio: %s\n", biblioteca[i].nome);
            printf("Cor do territorio: %s\n", biblioteca[i].cor);
            printf("Quantidade de tropa: %d\n", biblioteca[i].tropas);
            printf("===============================\n");
        }
    }



}
 