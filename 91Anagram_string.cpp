#include<iostream>
#include<string.h>
using namespace std;
int main()
{
        char str[100];
        int i, length;
      	char str2[100];

        cout<<"\n Enter String : ";
        cin>>str;   
		cout<<"\nEnter second String: ";
		cin>>str2;
		for (i=0;str[i]!='\0';i++)
		{
			for(int j=0;str2[j]!='\0';j++)
			{
				if(str[i]==str2[j])
				str2[j]='_';
			}
		
		}
		for(i=0;str[i]!='\0';i++)	
		{
		
		if(str2[i]!='_'){
		
		cout<<"Not Anagram"<<endl;
		break;
		}
		else if(str[i+1]=='\0')
		cout<<"Anagram"<<endl;
	}
	
		
		
}