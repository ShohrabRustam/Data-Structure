#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    char s[500];
    int i;
    puts(" enter the string ");
	gets(s);      
   for (int i=0;s[i]!='\0';i++)
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]==' ')
	{
	}
    else{
	
    cout<<"invalid string"<<endl;
	break;
} 
cout<<"valid string "<<endl;
}