// WAP to check max value between three variable
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("\n%d is max.", a);
        }
        else
        {
            printf("\n%d is max.", a);
        }
    }
    else
    {
        if (b > c)
        {
            printf("\n%d is max.\n", b);
        }
        else
        {
            printf("\n%d is max. \n ", c);
        }
    }
    return 0;
}