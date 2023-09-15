// Array is use to store the multiple value of one data type in the one variable
#include<stdio.h>
int main()
{
    int a[20] = {1,54, 786, 21, 45};
    int i;
    for(i=0 ; i < 5; ++i){
        printf("Enter the value: ");
        scanf("%d", &a[i]);
    }

    // for(i=0 ; i< sizeof (a)/sizeof(*a) ; ++i)
    for(i=0 ; i< 5 ; ++i)
    {
        printf("\nArray elements are: %d", a[i]);
    }
    return 0;
}