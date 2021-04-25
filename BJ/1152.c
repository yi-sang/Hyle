#include <stdio.h>

int    main(void)
{
    char    str[1000001];
    int     n;
    int     flag;
    int     cnt;
    
    n = 0;
    flag = 0;
    cnt = 0;
    fgets(str, sizeof (str), stdin);
    if ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))
    {
            cnt++;
            n++;
    }
    
    while(str[++n])
    {        
        if (str[n - 1] == ' ' && ((str[n] >= 'A' && str[n] <= 'Z') || (str[n] >= 'a' && str[n] <= 'z')))
            cnt += 1;          
    }
    printf("%d", cnt);
}