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