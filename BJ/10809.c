#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int save;
    int len;
    char *ptr;
    char str[100];
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    //포인터는 배열의 위치를 이용할때 사용하는 것이 좋다. 인덱스 자체에 접근할 수 없기 때문이다.
    len = 0;
    ptr = alpha;
    n = 0;
    i = 0;
    save = -1;
    scanf("%s", str);

    n = 0;
    while (*ptr)
    {
        while (str[i])
        {
            if (str[i] == *ptr)
            {
                save = i;
                break;
            }
            i++;
        }
        printf("%d ", save);
        ptr++;
        save = -1;
        i = 0;
    }
}