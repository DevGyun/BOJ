#include <stdio.h>
int main()
{
    int n, m, shift;
    scanf("%d", &n);
    m = shift = 1;
    while(m != 0)
    {
        for(int i = 0; i < m; i++)
            printf("*");
        for(int i = 0; i < 2 * (n - m); i++)
            printf(" ");
        for(int i = 0; i < m; i++)
            printf("*");
        printf("\n");

        if(m == n) shift = 0;
        if(shift == 1) m++;
        else m--;
    }
}