#include <stdio.h>
#include<math.h>
int main ()
{
 int a,b, R, CI ;
 printf("Enter principale amount");
 scanf("%d",&a);
 printf("Enter the time ");
 scanf("%d",&b);
 printf("Enter the rate");
 scanf("%d",&R);
 CI = a * (pow((1 + R / 100), b)-1);
 printf("compound interest = %d", CI);
 return 0 ;
}