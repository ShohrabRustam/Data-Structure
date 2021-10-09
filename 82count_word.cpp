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
				 if(s[i] ==' '&&s[i+1]!=' ')
                 {
                count++;
                 }
							
			}

			cout<<"the string has words "<< count <<endl;
		}