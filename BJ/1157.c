#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[1000001] = {0, };
    unsigned char alpha[256] = {0, }; //unsigned char로 받으면 내부요소가 256이 넘어갈경우 오류.
    int len;
    int max;
    int n;
    int flag;

    len = -1;
    n = 0;
    max = 0;
    flag = 0;
    scanf("%s", str);
    while (str[++len])
    {
        if(str[len] < 65 || (str[len] > 90 && str[len] < 97) || str[len] > 122)
            return (0);
        if(str[len] >= 97 && str[len] <= 122)
            str[len] = str[len] - ('a' -'A');
        alpha[str[len]] += 1;
    }

    len = -1;
    while (++len <= 255)
    {
        if (max <= alpha[len])
        {
            max = alpha[len];
            n = len;
        }
    }
    
    len = n;
    if (n == 0)
        return(0);

    while (--n >= 65)
    {
        if (max == alpha[n])
        {
            printf("?\n");
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
        printf("%c\n", len);
    return (0);
}