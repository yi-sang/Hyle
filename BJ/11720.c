#include <stdio.h>

int    main(void)
{
    int len;
    int sum;
    int i;
    char str[100]; //포인터로 선언하니까 배열의 크기를 지정해주지 않아서인지 백준 코딩에서는 틀렷다고 나옴.

    len = 0;
    i = -1;
    sum = 0;
    scanf("%d", &len);
    scanf("%s", str);
    str[len] = '0';
    while(i++ < len)
    {
        sum = sum + str[i] - '0';    
    }
    printf("%d\n", sum);
    return (0);
}
