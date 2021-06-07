#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j;
    for(i=1;i<20;i++){
        for(j=1;j<i+1;j++)
            printf("*");
        puts("");
    }
    return 0;
}
