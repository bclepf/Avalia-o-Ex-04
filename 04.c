#include <stdio.h>

int main(){
    int matriz [50][50];
    int linhas, colunas;

    printf("Insira a quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Insira a quantidade de colunas: ");
    scanf("%d", &colunas);

    printf("Insira os valores da matriz %d X %d: \n", linhas, colunas);
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\nMatriz transposta: \n");
    for (int i = 0; i < colunas; i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            printf("%d\t", matriz[j][i]);
        }
        printf("\n");
    }
    
    getch();

    return 0;
}