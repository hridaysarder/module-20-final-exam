#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int m1 = a * b * c;
        if (m1 == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            if (m % m1 == 0)
            {
                printf("%lld\n", m / m1);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}