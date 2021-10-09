#include<iostream>
using namespace std;
int main ()
{
	int count=0;
	int i,j;
	int n;
	cout<<"enter the size of the matrix"<<endl;
	cin >>n;
	int a[n][n];
	for(i=0;i<n;i++){
	
	for(j=0;j<n;j++){
	
	cin>>a[i][j];
}
}
	for(i=0;i<n;i++)
{

	for(j=0;j<n;j++)
	{
	
	if((i==j&&a[i][j]!=0)||(i!=j&&a[i][j]==0))
	{

	count++;
	}
	else 
	count--;
	}
}
if(count==n*2)
cout<<"diagonal matrics";
else
cout<<"not diagonal";
return 0;
}