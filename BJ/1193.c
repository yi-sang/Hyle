#include <stdio.h>

int main(void)
{
    int N = 0;
    int mol = 1;
    int den = 1;
    int n = 0;
    int sum = 0;
    scanf("%d", &N);
    while (N > sum) // 이해하기 상당히 어려웠음 
    {
        sum += ++n;
    }
    /*
N = (입력값)    n = (n번째 수열) sum = (해당 수열의 마지막 수의 번호)
        N = 1   n = 1;  sum = 1; 
        N = 2   n = 2;  sum = 3;
        N = 3   n = 3;  sum = 3;
        N = 4   n = 4;  sum = 6;
        N = 5   n = 5;  sum = 6;
        N = 6   n = 6;  sum = 6;
        N = 7   n = 7;  sum = 6;
    */
    if (n % 2 == 1)
    {
        mol = 1;
        den = n;
        mol = mol + (sum - N);
        den = den - (sum - N);
    }
    else if (n % 2 == 0)
    {
        mol = n;
        den = 1;
        mol = mol - (sum - N);
        den = den + (sum - N);
    }
    printf("%d%c%d", mol, '/', den);
}