#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int i,j;
	char str[100];
	cout<<"enter the sting "<<endl;
	gets(str);
	char str2[100];
	cout<<"enter the second string "<<endl;
	gets(str2);
	for ( i=0,j=0;i!=0&&j!=0;i++,j++){
	
	if (str[i]!=str2[j])
	break;
}
if(str[i]==str2[j])
cout<<"\tequal"<<endl;
else if (str[i]>str[j])
cout<<str<<"\tgreater"<<endl;
else
cout<<str<<"\tsmaller"<<endl;
}