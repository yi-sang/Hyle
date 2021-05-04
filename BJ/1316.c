#include <stdio.h>

int main(void)
{
    int str_cnt = 0;
    int n = 0;
    int cnt = 0;
    int real_cnt = 0;
    char str[101];
    char alpha[256] = {0, };
    scanf("%d", &str_cnt);
    real_cnt = str_cnt;
    while(str_cnt--)
    {
        scanf("%s", str);
        while(str[n])
        {
            if (str[n] >= 'a' && str[n] <= 'z')
            {
                if(alpha[str[n]] == 0)
                {
                    if (str[n] != str[n + 1])
                    {
                        alpha[str[n]] = 1; 
                    }
                }
                else if(alpha[str[n]] == 1)
                {
                    if (str[n] != str[n - 1])
                    {
                        cnt++;
                        break;
                    }
                }
                n++;
            }
        }
        n = -1;
        while(++n < 256)
        {
            alpha[n] = 0;
        }
        n = 0;
        
    }
    printf("%d", real_cnt - cnt);
}