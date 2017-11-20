#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double cost;
    double tip;
    double tax;
    scanf("%lf", &cost);
    scanf("%lf", &tip);
    scanf("%lf", &tax);
    double cost1 = cost;
    cost1 = cost1 + cost * (tip / 100.00);
    cost1 = cost1 + cost * (tax / 100.00);
    printf("The total meal cost is %d dollars.",  (int) round(cost1));
    return 0;
}

