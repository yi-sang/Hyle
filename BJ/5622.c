#include <stdio.h>

int char_num(char *str)
{
    int n;
    int cnt;

    n = -1;
    cnt = 0;
    while (str[++n])
    {
        if (str[n - 1] != 'd' && str[n] == 'z' && str[n + 1] == '=')
        {
            cnt = cnt + 1;
            n++;
        }

        else if (str[n] == 'c' && str[n + 1] == '=')
        {
            cnt = cnt + 1;
            n++;
        }

        else if (str[n] == 'c' && str[n + 1] == '-')
        {
            cnt = cnt + 1;
            n++;
        }

        else if (str[n] == 'd' && str[n + 1] == 'z'&& str[n + 2] == '=')
        {
            cnt = cnt + 1;
            n = n + 2;
        }


        else if (str[n] == 'd' && str[n + 1] == '-')
        {
            cnt = cnt + 1;
            n++;
        }

        else if (str[n] == 'l' && str[n + 1] == 'j')
        {
            cnt = cnt + 1;
            n++;
        }

        else if (str[n] == 'n' && str[n + 1] == 'j')
        {
            cnt = cnt + 1;
            n++;
        }

        else if (str[n] == 's' && str[n + 1] == '=')
        {
            cnt = cnt + 1;
            n++;
        }

        else
            cnt = cnt + 1;
    }
    return (cnt);
}

int    main(void)
{
    int num;
    char str[101] = {0, };

    num = 0;
    scanf("%s", str);
    num = char_num(str);
    printf("%d", num);
    return (0);
}