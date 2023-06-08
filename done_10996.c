#include <stdio.h>
#define MAX_LENGTH 101
int main()
{
    int n;
    scanf("%d", &n);

    char line1[MAX_LENGTH], line2[MAX_LENGTH];
    line1[n] = line2[n] = 0;
    
    for(int i = 0; i < n; i++)
        if(i%2 == 0) line1[i] = '*', line2[i] = ' ';
        else line1[i] = ' ', line2[i] = '*';

    for(int i = 0; i < n; i++)
        printf("%s\n", line1), printf("%s\n", line2);
}