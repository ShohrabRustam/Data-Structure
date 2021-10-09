		#include<iostream>
		#include<string>
		#include<stdio.h>
		using namespace std;
		int main()
		{
		    int i;
			char s[100];
			cout<<" enter the string "<<endl;
			gets(s);
			for( i=0;i<s[i]!='\0';i++)
			{
				if(s[i]>='A'&&s[i]<='Z')
				s[i]+=32;
							
			}
			
			cout<<"the string is in upper case is "<<s<<endl;
		}