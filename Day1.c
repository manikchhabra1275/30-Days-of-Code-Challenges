#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
        int j;
    double e;
    char t[100];
    scanf("%d ", &j);
    scanf("%lf ", &e);
    scanf("%[^\n]s", t);
    printf("%d\n", i + j);
    printf("%0.1lf\n", d + e);
    int a = 0, b = 0;
    while(s[a] != '\0')
    {
        a++;
    }
    while(t[b] != '\0')
    {
        s[a] = t[b];
        b++;
        a++;
   }
   s[a] = '\0';
   puts(s);
   return 0;
}
