#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a="i am muslim man";
	a=' '+ a; 
	string temp="";
	int n=a.length();
	for (int i=n-1;i>=0;i--)
	{
		 if(a[i]!=' '||a[n-1-i]==' ')
		 temp+=a[i]+a[n-1-i];
		 else if (a[i]==' ')
		 {
		 cout<<temp+a[i];
		 temp.erase();
		 }
	}
	return 0;
}
