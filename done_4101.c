#include <stdio.h>
int main()
{
    int big, small;
    while(1)
    {
        scanf("%d%d", &big, &small);
        if(big == 0 && small == 0) break;
        if(big > small) printf("Yes\n");
        else printf("No\n");
    }
}