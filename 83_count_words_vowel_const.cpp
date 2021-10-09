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
			int count =1;
			for( i=0;i<s[i]!='\0';i++)
			{
				if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
				vowel_count++;
                else if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                cons_count++;
                else if(s[i]== ' '&& s[i-1]!=' ')
                count++;
							
			}
				cout<<"the string has vowel "<<vowel_count<<endl;
				cout<<"the string has cons "<<cons_count<<endl;
				cout<<"the string has words "<<count<<endl;
		}