#include <stdio.h>

int main()
{
    int a = 0;
    int square[3] = {0, };
    
    do
    {
        for(int i = 0; i < 3; i++)
        {
            scanf("%d", &a);
            square[i] = a;
        }
        if((square[0] == 0) && (square[1] == 0) && (square[2] == 0))
            break;
        if((square[0]*square[0] + square[1]*square[1] == square[2]*square[2])
            || square[0]*square[0] + square[2]*square[2] == square[1]*square[1]
            || square[2]*square[2] + square[1]*square[1] == square[0]*square[0])
            printf("right\n");
        else
            printf("wrong\n");
    }while(1);
}