#include <stdio.h>
int main()
{
    int n, result;
    while(1)
    {
        scanf("%d", &n);
        if(n == 0) break;
        result = 0;
        for(int i = 1; i <= n; i++)
        {
            result += i;
        }
        printf("%d\n", result);
    }
}