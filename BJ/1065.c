#include <stdio.h>

int han_number(int n)
{
        int minus;

        minus = 0;
        if (n == 0)
            return (0);
        if (n > 99)
            minus = n / 100 - (n / 10) % 10;
        else if (99 >= n && n> 9)
            minus = (n / 10) % 10 - n % 10;
        return (minus);
}

int main(void)
{
    int n;
    int i;
    int k;

    n = 0;
    i = 0;
    k = 0;
    scanf("%d", &n);
    if (n <= 99)
        printf("%d", n);
    else if (n > 99)
        {
            while (i <= n - 100)
            {
                if(han_number(100 + i) == han_number(100 + i - ((100 + i) / 100) * 100))
                    k += 1;
                i++;
            }
            printf("%d", 99 + k);
        }
    return (0); 
}