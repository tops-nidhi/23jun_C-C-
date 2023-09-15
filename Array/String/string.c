#include<stdio.h>
#include<string.h>

int main()
{

    int length;
    char a[20], b[20];
    printf("Enter the character: ");
    scanf("%s",&a);
    // printf("The charter is: %s", a);
    // String Length
    // length = strlen(a);
    // printf("\nLength of the string is: %d", length);
    // String copy
    // strcpy(b, a);
    // printf("\nYour copied string is: %s", b);
    printf("Enter the second string: ");
    scanf("%s",&b);
    strcat(a,b);

    printf("Your full string is: %s", a);
    return 0;
}