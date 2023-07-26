// WAP to get the address of the other variable
#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("\nAddress of the a is: %d", ptr);
    // ++ptr;
    // printf("\nAfter increment address of the a is: %d", ptr);
    *ptr = 13;
    printf("\nValue of the a is: %d", a);
    return 0;
}