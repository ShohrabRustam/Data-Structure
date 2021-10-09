#include<stdio.h>
#include<conio.h>
int main()
{
   int n;
   int *m;
   m=&n;
   printf("please enter the value of n\n");
   scanf("%d",&n);
   printf("the address of n is %u\n",m);
   printf("the address of n is %u\n",&n);
   printf("the value of n is %d\n",*m);
   printf("the value of n is %d\n",*(&n));
   return 0;
}