#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[row - 1][i]);
    }
    printf("\n");
    for (int j = 0; j < row; j++)
    {
        printf("%d ", a[j][col - 1]);
    }
    return 0;
}