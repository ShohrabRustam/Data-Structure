#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,n;
    printf("please enter the number of emoplyee \n");
    scanf("%d",&n);
    struct employee
    {
        int an;
        char name[20],acctype[20];
        float bal;
    }emp[100];
    for (i=0;i<n;i++)
    {
        printf("please enter the employee %d name,acc_type 'acc_num and bal\n",i+1);
        scanf("%s%s%d%f",&emp[i].name,&emp[i].acctype,&emp[i].an,&emp[i].bal);
    }
    for (i=0;i<n;i++){
    printf ("the employe %d have name %s acctype %s acc num %d and bal %f\n",i+1,emp[i].name,emp[i].acctype,emp[i].an,emp[i].bal);
}}