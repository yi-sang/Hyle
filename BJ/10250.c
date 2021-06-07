#include <stdio.h>

int main(void)
{
    int n = 0;
    int floor = 0;
    int number = 0;
    int room_number = 0;
    int data[3] = {0, };

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &data[j]);
        }
        number = data[2] / data[0];
        floor = data[2] % data[0];
        if (floor == 0)
        {
            room_number = data[0] * 100 + number;
            printf("%d\n", room_number);
        }
        else
        {
            room_number = floor * 100 + number + 1;
            printf("%d\n", room_number);
        }
    }
}