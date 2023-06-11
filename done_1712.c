#include <stdio.h>
int main()
{   //a : fixed, b : variable, c : price
    int A, B, C, n;
    scanf("%d %d %d", &A, &B, &C);
    if(C <= B)
    {
        printf("-1");
        return 0;
    }
    n = ((double)A / (C - B)) + 1;
    printf("%d", n);
}