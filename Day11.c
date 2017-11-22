#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int find(int a[6][6], int i, int j)
{
    int k = 0, sum = 0, m = i, n = j;
    int row[6] = {0, 0, 1, 2, 2, 2};
    int col[6] = {1, 2, 1, 0, 1, 2};
    sum = sum + a[i][j];
    while(k < 6)
    {
        i = m + row[k];
        j = n + col[k];
        sum = sum + a[i][j];
        k++;
    }
    return sum;
}

int main(){
    int i, j, res = 0, max = INT_MIN;
    int a[6][6];
    for(i = 0;i < 6;i++)
    {
       for(j = 0;j < 6;j++)
       {
            scanf("%d", &a[i][j]);
       }
    }
    for(i = 0;i < 4;i++)
    {
       for(j = 0;j < 4;j++)
       {
            res = find(a, i, j);
            if(max < res)
                max = res;
       }
    }
    printf("%d", max);
    return 0;
}
