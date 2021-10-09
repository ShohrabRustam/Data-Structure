#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main ()
{
 char a[1000];
 gets(a);
 int j=0;
 for (int i=0;a[i]!='\0';i++)
 {
 	if (a[i]==' '&&a[i+1]!=' '||a[i]!=' ')
	{
 	 a[j]=a[i];
	  j++;
	}
 }
 for (int i=0;i<j;i++)
 {
 	cout<<a[i];
 }
}