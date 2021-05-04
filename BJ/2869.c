#include <stdio.h>

int main(void)
{
    int v = 0;
    int a = 0;
    int b = 0;
    int d = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &v);
    if((v - a) % (a - b))//V에서 마지막 A가는 거리를 뺀 것이 하룻동안 이동한 거리로 딱 맞게 안 떨어진다면
    {
		d = ((v - a) / (a - b) + 1); //하루를 더 추가, 나머지가 남으니까 하루를 더 가야 한다.
	}
	else 				 //V에서 마지막 A가는 거리를 뺀 것이 하룻동안 이동한 거리로 딱 맞게 떨어진다면
	{
		d = ((v - a) / (a - b)); 	//V - A를 A - B로 나누어 이동한 총 일수를 계산
	}
	d++; //마지막 A이동 횟수를 증가
    printf("%d", d);
}