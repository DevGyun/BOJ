#include <stdio.h>

int main()
{
    double db;
    int i;
    char c;
    char str[6];
    scanf("%lf", &db);
    scanf("%d", &i);
    scanf(" %c", &c);
    scanf("%s", str);
    printf("%lf, %d, %c, %s",db,i,c,str);
    printf("%s", str);
}