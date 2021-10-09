#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main ()
{
string temp="";
string a;
getline(cin,a);
a=" "+a+" ";
for(int i=a.length()-1;i>=0;i--)
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



	



