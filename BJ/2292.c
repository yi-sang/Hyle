#include <stdio.h>

int main(void)
{
    long long N = 0;
    long long n = 0;
    long long res = 1;
    /*
    int i = 0;
    int j = 0;
    long long map[][166666667] = {0, }
    map[0][0] = 1;
    while (n++ < 166666667))
    {
        i = 6 * (n - 1);
        while(i--)
        {
            map[j][i] = i + 1;
            i--;
        }
        j++;
    }
    n = 0;
    result = 0;
    */
    scanf ("%lld", &N);
    if (N == 1)
        n++;
    while (N > res)
    {
        res = res + 6 * n;
        n++;
    }
    if (!(N % res) == 1)
        printf("%lld", n);
    else
        printf("%lld", n);
}