#include <stdio.h>
void star(int cnt = 0)
{
    if (cnt == 0)
    {
        printf("*");
        return ;
    }
    star(cnt - 1);
    
}

int main(void)
{
    int N = 0;
    int cnt = 0;
    scanf ("%d", &N);
    while (N / 3)
    {
        N = N / 3;
        cnt++;
    }
    star(cnt);
}