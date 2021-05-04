#include <stdio.h>

int fac(int N)
{
    int res = N;

    if (N == 0)
        return (1);
    else if (N == 1)
        return (1);
    res = res * fac(N - 1);
    return (res);
}
int main(void)
{
    int N = 0;
    scanf ("%d", &N);
    printf("%d", fac(N));
}