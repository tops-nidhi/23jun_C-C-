#include<stdio.h>
int main()
{
    int i, j;
    int array[3][5];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter the value: ");
            scanf("%d", &array[i][j]);
        }        
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");   
    }   
    
    return 0;
}