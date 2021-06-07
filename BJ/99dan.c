#include <stdio.h>

int main(void) {
    int i, j;
    for(i = 2; i <= 9; i++) {
        for(j = 1; j <= 9; j++) {
            printf("%02d * %02d = %03d\n", i, j, i*j);
        }
        printf("\n");   
    }
    return 0;
}