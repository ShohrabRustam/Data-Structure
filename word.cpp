#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main ()
{
string temp="";
string a;
cout<<"enter the string "<<endl;
getline(cin,a);
a=a+" ";
for(int i=0;i<a.length();i++)
{
	if (a[i]!=' ')
	{
	
	temp+=a[i];
	}
	else if(a[i]==' ')
	{
		
	cout<<temp<<endl;
	temp.erase(); 
	
    }
}
}
