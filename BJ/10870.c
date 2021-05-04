#include <stdio.h>

int feb(int N)
{
    int febo = N;
    if (febo == 0)
        return (0);
    if (febo == 1)
        return (1);
    febo = feb(febo - 1) + feb(febo - 2);
    return (febo);
}

int main(void)
{
    int N = 0;

    scanf("%d", &N);
    printf("%d", feb(N));
}