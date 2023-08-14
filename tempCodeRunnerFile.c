#include<stdio.h>
int main ()
{
    int no;
    printf("\nenter the number ");
    scanf("%d",&no);
    (no>0) ? (printf("\nno is postive number.")): ((no<0)?(printf("\nno is negative number")):(printf("\nno is neutral number"))); 
    return 0 ;
}