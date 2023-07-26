// WAP to swap the two number using third variable.
#include<stdio.h>
int main() {
    int a=10, b=20, c;
    printf("Before swapping: \na = %d\nb = %d",a,b);
    //swapping logic here
    c = a;
    a = b; 
    b = c;
    printf("\nAfter Swapping:\na = %d\nb = %d",a,b);
    return 0;
}