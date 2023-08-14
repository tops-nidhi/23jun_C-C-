#include<stdio.h>
int main()
{
    int no;
    printf("Enter the number : "); //to get the input from the user
    scanf("%d",&no);
    if(no > 0)
    {
        printf("\n%d is positive no.",no);
    }
    else if(no < 0)
    {
        printf("\n%d is negative no.",no);
    }
    else{
        printf("\n%d is neutral no.",no);
    }
    
    return 0;
}