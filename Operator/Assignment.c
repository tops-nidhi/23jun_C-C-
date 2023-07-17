// WAP to use Assignment operator
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: "); //Taking input from user using scanf function is not recommended
    scanf("%d %d", &a,&b);   //Using scanf

    /*
    a = 6, b = 9
        +=, -=, *=, /=, %=
        a += b -> a = a + b -> a = 6 + 9 -> a = 15
    */
    /*a+=b;// Using assignment operator
    printf("\nAfter adding the values is:%d ", a); */
    // a -= b;
    a%=b;
    printf("\nAfter subtracting the value is :%d\n", a);
    return 0;
}

/*
    a+=b
    b-=a
    a*=b
    b/=a
    a%=b
*/