#include<stdio.h>
void sort(int *a,int n)
{
  for (i = 0; i < n; ++i) 
    {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
}   }       }   }
int main()

    {
 
        int i, j, temp, n, a[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
    
           sort(a,n);
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", a[i]);
       return 0;
    }