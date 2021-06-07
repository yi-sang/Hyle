#include <stdio.h>

int    main(void)
{
    int a = 0;
    int sum = 0;
    int b = -1;
    int cnt = 0;
    int verification = 0;
    int c[5] = {0, };
    while(++b < 5)
    {
        scanf("%d", &a);
        c[b] = a;
    }
    b = -1;
    sum = 0;
    while(++b < 5)
    {
        sum = sum + c[b]*c[b];
    }
    verification = sum % 10;
    printf("%d", verification);
    return (0);
}