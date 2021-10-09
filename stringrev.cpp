#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main ()
{
	int i,j=0;
string temp="";
string a;
getline(cin,a);
a=" "+a+" ";
int n=a.length();
for(i=n-1;i>=0;i--)
{
	if (a[i]!=' ')
	{
	temp+=a[i];
	}
	else if(a[i]==' ')
	{
		
	temp+=a[i];
	cout<<temp;
	temp.erase();   
	
    }
}
}

