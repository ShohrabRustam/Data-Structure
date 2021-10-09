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
			int vowel_count=0;
			int cons_count=0;
			for( i=0;i<s[i]!='\0';i++)
			{
			
                 if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                cons_count++;
							
			}
			
				cout<<"the string has const  "<<cons_count<<endl;
		}