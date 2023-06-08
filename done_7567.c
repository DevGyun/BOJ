#include <stdio.h>
#define MAX_LENGTH 51
int main()
{
    char str[MAX_LENGTH];
    int height = 10;
    scanf("%s", str);
    for(int i = 1; str[i] != 0; i++)
    {
        height += 5;
        if(str[i] != str[i-1]) height += 5;
    }
    printf("%d", height);
}