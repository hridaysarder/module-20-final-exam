#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int l = (n + 1) / 2 + 5;
    int s = l - 1;
    int k = 1;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }
    int s2 = ((l * 2) - 1 - n) / 2;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            printf(" ");
        }
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}