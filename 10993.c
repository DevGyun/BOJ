#include <stdio.h>
#include <stdlib.h>
#define EVEN 0
#define ODD 1

void drawStar(int row, int col, int n)
{
    switch(n%2)
    {
        case EVEN:




        break;
        case ODD:

            


        break;
    }
}

int** table;
int main()
{
    int n;
    scanf("%d", &n);
    int width, height;
    width = 1;
    for(int i = 1; i < n; i++)
    {
        height = width + 2;
        width = ((height) * 2) - 1;
    }
    table = (char**)malloc(sizeof(char*) * height);
    for(int i = 0; i < height; i++)
    {
        table[i] = (char*)malloc(sizeof(char) * width);
        for(int j = 0; j < width; j++)
            table[i][j] = ' ';
    }
    //-------------------------------
}