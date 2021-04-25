#include <stdio.h>

int self_number(int n)
{
        int result;

        result = n;
        if (n == 0)
            return (0);
        if (n > 9)
            result %= 10;
        if (n < 9)
            result %= 10;
        return (result + self_number(n / 10));
}

int ten_tous(int creation)
{
    if (creation > 10000)
        return (0);
    return (1);
}

int main(void)
{
    int n;
    int i;
    int creation;
    int creations[10001];
    int sort_creations[10001];

    n = 1;
    i = 1;
    while(n <= 10000)
    {
        sort_creations[n] = 0;
        creations[n] = 0;
        creation = self_number(n) + n;
        if (ten_tous(creation))
            creations[n] = creation;
        n++;
    }
    n = 0;
    while(n++ < 10000)
    {
        while (i <= 10001)
        {
            if (n != creations[i])
            {
                i++;
                if (i == 10001)
                {
                    sort_creations[n] = n; 
                    printf("%d\n", n);
                }
            }
            else
                break; 
        }
        i = 0;
    }
    return (0); 
}