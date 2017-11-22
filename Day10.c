#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i, x = 0, count = 0, max = INT_MIN;
    scanf("%d",&n);
    for(i = 0;i < 32;i++)
    {
        x = n & 1;
        if(x == 1)
            count++;
        else if(x == 0)
        {
            if(max < count)
                max = count;
            count = 0;
        }
        n = n >> 1;
    }
    printf("%d\n", max);
    return 0;
}
