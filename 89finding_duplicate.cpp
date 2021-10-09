#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        char str[100];
        int i, length;
      

        cout<<"\n Enter String : ";
        cin>>str;    

        length = strlen(str);    

        for(i=0;i < str[i]!='\0';i++)
{		int  count =0;      
    for(int j=i+1;j<length;j++)
    {
    if(str[i]==str[j])
	{
	
    count ++;
    str[j]='1';
	}
	}
   if(str[i]!='1')
     cout<<str[i]<<"\t"<<count+1<<"times"<<endl;
 }
    
    }