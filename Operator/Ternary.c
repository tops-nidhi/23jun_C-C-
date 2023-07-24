// WAP to find the max value between the two variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of the a and b:");
    scanf("%d %d", &a, &b);
    (a > b) ? (printf("A is max.")) : (printf("b is max."));
    return 0;
}