#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int A;
    int answer;
    int B;
    int n;

    A = 0;
    B = 0;
    answer = 0;
    n = 0;
    scanf("%d", &A); //띄어쓰기로 받을 수 있음 int로 선언하면
    scanf("%d", &B);
    A = 100 * (A % 10) + 10* ((A / 10) % 10) + A / 100;
    B = 100 * (B % 10) + 10* ((B / 10) % 10) + B / 100;
    answer = A > B ? A : B;
    printf("%d", answer);    
    return (0);
}