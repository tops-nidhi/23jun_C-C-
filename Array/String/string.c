#include<stdio.h>
#include<string.h>

int main()
{

    int length, cmp;
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
    // strcat(a,b);
    // printf("Your full string is: %s", a);
    cmp = strcmp(a, b); //use to compare the two string
    if (cmp == 0) {
        printf("Both strings are equal");
    }
    else if(cmp > 0)
    {
        printf("String A is greater than B\n");
    }
    else{
        printf("String B is greater than A \n");
    }
    return 0;
}