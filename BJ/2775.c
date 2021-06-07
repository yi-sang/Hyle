#include <stdio.h>

int main(void)
{
    int test_case = 0;
    int k = 0;
    int n = 0;
    int people[15][14] = {0, };

    
    for(int j = 0; j < 15; j++)
    {
        for(int f = 0; f < 14; f++)
        {   
            if(j == 0)
            {
                people[j][f] = f + 1;
            }
            else
            {
                for(int d = 0; d < f + 1; d++)
                {
                    people[j][f] += people[j - 1][d];
                }
            }
        }
    }
    scanf("%d", &test_case);
    
    for(int i = 0; i < test_case; i++)
    {
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", people[k][n - 1]);
    }
}