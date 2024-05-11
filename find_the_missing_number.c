#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int m1 = a * b * c;
        if (m1 == 0)
        {
            if (m == 0)
            {
                printf("0");
            }
            else
            {
                printf("-1");
            }
        }
        else
        {
            if (m % m1 == 0)
            {
                printf("%lld", m / m1);
            }
            else
            {
                printf("-1");
            }
        }
        printf("\n");
    }
    return 0;
}

// for (int i=0;i<row;i++)
// {
// for(int j=0;j<column;j++)
// {
// if((i==j || i+j == row-1) && ( a[i][j] != 1))
// {
// flag = 0;
// break;
// }
// else if(i!=j && i+j!=row-1 && a[i][j] != 0)
// {
// flag = 0;
// break;
// }
// }
// }