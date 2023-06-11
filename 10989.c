#include <stdio.h>
int main()
{
    int numCounts[10001] = {0,};
    int i, j, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", numCounts);
        numCounts[*numCounts]++;
    }
    for(i = 1; i <= 10000; i++)
    {
        if(numCounts[i] == 0) continue;
        for(j = 0; j < numCounts[i]; j++)
            printf("%d\n", i);
    }
}