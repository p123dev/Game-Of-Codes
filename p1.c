#include<stdio.h>
int main()
{
 int ch;
 int n;
 printf("\nDo you want to enter one more number(y-1/n-2):\n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
     printf("Enter your Number:");
    scanf("%d",&n);
 if(n%2==1)
 printf("Entered number is odd");
 else
 printf("Entered number is even");
 break;
 case 2:exit (0);
}
return 0;
}
