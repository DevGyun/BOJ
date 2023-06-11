#include <stdio.h>
#define MAX_SIZE 50
int main()
{
    int n, m;
    scanf("%d%d ", &n, &m);
    int guardR, guardL;
    guardR = guardL = 0;
    int checkRow[MAX_SIZE] = {0,},
        checkCol[MAX_SIZE] = {0,};
    char temp;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%c", &temp);
            if(temp == 'X')
            {
                checkRow[i] = 1;
                checkCol[j] = 1;
            }
        }
        getchar();  
    }
    
    for(int i = 0; i < n; i++)
        if(checkRow[i] == 0) guardR++;
    for(int i = 0; i < m; i++)
        if(checkCol[i] == 0) guardL++;

    if(guardR > guardL) printf("%d", guardR);
    else printf("%d", guardL);
}