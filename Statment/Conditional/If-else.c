#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\nCongratulation you are eligible to vote.");
    }
    else{
        printf("\nSorry, You cannot vote");
    }
    
    return 0;
}