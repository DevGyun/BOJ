#include <stdio.h>
#define MAX_LENGTH 11
int main()
{
    // @ : *3   % : +5   # : -7
    int testCase;
    double num;
    char ex[7];
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        scanf("%lf", &num), fgets(ex, sizeof(ex), stdin);
        double result = num;

        for (int j = 0; ex[j] != 0; j++)
        {
            if (ex[j] == ' ') continue;
            if (ex[j] == '@') result *= 3;
            else if (ex[j] == '%') result += 5;
            else if (ex[j] == '#') result -= 7;
        }
        printf("%.2lf\n", result);
    }
}