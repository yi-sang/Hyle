#include <stdio.h>

int    main(void)
{
    int a = 0;
    int b = -1;
    int cnt = 0;
    int c[8] = {0, };
    while(++b < 8)
    {
        scanf("%d", &a);
        c[b] = a;
    }
    b = -1;
    while(++b < 8)
    {
        if(c[b + 1] == c[b] + 1)
            cnt++;
    }
    if (cnt == 7)
    {
        printf("ascending");
        return (0);
    }
    b = -1;
    cnt = 0;
    while(++b < 8)
    {
        if(c[b + 1] == c[b] - 1)
            cnt++;
    }
    if (cnt == 7)
    {
        printf("descending");
        return (0);
    }
    else
    {
        printf("mixed");
        return (0);
    }
    return (0);
}