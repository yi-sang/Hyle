#include <stdio.h>

int main(void)
{
    int creator = 0;
    int fake = 0;
    int c_d_sum = 0;
    int tmp = 0;
    int d_sum = 0;
    int cnt = 0;

    scanf("%d", &d_sum);
    while(creator++ < 10000000)
    {
        fake = creator;
        while(fake)
        {
            fake = fake / 10;
            cnt++;
        }
        c_d_sum = creator;
        tmp = creator;
        for(int i = 0; i < cnt; i++)
        {
            c_d_sum +=tmp % 10;
            tmp /= 10;
        }
        if (c_d_sum == d_sum)
        {
            printf("%d", creator);
            break;
        }
        if (creator == d_sum)
            printf("0");
        cnt = 0;
        c_d_sum = 0;
        fake = 0;
        tmp = 0;
    }
    return (0);
}