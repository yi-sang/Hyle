#include <stdio.h>

int main(void)
{
    long long A;
    long long B;
    long long C;
    long long br_even_pt;
    scanf("%lld", &A);
    scanf("%lld", &B);
    scanf("%lld", &C);
    if (C == B)
    {
        br_even_pt = -1;
    }
    else
        br_even_pt = A / (C - B) + 1;
        if (br_even_pt <= 0)
            br_even_pt = -1;
    printf("%lld", br_even_pt);
    return (0);
}