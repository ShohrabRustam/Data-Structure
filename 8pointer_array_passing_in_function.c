    #include<stdio.h>
       void PrintArray(int *ptr, int n)
       {
           for (int i=0;i<n;i++)
           {
            printf("the value of %d array is %d \n",i+1,*(ptr+i));
           }
       }
       int main ()
       {
           int arr[]={45,56,35,75,59};
           PrintArray(arr,5);
           return 0;
       }
    
    