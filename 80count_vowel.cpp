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
				if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
				vowel_count++;
              
							
			}
			
				cout<<"the string has vowel "<<vowel_count<<endl;
		}