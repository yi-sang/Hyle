#include <stdio.h>

int main(void)
{
    int rep = 0;
    long long hash = 0;
    long long r = 1;
    char str[51] = {0, };
    const int M = 1234567891;

    scanf("%d", &rep);
    
    for(int i = 0; i < rep; i++)
    {
        scanf("\n%c", &str[i]);
        //hash += ((str[i] - 'a' + 1) * r) % M; 50점 나오는 코드 차이점 알기
        hash = (hash + (str[i] - 'a' + 1) * r) % M; //미리 M으로 나누어줘서 오버플로 안 나도록;
		r = (r * 31) % M; // 미리 M으로 나누어줘서 오버플로 안 나도록;
    }
    printf("%lld\n", hash);
}