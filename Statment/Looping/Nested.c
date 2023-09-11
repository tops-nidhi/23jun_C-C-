#include<stdio.h>
int main()
{
    int i, j, count = 5;
    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < count; j++)
        {
            printf(" ");
        }
        count--;
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
/*
     1
    2 3
   4 5 6
  7 8 9 10
11 12 13 14

*/