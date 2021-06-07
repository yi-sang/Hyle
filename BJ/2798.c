#include <stdio.h>

int main(void)
{
    int rep = 0;
    int max = 0;
    int sum = -1;
    int a = 0;
    int b = 1;
    int c = 2;
    int black[101] = {0, };

    scanf("%d", &rep);
    scanf("%d", &max);
    for(int i = 0; i < rep; i++)
        scanf("%d", &black[i]);
    for(a; a < rep - 2; a++)
    {
        for(b = 1; b < rep - 1; b++)
        {
            if(b <= a)
                b = a + 1;
            for(c = 2; c < rep; c++)
            {   
                if(c <= b)
                    c = b + 1;
                if(black[a] + black[b] + black[c] <= max)
                {
                    if(sum <= black[a] + black[b] + black[c])
                        sum = black[a] + black[b] + black[c];
                }
            }
        }
    }
    printf("%d", sum);
}