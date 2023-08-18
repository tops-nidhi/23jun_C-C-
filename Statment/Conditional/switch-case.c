// Switch is use to give a choice to the user.
#include<stdio.h>
int main()
{
    int choice, a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("\nAddition of the a and b is: %d", a+b);
            break;
        case 2: 
            printf("\nSubtraction of the a nad b is: %d", a-b);
            break;
        case 3: 
            printf("\nMultiplication of the a nad b is: %d", a*b);
            break;
        case 4:
            printf("\nDivision of the a and b is: %d", a/b);
            break;
        default: 
            printf("Enter valid choice..........");
            break;
    }
    return 0;
}