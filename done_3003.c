#include <stdio.h>
int main()
{
    int correct[6] = {1, 1, 2, 2, 2, 8};
    int difference[6];
    int temp;
    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &temp);
        difference[i] = correct[i] - temp;
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", difference[i]);
    }
}