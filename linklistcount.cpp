#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main ()
{
 char a[1000];
 gets(a);
cout<<"length before "<<strlen(a)<<endl;
 int j=0;
 for (int i=0;a[i]!='\0';i++)
 {
 	if ( a[i]==' ' && a[i+1]!=' '|| a[i]!=' ' )
	{
 	 a[j]=a[i];
	  j++;
	}
 }
 for (int i=0;i<j;i++)
 {
 	cout<<a[i];
 	
 }
 cout<<"after length "<<j<<endl;
}
