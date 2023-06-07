#include <stdio.h>
#include <stdlib.h>

void drawStar(int r, int c, int n)
{
    if(n == 1)
    {
        table[r][c] = 1;
        return;
    }
    int tempC = c;
    n /= 3;
    for(int i = 0; i < 3; i++)
    {
        drawStar(r, tempC, n);
        tempC += n;
    }
    r += n; tempC = c;
    drawStar(r, tempC, n);
    tempC += (n) * 2;
    drawStar(r, tempC, n);
    r += n; tempC = c;
    for(int i = 0; i < 3; i++)
    {
        drawStar(r, tempC, n);
        tempC += n;
    }
}
void printTable(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(table[i][j] == 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

int** table;
int main()
{
    int n;
    scanf("%d", &n);
    table = (int**)malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++)
    {
        table[i] = (int*)malloc(sizeof(int) * n);
        for(int j = 0; j < n; j++)
            table[i][j] = 0;
    }
    drawStar(0, 0, n);
    printTable(n);
}